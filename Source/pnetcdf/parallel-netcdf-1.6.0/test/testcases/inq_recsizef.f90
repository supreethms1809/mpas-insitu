!
!   Copyright (C) 2014, Northwestern University and Argonne National Laboratory
!   See COPYRIGHT notice in top-level directory.
!
! $Id: inq_recsizef.f90 1852 2014-11-03 18:23:52Z wkliao $

!
! This program tests if one can get the size of record block correctly.
! The record block size is the sum of individual record of all record
! variables. It first defines some number of record and fixed-size
! variables and then calls the API ncmpi_inq_recsize() and varify if
! the numbers are ! correct.
!
! The compile and run commands are given below. This program is to be
! run on one MPI process.
!
!    % mpif90 -g -o inq_recsizef inq_recsizef.f90 -lpnetcdf
!
!    % mpiexec -l -n 1 inq_recsizef testfile.nc
!
      subroutine check(err, message)
          use mpi
          use pnetcdf
          implicit none
          integer err
          character(len=*) message
          character(len=128) msg

          ! It is a good idea to check returned value for possible error
          if (err .NE. NF90_NOERR) then
              write(6,*) trim(message), trim(nf90mpi_strerror(err))
              msg = '*** TESTING F90 inq_recsizef.f90 for inquiring record size'
              write(*,"(A67,A)") msg,'------ failed'
              call MPI_Abort(MPI_COMM_WORLD, -1, err)
          end if
      end subroutine check

      program main
          use mpi
          use pnetcdf
          implicit none

          character(LEN=128) filename, cmd, msg
          integer argc, IARGC, err, nprocs, rank, cmode, ncid, pass
          integer varid(7), dimid(3), dimid_1D(1), dimid_2D(2)
          integer(kind=MPI_OFFSET_KIND) expected_recsize, recsize
          integer(kind=MPI_OFFSET_KIND) malloc_size, sum_size
          character(len = 4) :: quiet_mode
          logical verbose

          call MPI_Init(err)
          call MPI_Comm_rank(MPI_COMM_WORLD, rank, err)
          call MPI_Comm_size(MPI_COMM_WORLD, nprocs, err)

          ! take filename from command-line argument if there is any
          call getarg(0, cmd)
          argc = IARGC()
          if (argc .GT. 2) then
              if (rank .EQ. 0) print*,'Usage: ',trim(cmd),' [-q] [filename]'
              goto 999
          endif
          verbose = .TRUE.
          filename = "testfile.nc"
          call getarg(1, quiet_mode)
          if (quiet_mode(1:2) .EQ. '-q') then
              verbose = .FALSE.
              if (argc .EQ. 2) call getarg(2, filename)
          else
              if (argc .EQ. 1) call getarg(1, filename)
          endif

          ! create file, truncate it if exists
          cmode = IOR(NF90_CLOBBER, NF90_64BIT_OFFSET)
          err = nf90mpi_create(MPI_COMM_WORLD, filename, cmode, &
                               MPI_INFO_NULL, ncid)
          call check(err, 'In nf90mpi_create: ')

          ! define dimensions
          err = nf90mpi_def_dim(ncid, "X", 10_8, dimid(1))
          call check(err, 'In nf90mpi_def_dim X: ')
          err = nf90mpi_def_dim(ncid, "Y", 2_8,  dimid(2))
          call check(err, 'In nf90mpi_def_dim Y: ')
          err = nf90mpi_def_dim(ncid, "REC_DIM", NF90MPI_UNLIMITED, dimid(3))
          call check(err, 'In nf90mpi_def_dim REC_DIM: ')

          ! define some record variables
          dimid_1D(1) = dimid(3)
          dimid_2D(1) = dimid(2)
          dimid_2D(2) = dimid(3)

          expected_recsize = 0;

          err = nf90mpi_def_var(ncid, "REC_VAR_1", NF90_INT, dimid_1D, varid(1))
          call check(err, 'In nf90mpi_def_var: REC_VAR_1')
          expected_recsize = expected_recsize + 4
          err = nf90mpi_def_var(ncid, "REC_VAR_2", NF90_INT, dimid,    varid(2))
          call check(err, 'In nf90mpi_def_var: REC_VAR_2')
          expected_recsize = expected_recsize + 10 * 2 * 4
          err = nf90mpi_def_var(ncid, "REC_VAR_3", NF90_INT, dimid_2D, varid(3))
          call check(err, 'In nf90mpi_def_var: REC_VAR_3')
          expected_recsize = expected_recsize + 2 * 4
          err = nf90mpi_def_var(ncid, "REC_VAR_4", NF90_INT, dimid_1D, varid(4))
          call check(err, 'In nf90mpi_def_var: REC_VAR_4')
          expected_recsize = expected_recsize + 4

          ! define some fixed-size variables
          dimid_1D(1) = dimid(1)
          dimid_2D(1) = dimid(1)
          dimid_2D(2) = dimid(2)

          err = nf90mpi_def_var(ncid, "FIX_VAR_1", NF90_INT, dimid_2D, varid(5))
          call check(err, 'In nf90mpi_def_var: FIX_VAR_1')
          err = nf90mpi_def_var(ncid, "FIX_VAR_2", NF90_INT, dimid_1D, varid(6))
          call check(err, 'In nf90mpi_def_var: FIX_VAR_2')
          err = nf90mpi_def_var(ncid, "FIX_VAR_3", NF90_INT, dimid_1D, varid(7))
          call check(err, 'In nf90mpi_def_var: FIX_VAR_3')

          ! do not forget to exit define mode
          err = nf90mpi_enddef(ncid)
          call check(err, 'In nf90mpi_enddef: ')

          ! inquire the numbers of variables (record and fixed-size
          err = nf90mpi_inq_recsize(ncid, recsize)
          call check(err, 'In nf90mpi_inquire: ')

          pass = 1
          if (expected_recsize .NE. recsize) then
              write(6,*) "Error: expecting resize ", expected_recsize,", but got ", recsize
              pass = pass - 1
          endif

          err = nf90mpi_close(ncid)
          call check(err, 'In nf90mpi_close: ')

          ! check if there is any PnetCDF internal malloc residue
 998      format(A,I13,A)
          err = nfmpi_inq_malloc_size(malloc_size)
          if (err == NF_NOERR) then
              call MPI_Reduce(malloc_size, sum_size, 1, MPI_OFFSET, &
                              MPI_SUM, 0, MPI_COMM_WORLD, err)
              if (rank .EQ. 0 .AND. sum_size .GT. 0_8) print 998, &
                  'heap memory allocated by PnetCDF internally has ',  &
                  sum_size/1048576, ' MiB yet to be freed'
          endif

          msg = '*** TESTING F90 '//trim(cmd)//' for inquiring record size'
          if (rank .eq. 0) then
              if (pass .EQ. 1) then
                  write(*,"(A67,A)") msg,'------ pass'
              else
                  write(*,"(A67,A)") msg,'------ failed'
              endif
          endif

 999      call MPI_Finalize(err)
      end program main

