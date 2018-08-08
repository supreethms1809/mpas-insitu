!
!   Copyright (C) 2013, Northwestern University and Argonne National Laboratory
!   See COPYRIGHT notice in top-level directory.
!
! $Id: fixedform.f90 1536 2013-12-17 18:33:06Z wkliao $

!
! This program tests whether header file pnetcdf.inc conforms Fortran fixed form
!

      program main
        implicit none
        include "mpif.h"
        include "pnetcdf.inc"

        character(LEN=128) filename
        integer ncid, err

        call MPI_Init(err)

        err = nfmpi_create(MPI_COMM_WORLD, filename, IOR(NF_CLOBBER,    &
     &                     NF_64BIT_DATA), MPI_INFO_NULL, ncid)

        err = nfmpi_enddef(ncid)
        err = nfmpi_close(ncid)

        call MPI_Finalize(err)

      end program main

