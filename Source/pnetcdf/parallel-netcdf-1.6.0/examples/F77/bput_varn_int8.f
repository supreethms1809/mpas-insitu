!
!   Copyright (C) 2014, Northwestern University
!   See COPYRIGHT notice in top-level directory.
!
! $Id: bput_varn_int8.f 1958 2014-12-27 21:04:48Z wkliao $

! This example tests nonblocking varn API: nfmpi_bput_varn_int8()
! It writes a sequence of requests with arbitrary array indices and
! lengths to four variables of type NF_INT64
!
! The compile and run commands are given below, together with an
! ncmpidump of the output file.
!
! The compile and run commands are given below, together with an ncmpidump of
! the output file.
!
!    % mpif77 -O2 -o bput_varn_int8 bput_varn_int8.f -lpnetcdf
!    % mpiexec -n 4 ./bput_varn_int8 /pvfs2/wkliao/testfile.nc
!    % ncmpidump /pvfs2/wkliao/testfile.nc
!    netcdf testfile {
!    // file format: CDF-5 (big variables)
!     dimensions:
!              Y = 4 ;
!              X = 10 ;
!     variables:
!             int64 var0(Y, X) ;
!             int64 var1(Y, X) ;
!             int64 var2(Y, X) ;
!             int64 var3(Y, X) ;
!     data:
!
!     var0 =
!      1, 0, 3, 0,
!      1, 2, 3, 0,
!      1, 2, 2, 0,
!      3, 2, 1, 2,
!      3, 1, 1, 3,
!      0, 3, 1, 3,
!      0, 3, 0, 3,
!      2, 2, 0, 1,
!      3, 2, 3, 1,
!      3, 2, 3, 1 ;
!
!     var1 =
!      2, 1, 0, 1,
!      2, 3, 0, 1,
!      2, 3, 3, 1,
!      0, 3, 2, 3,
!      0, 2, 2, 0,
!      1, 0, 2, 0,
!      1, 0, 1, 0,
!      3, 3, 1, 2,
!      0, 3, 0, 2,
!      0, 3, 0, 2 ;
!
!     var2 =
!      3, 2, 1, 2,
!      3, 0, 1, 2,
!      3, 0, 0, 2,
!      1, 0, 3, 0,
!      1, 3, 3, 1,
!      2, 1, 3, 1,
!      2, 1, 2, 1,
!      0, 0, 2, 3,
!      1, 0, 1, 3,
!      1, 0, 1, 3 ;
!
!     var3 =
!      0, 3, 2, 3,
!      0, 1, 2, 3,
!      0, 1, 1, 3,
!      2, 1, 0, 1,
!      2, 0, 0, 2,
!      3, 2, 0, 2,
!      3, 2, 3, 2,
!      1, 1, 3, 0,
!      2, 1, 2, 0,
!      2, 1, 2, 0 ;
!     }
!
!    Note the above dump is in C order
!
      subroutine check(err, message)
          implicit none
          include "mpif.h"
          include "pnetcdf.inc"
          integer err
          character(len=*) message

          ! It is a good idea to check returned value for possible error
          if (err .NE. NF_NOERR) then
              write(6,*) trim(message), trim(nfmpi_strerror(err))
              call MPI_Abort(MPI_COMM_WORLD, -1, err)
          end if
      end subroutine check

      program main
          implicit none
          include "mpif.h"
          include "pnetcdf.inc"

          integer NDIMS
          integer(kind=MPI_OFFSET_KIND) NX, NY
          PARAMETER(NDIMS=2, NX=4, NY=10)

          character(LEN=128) filename, cmd
          integer i, j, k, n, argc, IARGC, err, nprocs, rank
          integer cmode, ncid, varid(4), dimid(NDIMS), nreqs
          integer reqs(4), sts(4), num_segs(4)

          integer(kind=MPI_OFFSET_KIND) start(NDIMS, 6, 4)
          integer(kind=MPI_OFFSET_KIND) count(NDIMS, 6, 4)
          integer(kind=MPI_OFFSET_KIND) malloc_size, sum_size
          integer(kind=MPI_OFFSET_KIND) req_len, bbufsize
          integer*8 buffer(NX*NY,4)
          character(len = 4) :: quiet_mode
          logical verbose

          call MPI_Init(err)
          call MPI_Comm_rank(MPI_COMM_WORLD, rank, err)
          call MPI_Comm_size(MPI_COMM_WORLD, nprocs, err)

          ! take filename from command-line argument if there is any
          call getarg(0, cmd)
          argc = IARGC()
          if (argc .GT. 2) then
              if (rank .EQ. 0) print*,'Usage: ',trim(cmd),
     +                         ' [-q] [filename]'
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

          if (nprocs .NE. 4 .AND. rank .EQ. 0 .AND. verbose)
     +        print*,'Warning: ',trim(cmd),' is intended to run on ',
     +               '4 processes'

          ! create file, truncate it if exists
          cmode = IOR(NF_CLOBBER, NF_64BIT_DATA)
          err = nfmpi_create(MPI_COMM_WORLD, filename, cmode,
     +                        MPI_INFO_NULL, ncid)
          call check(err, 'In nfmpi_create: ')

          ! define dimensions x and y
          err = nfmpi_def_dim(ncid, "Y", NY, dimid(2))
          call check(err, 'In nfmpi_def_dim Y: ')
          err = nfmpi_def_dim(ncid, "X", NX, dimid(1))
          call check(err, 'In nfmpi_def_dim X: ')

          ! define 4 2D variables of int64 type
          err = nfmpi_def_var(ncid, "var0", NF_INT64,2_8,dimid,varid(1))
          call check(err, 'In nfmpi_def_var var0: ')
          err = nfmpi_def_var(ncid, "var1", NF_INT64,2_8,dimid,varid(2))
          call check(err, 'In nfmpi_def_var var1: ')
          err = nfmpi_def_var(ncid, "var2", NF_INT64,2_8,dimid,varid(3))
          call check(err, 'In nfmpi_def_var var2: ')
          err = nfmpi_def_var(ncid, "var3", NF_INT64,2_8,dimid,varid(4))
          call check(err, 'In nfmpi_def_var var3: ')

          ! do not forget to exit define mode
          err = nfmpi_enddef(ncid)
          call check(err, 'In nfmpi_enddef: ')

          ! now we are in data mode
          n = mod(rank, 4) + 1
          num_segs(n) = 4 ! number of segments for this request
          start(1,1,n)=1; start(2,1,n)=6; count(1,1,n)=1; count(2,1,n)=2
          start(1,2,n)=2; start(2,2,n)=1; count(1,2,n)=1; count(2,2,n)=1
          start(1,3,n)=3; start(2,3,n)=7; count(1,3,n)=1; count(2,3,n)=2
          start(1,4,n)=4; start(2,4,n)=1; count(1,4,n)=1; count(2,4,n)=3
          ! start(:,:,n) n_count(:,:,n) indicate the following:
          ! ("-" means skip)
          !   -  -  -  -  -  X  X  -  -  -
          !   X  -  -  -  -  -  -  -  -  -
          !   -  -  -  -  -  -  X  X  -  -
          !   X  X  X  -  -  -  -  -  -  -

          n = mod(rank+1, 4) + 1
          num_segs(n) = 6 ! number of segments for this request
          start(1,1,n)=1; start(2,1,n)=4; count(1,1,n)=1; count(2,1,n)=2
          start(1,2,n)=1; start(2,2,n)=9; count(1,2,n)=1; count(2,2,n)=2
          start(1,3,n)=2; start(2,3,n)=6; count(1,3,n)=1; count(2,3,n)=2
          start(1,4,n)=3; start(2,4,n)=1; count(1,4,n)=1; count(2,4,n)=2
          start(1,5,n)=3; start(2,5,n)=9; count(1,5,n)=1; count(2,5,n)=2
          start(1,6,n)=4; start(2,6,n)=5; count(1,6,n)=1; count(2,6,n)=3
          ! start(:,:,n) n_count(:,:,n) indicate the following:
          !   -  -  -  X  X  -  -  -  X  X
          !   -  -  -  -  -  X  X  -  -  -
          !   X  X  -  -  -  -  -  -  X  X
          !   -  -  -  -  X  X  X  -  -  -

          n = mod(rank+2, 4) + 1
          num_segs(n) = 5 ! number of segments for this request
          start(1,1,n)=1; start(2,1,n)=8; count(1,1,n)=1; count(2,1,n)=1
          start(1,2,n)=2; start(2,2,n)=2; count(1,2,n)=1; count(2,2,n)=3
          start(1,3,n)=2; start(2,3,n)=8; count(1,3,n)=1; count(2,3,n)=3
          start(1,4,n)=3; start(2,4,n)=3; count(1,4,n)=1; count(2,4,n)=1
          start(1,5,n)=4; start(2,5,n)=4; count(1,5,n)=1; count(2,5,n)=1
          ! start(:,:,n) n_count(:,:,n) indicate the following:
          !   -  -  -  -  -  -  -  X  -  -
          !   -  X  X  X  -  -  -  X  X  X
          !   -  -  X  -  -  -  -  -  -  -
          !   -  -  -  X  -  -  -  -  -  -

          n = mod(rank+3, 4) + 1
          num_segs(n) = 4 ! number of segments for this request
          start(1,1,n)=1; start(2,1,n)=1; count(1,1,n)=1; count(2,1,n)=3
          start(1,2,n)=2; start(2,2,n)=5; count(1,2,n)=1; count(2,2,n)=1
          start(1,3,n)=3; start(2,3,n)=4; count(1,3,n)=1; count(2,3,n)=3
          start(1,4,n)=4; start(2,4,n)=8; count(1,4,n)=1; count(2,4,n)=3
          ! start(:,:,n) n_count(:,:,n) indicate the following:
          !   X  X  X  -  -  -  -  -  -  -
          !   -  -  -  -  X  -  -  -  -  -
          !   -  -  -  X  X  X  -  -  -  -
          !   -  -  -  -  -  -  -  X  X  X

          ! only rank 0, 1, 2, and 3 do I/O:
          ! each of ranks 0 to 3 write 4 nonblocking requests
          nreqs = 4
          if (rank .GE. 4) nreqs = 0

          ! initialize buffer contents
          buffer = rank;

          ! bbufsize must be max of data type converted before and after
          bbufsize = 0
          do i=1, nreqs
             do j=1, num_segs(i)
                req_len = 1
                do k=1, NDIMS
                   req_len = req_len * count(k,j,i)
                enddo
                bbufsize = bbufsize + req_len
             enddo
          enddo
          bbufsize = bbufsize * 8  ! 8 is size of integer*8
          if (bbufsize .GT. 0) then
              err = nfmpi_buffer_attach(ncid, bbufsize)
              call check(err, 'In nfmpi_buffer_attach')
          endif

          do i=1, nreqs
             err = nfmpi_bput_varn_int8(ncid, varid(i), num_segs(i),
     +                                  start(:,:,i), count(:,:,i),
     +                                  buffer(:,i), reqs(i))
             call check(err, 'In nfmpi_bput_varn_int8: ')
          enddo
          err = nfmpi_wait_all(ncid, nreqs, reqs, sts)
          call check(err, 'In nfmpi_wait_all: ')

          ! detach the temporary buffer
          if (bbufsize .GT. 0) then
              err = nfmpi_buffer_detach(ncid)
              call check(err, 'In nfmpi_buffer_detach: ')
          endif

          ! close the file
          err = nfmpi_close(ncid)
          call check(err, 'In nfmpi_close: ')

          ! check if there is any PnetCDF internal malloc residue
 998      format(A,I13,A)
          err = nfmpi_inq_malloc_size(malloc_size)
          if (err == NF_NOERR) then
              call MPI_Reduce(malloc_size, sum_size, 1, MPI_OFFSET,
     +                        MPI_SUM, 0, MPI_COMM_WORLD, err)
              if (rank .EQ. 0 .AND. sum_size .GT. 0_8) print 998,
     +            'heap memory allocated by PnetCDF internally has ',
     +            sum_size, ' B yet to be freed'
          endif

 999      call MPI_Finalize(err)
          call EXIT(0)
      end program main

