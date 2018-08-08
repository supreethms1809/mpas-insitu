!
!  Copyright (C) 2013, Northwestern University and Argonne National Laboratory
!  See COPYRIGHT notice in top-level directory.
!
!     This is part of the PnetCDF package.
!
! $Id: f90tst_parallel4.f90 1970 2014-12-28 23:38:59Z wkliao $

! This parallel test was contributed by Jim Edwards at UCAR. Thanks Jim!
program f90tst
  use mpi
  use pnetcdf
  implicit none

  character (len = *), parameter :: FILE_NAME = "f90tst_nc4_par.nc"
  integer :: nmode, ierr, fh, my_rank, nprocs, i, varid
  integer :: dimid(3)
  integer(KIND=MPI_OFFSET_KIND) :: start(3), count(3)
  real :: f(3)
  character(LEN=256) filename, cmd, msg
  integer argc, iargc

  call MPI_INIT(ierr)
  call MPI_COMM_RANK(MPI_COMM_WORLD, my_rank, ierr)
  call MPI_COMM_SIZE(MPI_COMM_WORLD, nprocs, ierr)

  ! take filename from command-line argument if there is any
  call getarg(0, cmd)
  argc = IARGC() 
  if (argc .GT. 1) then 
     if (my_rank .EQ. 0) print*,'Usage: ',trim(cmd),' [filename]'
     goto 999 
  endif   
  filename = FILE_NAME
  if (argc .EQ. 1) call getarg(1, filename)

  if (nprocs .ne. 8 .AND. my_rank .eq. 0) then
     print *, 'Warning: ',trim(cmd),' is design to run on 8 processes.'
  endif

  nmode = ior(NF90_CLOBBER,NF90_64BIT_DATA)

  call handle_err(nf90mpi_create(MPI_COMM_WORLD, filename, nmode, MPI_INFO_NULL, fh))

  call handle_err(nf90mpi_def_dim(fh, 'dim1', 6_8, dimid(1)))
  call handle_err(nf90mpi_def_dim(fh, 'dim2', 4_8, dimid(2)))
  call handle_err(nf90mpi_def_dim(fh, 'dim3', 1_8, dimid(3)))


  call handle_err(nf90mpi_def_var(fh, 'var1', NF90_DOUBLE, dimid, varid))
  call handle_err(nf90mpi_enddef(fh))


  do i=1,3
     f(i) = my_rank*3+i
  end do

  count = (/3,1,1/)
  start(1) = mod(my_rank,2)*3+1
  start(2) = my_rank/2+1
  start(3) = 1
  if (my_rank .GE. 8) then
      start = 1
      count = 0
  endif

  call handle_err(nf90mpi_put_var_all(fh, varid, f,start=start,count=count))

  call handle_err(nf90mpi_close(fh))

  ! Reopen the file and check it.
  call handle_err(nf90mpi_open(MPI_COMM_WORLD, filename, NF90_NOWRITE, MPI_INFO_NULL, fh))

  call handle_err(nf90mpi_get_var_all(fh, varid, f, start=start, count=count))
 
  if (my_rank .LE. 8) then
     do i=1,3
        if (f(i) .ne. my_rank*3+i) then
           print *, 'Error: unexpected read value ',f(i),' should be ', my_rank*3+i
           goto 999
        endif
     end do
  endif 

  call handle_err(nf90mpi_close(fh))

   msg = '*** TESTING F90 '//trim(cmd)
   if (my_rank .eq. 0)   write(*,"(A67,A)") msg,'------ pass'

 999 call MPI_Finalize(ierr)

contains
  !     This subroutine handles errors by printing an error message and
  !     exiting with a non-zero status.
  subroutine handle_err(errcode)
    implicit none
    integer, intent(in) :: errcode

    if(errcode /= nf90_noerr) then
       print *, 'Error: ', trim(nf90mpi_strerror(errcode))
       stop 2
    endif
  end subroutine handle_err

end program f90tst

