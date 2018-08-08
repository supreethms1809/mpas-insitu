!
!  Copyright (C) 2013, Northwestern University and Argonne National Laboratory
!  See COPYRIGHT notice in top-level directory.
!
!     This is part of the PnetCDF package.
!
!     $Id: f90tst_parallel3.f90 1970 2014-12-28 23:38:59Z wkliao $

!     This program tests PnetCDF parallel I/O from
!     fortran. It creates a file like this:

! netcdf f90tst_parallel3 {
! dimensions:
! 	x = 16 ;
! 	y = 16 ;
! variables:
! 	byte byte__(x, y) ;
! 	short short_(x, y) ;
! 	int int__(x, y) ;
! 	float float_(x, y) ;
! 	double double(x, y) ;
! 	int64 int64_(x, y) ;


program f90tst_parallel3
  use mpi
  use pnetcdf
  implicit none
  
  ! This is the name of the data file we will create.
  character (len = *), parameter :: FILE_NAME = "f90tst_parallel3.nc"
  integer, parameter :: MAX_DIMS = 2
  integer, parameter :: NX = 16, NY = 16
  integer, parameter :: HALF_NX = NX/2, HALF_NY = NY/2
  integer, parameter :: NUM_PROC = 4
  integer, parameter :: NUM_VARS = 6
  integer, parameter :: CACHE_SIZE = 4194304, CACHE_NELEMS = 1013
  integer, parameter :: CACHE_PREEMPTION = 79
  character (len = *), parameter :: var_name(NUM_VARS) = &
       (/ 'byte__', 'short_', 'int___', 'float_', 'double', 'int64_' /)
  integer :: ncid, varid(NUM_VARS), dimids(MAX_DIMS)
  integer :: var_type(NUM_VARS) = (/ nf90_byte, nf90_short, nf90_int, &
       nf90_float, nf90_double, nf90_int64 /)
  integer :: x_dimid, y_dimid
  integer(kind=1) :: byte_out(HALF_NY, HALF_NX), byte_in(HALF_NY, HALF_NX)
  integer(kind=2) :: short_out(HALF_NY, HALF_NX), short_in(HALF_NY, HALF_NX)
  integer :: int_out(HALF_NY, HALF_NX), int_in(HALF_NY, HALF_NX)
  real :: areal_out(HALF_NY, HALF_NX), areal_in(HALF_NY, HALF_NX)
  double precision :: double_out(HALF_NY, HALF_NX), double_in(HALF_NY, HALF_NX)
  integer (kind=8) :: int64_out(HALF_NY, HALF_NX), int64_in(HALF_NY, HALF_NX)
  integer :: nvars, ngatts, ndims, unlimdimid, file_format
  integer :: x, y, v
  integer :: p, my_rank, ierr
  integer(KIND=MPI_OFFSET_KIND) :: start(MAX_DIMS), count(MAX_DIMS)
  integer :: cmode
  integer(KIND=MPI_OFFSET_KIND) :: nx_ll, ny_ll
  character(LEN=256) filename, cmd, msg
  integer argc, iargc

  call MPI_Init(ierr)
  call MPI_Comm_rank(MPI_COMM_WORLD, my_rank, ierr)
  call MPI_Comm_size(MPI_COMM_WORLD, p, ierr)

  ! take filename from command-line argument if there is any
  call getarg(0, cmd)
  argc = IARGC() 
  if (argc .GT. 1) then 
     if (my_rank .EQ. 0) print*,'Usage: ',trim(cmd),' [filename]'
     goto 999 
  endif   
  filename = FILE_NAME
  if (argc .EQ. 1) call getarg(1, filename)

  if (p .ne. 4 .AND. my_rank .eq. 0) then
     print *, 'Warning: ',trim(cmd),' is design to run on 4 processes.'
  endif

  ! Create some pretend data.
  do x = 1, HALF_NX
     do y = 1, HALF_NY
        byte_out(y, x) = INT(my_rank,1) * (-1_1)
        short_out(y, x) = INT2(my_rank) * (-2_2)
        int_out(y, x) = my_rank * (-4)
        areal_out(y, x) = my_rank * 2.5
        double_out(y, x) = my_rank * (-4.5)
        int64_out(y, x) = my_rank * 4
     end do
  end do

  ! Create the netCDF file. 
  cmode = IOR(NF90_CLOBBER, NF90_64BIT_DATA)
  call check(nf90mpi_create(MPI_COMM_WORLD, filename, cmode, MPI_INFO_NULL, ncid))

  ! Define the dimensions.
  nx_ll = NX
  ny_ll = NY
  call check(nf90mpi_def_dim(ncid, "x", nx_ll, x_dimid))
  call check(nf90mpi_def_dim(ncid, "y", ny_ll, y_dimid))
  dimids =  (/ y_dimid, x_dimid /)

  ! Define the variables. 
  do v = 1, NUM_VARS
     call check(nf90mpi_def_var(ncid, var_name(v), var_type(v), dimids, varid(v)))
  end do

  ! This will be the last collective operation.
  call check(nf90mpi_enddef(ncid))

  ! Determine what part of the variable will be written/read for this
  ! processor. It's a checkerboard decomposition.
  count = (/ HALF_NX, HALF_NY /)
  if (my_rank .eq. 0) then
     start = (/ 1, 1 /)
  else if (my_rank .eq. 1) then
     start = (/ HALF_NX + 1, 1 /)
  else if (my_rank .eq. 2) then
     start = (/ 1, HALF_NY + 1 /)
  else if (my_rank .eq. 3) then
     start = (/ HALF_NX + 1, HALF_NY + 1 /)
  else
     start = (/ 1, 1 /)
     count = 0
  endif

  ! Write this processor's data, except for processor zero.
  if (my_rank .EQ. 0) count = (/ 0, 0 /)
  call check(nf90mpi_put_var_all(ncid, varid(1), byte_out, start = start, count = count))
  call check(nf90mpi_put_var_all(ncid, varid(2), short_out, start = start, count = count))
  call check(nf90mpi_put_var_all(ncid, varid(3), int_out, start = start, count = count))
  call check(nf90mpi_put_var_all(ncid, varid(4), areal_out, start = start, count = count))
  call check(nf90mpi_put_var_all(ncid, varid(5), double_out, start = start, count = count))
  call check(nf90mpi_put_var_all(ncid, varid(6), int64_out, start = start, count = count))

  ! Close the file. 
  call check(nf90mpi_close(ncid))

  ! Reopen the file.
  call check(nf90mpi_open(MPI_COMM_WORLD, filename, nf90_nowrite, MPI_INFO_NULL, ncid))
  
  ! Check some stuff out.
  call check(nf90mpi_inquire(ncid, ndims, nvars, ngatts, unlimdimid, file_format))
  if (ndims /= 2 .or. nvars /= NUM_VARS .or. ngatts /= 0 .or. unlimdimid /= -1 .or. &
       file_format /= nf90_format_cdf5) stop 2

  ! Read this processor's data.
  if (my_rank .EQ. 0) count = (/ HALF_NX, HALF_NY /)
  call check(nf90mpi_get_var_all(ncid, varid(1), byte_in, start = start, count = count))
  call check(nf90mpi_get_var_all(ncid, varid(2), short_in, start = start, count = count))
  call check(nf90mpi_get_var_all(ncid, varid(3), int_in, start = start, count = count))
  call check(nf90mpi_get_var_all(ncid, varid(4), areal_in, start = start, count = count))
  call check(nf90mpi_get_var_all(ncid, varid(5), double_in, start = start, count = count))
  call check(nf90mpi_get_var_all(ncid, varid(6), int64_in, start = start, count = count))

  ! Check the data. All the data from the processor zero are fill
  ! value.
  if (my_rank .LT. 4) then
     do x = 1, HALF_NX
        do y = 1, HALF_NY
           if (my_rank .NE. 0) then
              if (byte_in(y, x) .ne. (my_rank * (-1))) stop 13
              if (short_in(y, x) .ne. (my_rank * (-2))) stop 14
              if (int_in(y, x) .ne. (my_rank * (-4))) stop 15
              if (areal_in(y, x) .ne. (my_rank * (2.5))) stop 16
              if (double_in(y, x) .ne. (my_rank * (-4.5))) stop 17
              if (int64_in(y, x) .ne. (my_rank * (4))) stop 20
           endif
        end do
     end do
  endif
 
  ! Close the file. 
  call check(nf90mpi_close(ncid))

   msg = '*** TESTING F90 '//trim(cmd)
   if (my_rank .eq. 0)   write(*,"(A67,A)") msg,'------ pass'

 999 call MPI_Finalize(ierr)

contains
!     This subroutine handles errors by printing an error message and
!     exiting with a non-zero status.
  subroutine check(errcode)
    implicit none
    integer, intent(in) :: errcode
    
    if(errcode /= nf90_noerr) then
       print *, 'Error: ', trim(nf90mpi_strerror(errcode))
       stop 99
    endif
  end subroutine check
end program f90tst_parallel3

