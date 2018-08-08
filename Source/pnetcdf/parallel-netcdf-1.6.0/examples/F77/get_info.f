!
!  Copyright (C) 2012, Northwestern University and Argonne National
!  Laboratory
!  See COPYRIGHT notice in top-level directory.
!
! $Id: get_info.f 1958 2014-12-27 21:04:48Z wkliao $

!
!    To compile:
!        mpif77 -O2 get_info.f -o get_info -lpnetcdf
!    To run:
!        mpiexec -n 4 ./get_info /pvfs2/wkliao/testfile.nc
!
!    prints all MPI-IO hints used
!
!    Example standard output:
!
!   MPI File Info: nkeys =          18
!   MPI File Info: [ 0] key =            cb_buffer_size, value =16777216
!   MPI File Info: [ 1] key =             romio_cb_read, value =automatic
!   MPI File Info: [ 2] key =            romio_cb_write, value =automatic
!   MPI File Info: [ 3] key =                  cb_nodes, value =1
!   MPI File Info: [ 4] key =         romio_no_indep_rw, value =false
!   MPI File Info: [ 5] key =              romio_cb_pfr, value =disable
!   MPI File Info: [ 6] key =         romio_cb_fr_types, value =aar
!   MPI File Info: [ 7] key =     romio_cb_fr_alignment, value =1
!   MPI File Info: [ 8] key =     romio_cb_ds_threshold, value =0
!   MPI File Info: [ 9] key =         romio_cb_alltoall, value =automatic
!   MPI File Info: [10] key =        ind_rd_buffer_size, value =4194304
!   MPI File Info: [11] key =        ind_wr_buffer_size, value =524288
!   MPI File Info: [12] key =             romio_ds_read, value =automatic
!   MPI File Info: [13] key =            romio_ds_write, value =automatic
!   MPI File Info: [14] key =            cb_config_list, value =*:1
!   MPI File Info: [15] key =      nc_header_align_size, value =0
!   MPI File Info: [16] key =         nc_var_align_size, value =0
!   MPI File Info: [17] key = nc_header_read_chunk_size, value =0


        program main
        implicit none
        include "mpif.h"
        include "pnetcdf.inc"

        character(len = 256) :: filename, cmd
        integer argc, IARGC, ncid, rank, info, omode, err
        integer(kind=MPI_OFFSET_KIND) malloc_size, sum_size
        character(len = 4) :: quiet_mode
        logical verbose

        call MPI_Init(err)
        call MPI_Comm_rank (MPI_COMM_WORLD, rank, err)

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

        omode = NF_NOWRITE + NF_64BIT_OFFSET
        err = nfmpi_open(MPI_COMM_WORLD, trim(filename), omode,
     +                    MPI_INFO_NULL, ncid)
        if (err .ne. NF_NOERR) call handle_err('nfmpi_open',err)


        err = nfmpi_inq_file_info(ncid, info)
        if (err .ne. NF_NOERR) call handle_err('nfmpi_inq_file_info',
     +                                          err)

        err = nfmpi_close(ncid)
        if (err .ne. NF_NOERR) call handle_err('nfmpi_close',err)

        if (rank .EQ. 0 .AND. verbose) call print_info(info)
        call MPI_Info_free(info, err)

        ! check if there is any PnetCDF internal malloc residue
 998    format(A,I13,A)
        err = nfmpi_inq_malloc_size(malloc_size)
        if (err == NF_NOERR) then
            call MPI_Reduce(malloc_size, sum_size, 1, MPI_OFFSET, 
     +                      MPI_SUM, 0, MPI_COMM_WORLD, err)
            if (rank .EQ. 0 .AND. sum_size .GT. 0_8) print 998,
     +          'heap memory allocated by PnetCDF internally has ',
     +          sum_size/1048576, ' MiB yet to be freed'
        endif

 999    call MPI_Finalize(err)
        call EXIT(0)

        end program main

        subroutine print_info(info_used)
            implicit none
            include "mpif.h"
            include "pnetcdf.inc"

            integer info_used

            ! local variables
            character*(MPI_MAX_INFO_VAL) key, value
            integer nkeys, i, err
            logical flag

            call MPI_Info_get_nkeys(info_used, nkeys, err)
            print *, 'MPI File Info: nkeys =', nkeys
            do i=0, nkeys-1
                call MPI_Info_get_nthkey(info_used, i, key, err)
                call MPI_Info_get(info_used, key, MPI_MAX_INFO_VAL,
     +                            value, flag, err)
 123            format('MPI File Info: [',I2,'] key = ',A25,
     +                 ', value =',A)
                print 123, i, trim(key), trim(value)
            enddo
            print *

            return
        end subroutine print_info

        subroutine handle_err(err_msg, errcode)
            implicit none
            include "mpif.h"
            include "pnetcdf.inc"

            character*(*), intent(in) :: err_msg
            integer,       intent(in) :: errcode

            ! local variables
            integer err 

            print *, 'Error: ',trim(err_msg),' ',nfmpi_strerror(errcode)
            call MPI_Abort(MPI_COMM_WORLD, -1, err)
            return
        end subroutine handle_err

