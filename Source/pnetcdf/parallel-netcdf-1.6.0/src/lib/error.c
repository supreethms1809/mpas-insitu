/*
 *  Copyright (C) 2003, Northwestern University and Argonne National Laboratory
 *  See COPYRIGHT notice in top-level directory.
 */
/* $Id: error.c 1893 2014-11-30 20:39:26Z wkliao $ */

/*LINTLIBRARY*/

#if HAVE_CONFIG_H
# include <ncconfig.h>
#endif

#include <stdio.h>

#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif

#include <mpi.h>

#include "nc.h"

#ifdef HAVE_STRERROR
#include <string.h> /* contains prototype for ansi libc function strerror() */
#else
/* provide a strerror function for older unix systems */
inline static char *
strerror(int errnum)
{
    extern int sys_nerr;
    extern char *sys_errlist[];

    if(errnum < 0 || errnum >= sys_nerr) return NULL;
    /* else */
    return sys_errlist[errnum];
}
#endif /* HAVE_STRERROR */


#ifdef vms
/* UNTESTED */
/*
 * On the vms system, when a system error occurs which is not
 * mapped into the unix styled errno values, errno is set EVMSERR
 * and a VMS error code is set in vaxc$errno.
 * This routine prints the systems message associated with status return
 * from a system services call.
 */

#include <errno.h>
#include <descrip.h>
#include <ssdef.h>

static const char *
vms_strerror( int status )
{
    short msglen;
    static char msgbuf[256];
    $DESCRIPTOR(message, msgbuf);
    register ret;

    msgbuf[0] = 0;
    ret = SYS$GETMSG(status, &msglen, &message, 15, 0);

    if(ret != SS$_BUFFEROVF && ret != SS$_NORMAL) {
        (void) strcpy(msgbuf, "EVMSERR");
    }
    return(msgbuf);
}
#endif /* vms */


/* must copy nc_strerror() from netCDF release */
static const char* nc_strerror(int ncerr1);

static char nc_unknown_err_msg[128];

const char *
ncmpi_strerror(int err)
{
    sprintf(nc_unknown_err_msg,"Unknown Error: Unrecognized error code %5d\n",err);

#ifdef vms
    if(err == EVMSERR)
    {
        return vms_strerror(err);
    }
    /* else */
#endif /* vms */

    if(NC_ISSYSERR(err))
    {
        const char *cp = (const char *) strerror(err);
        if(cp == NULL)
            return nc_unknown_err_msg;
        /* else */
        return cp;
    }
    /* else */

    switch (err) {
        /* PnetCDF errors */
        case NC_ESMALL:
            return "Size of MPI_Offset or MPI_Aint too small for requested format ";
            /* this usually happens on 32-bit machines where MPI_Offset and
             * MPI_Aint may be 4-byte integers and when the I/O request amount
             * or accessing file offset is > 2GB.
             */
        case NC_ENOTINDEP:
            return "Operation not allowed in collective data mode";
            /* this means your program is now in independent data mode, but
             * making a call to a collective API
             */
        case NC_EINDEP:
            return "Operation not allowed in independent data mode";
            /* this means your program is now in collective data mode, but
             * making a call to an independent API
             */
        case NC_EFILE:
            return "Unknown error in file operation";
            /* this error is caused by an unsuccessful MPI-IO call and usually
             * accompany with additional MPI error messages
             */
        case NC_EREAD:
            return "Unknow error occurs in reading file";
            /* this error is caused by an unsuccessful call to MPI_File_read or
             * MPI_File_read_all and usually accompany with additional MPI
             * error messages
             */
        case NC_EWRITE:
            return "Unknow error occurs in writting file";
            /* this error is caused by an unsuccessful call to MPI_File_write or
             * MPI_File_write_all and usually accompany with additional MPI
             * error messages
             */
        case NC_EOFILE:
            return "Can not open/create file";
        case NC_EMULTITYPES:
            return "Multiple types used in memory data";
            /* when using flexible APIs, the argument MPI derived datatype is
             * not allowed to contain more than one basic data type
             */
        case NC_EIOMISMATCH:
            return "Input/Output data amount mismatch";
            /* this error indicates the request amount is mismatched between
             * bufcount and the value calculated from argument count[]
             */
        case NC_ENEGATIVECNT:
            return "Negative count is prohibited";
        case NC_EUNSPTETYPE:
            return "Unsupported etype is used in MPI datatype for memory data";
            /* when using flexible APIs, the argument MPI derived datatype is
             * only allowed to be constructed from the MPI basic data types
             * known to PnetCDF
             */
        case NC_EINVAL_REQUEST:
            return "Invalid nonblocking request ID.";
        case NC_EAINT_TOO_SMALL:
            return "MPI_Aint not large enough to hold requested value.";
            /* this usually happens on 32-bit machines where MPI_Aint is a
             * 4-byte integer and when the I/O request amount or accessing
             * file offset is > 2GB.
             */
        case NC_ENOTSUPPORT:
            return "Feature is not yet supported.";
        case NC_ENULLBUF:
            return "Trying to attach a NULL buffer or the buffer size is <= 0.";
            /* an error returned from ncmpi_buffer_attach()
             */
        case NC_EPREVATTACHBUF:
            return "Previous attached buffer is found.";
            /* an error returned from ncmpi_buffer_attach() indicating a
             * buffer has been attached previously
             */
        case NC_ENULLABUF:
            return "No attached buffer is found.";
            /* an error when calling bput APIs and no buffer has been attached
             */
        case NC_EPENDINGBPUT:
            return "Cannot detach buffer as a pending bput request is found.";
            /* an error returned from ncmpi_buffer_detach()
             */
        case NC_EINSUFFBUF:
            return "Attached buffer is too small.";
            /* an error when calling bput APIs
             */
        case NC_ENOENT:
            return "The specified netCDF file does not exist.";
            /* this error code corresponds to MPI error class
             * MPI_ERR_NO_SUCH_FILE, an error generated from MPI_File_open(),
             * MPI_File_delete() or others
             */
        case NC_EINTOVERFLOW:
            return "Overflow when type cast to 4-byte integer.";
            /* this usually happens on 32-bit machines where MPI_Offset is a
             * 4-byte integer and when the I/O request amount or accessing
             * file offset is > 2GB.
             */
        case NC_ENOTENABLED:
            return "feature is not enabled at configure time.";
            /* Some APIs require a specific feature enabled at the configure
             * time, for example, ncmpi_inq_malloc_size() works only
             * --enable-debug is used when configuring PnetCDF
             */
        case NC_EBAD_FILE:
            return "Invalid file name (e.g., path name too long).";
            /* this error code corresponds to MPI error class
             * MPI_ERR_BAD_FILE, an error generated from MPI_File_open()
             */
        case NC_ENO_SPACE:
            return "Not enough space.";
            /* this error code corresponds to MPI error class
             * MPI_ERR_NO_SPACE, an error generated from MPI_File_open()
             */
        case NC_EQUOTA:
            return "Quota exceeded.";
            /* this error code corresponds to MPI error class
             * MPI_ERR_QUOTA, an error generated from MPI_File_open()
             */
        case NC_ENULLSTART:
            return "argument start is a NULL pointer";
            /* Some APIs require argument start connot be a NULL pointer
             */
        case NC_ENULLCOUNT:
            return "argument count is a NULL pointer";
            /* Some APIs require argument count cannot be a NULL pointer
             */
        case NC_EINVAL_CMODE:
            return "Invalid file create mode, cannot have both NC_64BIT_OFFSET & NC_64BIT_DATA";
        case NC_ETYPESIZE:
            return "MPI derived data type size error (bigger than the variable size)";
        case NC_ETYPE_MISMATCH:
            return "element type of the MPI derived data type mismatches the variable type";
        case NC_ETYPESIZE_MISMATCH:
            return "file type size mismatches buffer type size";
        case NC_ESTRICTCDF2:
            return "Attempting CDF-5 operation on CDF-2 file";
        case NC_EMULTIDEFINE:
            return "File header is inconsistent among processes";
            /* this error means the metadata (dimension names, variable names,
             * variable's dimensions, attributes, and whatever will be stored
             * in the file header) is inconsistent among all MPI processes.
             */
        case NC_EMULTIDEFINE_OMODE:
            return "Bad file create/open mode or modes are inconsistent across processes.";
        case NC_EMULTIDEFINE_DIM_NUM:
            return "Number of dimensions is defined inconsistently among processes.";
        case NC_EMULTIDEFINE_DIM_SIZE:
            return "Dimension size is defined inconsistently among processes.";
        case NC_EMULTIDEFINE_VAR_NUM:
            return "Number of variables is defined inconsistently among processes.";
        case NC_EMULTIDEFINE_VAR_NAME:
            return "Variable names are defined inconsistently among processes.";
        case NC_EMULTIDEFINE_VAR_NDIMS:
            return "Dimensionality of this variable is defined inconsistently among processes.";
        case NC_EMULTIDEFINE_VAR_DIMIDS:
            return "Dimension IDs used to define this variable is inconsistent among processes.";
        case NC_EMULTIDEFINE_VAR_TYPE:
            return "Data type of this variable is defined inconsistently among processes.";
        case NC_EMULTIDEFINE_VAR_LEN:
            return "Total number of elements of this variable is defined inconsistently among processes.";
        case NC_EMULTIDEFINE_VAR_BEGIN:
            return "(Internal error) beginning file offset of this variable is inconsistent among processes.";
        case NC_EMULTIDEFINE_NUMRECS:
            return "Number of records is inconsistent among processes.";
        case NC_EMULTIDEFINE_ATTR_NUM:
            return "Number of attributes is inconsistent among processes.";
        case NC_EMULTIDEFINE_ATTR_SIZE:
            return "Memory space used by attribute (internal use) is inconsistent among processes.";
        case NC_EMULTIDEFINE_ATTR_NAME:
            return "Attribute name is inconsistent among processes.";
        case NC_EMULTIDEFINE_ATTR_TYPE:
            return "Attribute type is inconsistent among processes.";
        case NC_EMULTIDEFINE_ATTR_LEN:
            return "Attribute length is inconsistent among processes.";
        case NC_EMULTIDEFINE_ATTR_VAL:
            return "Attribute value is inconsistent among processes.";
        case NC_EMULTIDEFINE_FNC_ARGS:
            return "inconsistent function arguments used in collective API.";
        default:
            /* check netCDF-3 and netCDF-4 errors */
            return nc_strerror(err);
    }
}

/*----< ncmpii_handle_error() ------------------------------------------------*/
/* translate MPI error codes to PnetCDF/netCDF error codes */
int ncmpii_handle_error(int   mpi_errorcode, /* returned value from MPI call */
                        char *err_msg)       /* extra error message */
{
    int rank, errorclass, errorStringLen;
    char errorString[MPI_MAX_ERROR_STRING];

    /* check for specific error codes understood by PnetCDF */

    /* When NC_NOCLOBBER is used in ioflags(cmode) for open to create,
     * netCDF requires NC_EEXIST returned if the file already exists.
     * In MPI 2.1, if MPI_File_open uses MPI_MODE_EXCL and the file has
     * already existed, the error class MPI_ERR_FILE_EXISTS should be returned.
     * For opening an existing file but the file does not exist, MPI 2.1
     * will return MPI_ERR_NO_SUCH_FILE
     * Note for MPI 2.1 and prior, we return MPI_ERR_IO, as these error class
     * have not been defined.
     */
    MPI_Error_class(mpi_errorcode, &errorclass);
#ifdef HAVE_MPI_ERR_FILE_EXISTS
    if (errorclass == MPI_ERR_FILE_EXISTS) return NC_EEXIST;
#endif
#ifdef HAVE_MPI_ERR_NO_SUCH_FILE
    if (errorclass == MPI_ERR_NO_SUCH_FILE) return NC_ENOENT;
#endif
#ifdef HAVE_MPI_ERR_NOT_SAME
    /* MPI-IO should return MPI_ERR_NOT_SAME when one or more arguments of a
     * collective MPI call are different. However, MPI-IO may not report this
     * error code correctly. For instance, some MPI-IO returns MPI_ERR_AMODE
     * instead when amode is found inconsistent. MPI_ERR_NOT_SAME can also
     * report inconsistent file name. */
    if (errorclass == MPI_ERR_NOT_SAME) return NC_EMULTIDEFINE_FNC_ARGS;
#endif
#ifdef HAVE_MPI_ERR_AMODE
    /* MPI-IO may or may not report MPI_ERR_AMODE if inconsistent amode is
     * detected. MPI_ERR_AMODE can also indicate other conflict amode used
     * on each process. But in PnetCDF, MPI_ERR_AMODE can only be caused by
     * inconsistent file open/create mode. So, if MPI-IO returns this error
     * we are sure it is because of the inconsistent mode */
    if (errorclass == MPI_ERR_AMODE) return NC_EMULTIDEFINE_OMODE;
#endif
#ifdef HAVE_MPI_ERR_READ_ONLY
    if (errorclass == MPI_ERR_READ_ONLY) return NC_EPERM;
#endif
#ifdef HAVE_MPI_ERR_ACCESS
    if (errorclass == MPI_ERR_ACCESS) return NC_EACCESS;
#endif
#ifdef HAVE_MPI_ERR_BAD_FILE
    if (errorclass == MPI_ERR_BAD_FILE) return NC_EBAD_FILE;
#endif
#ifdef HAVE_MPI_ERR_NO_SPACE
    if (errorclass == MPI_ERR_NO_SPACE) return NC_ENO_SPACE;
#endif
#ifdef HAVE_MPI_ERR_QUOTA
    if (errorclass == MPI_ERR_QUOTA) return NC_EQUOTA;
#endif

    /* other errors that currently have no corresponding PnetCDF error codes */

    /* we report the world rank */
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Error_string(mpi_errorcode, errorString, &errorStringLen);
    if (err_msg == NULL) err_msg = "";
    printf("rank %d: MPI error (%s) : %s\n", rank, err_msg, errorString);

    return NC_EFILE; /* other unknown file I/O error */
}


/*-----------------------------------------------------------------------------
 *     Copy nc_strerror() from netCDF release to ensure the same error
 *     message is returned.
 *----------------------------------------------------------------------------*/

/** \defgroup error Error Handling
NetCDF functions non-zero status codes on error.

Each netCDF function returns an integer status value. If the returned
status value indicates an error, you may handle it in any way desired,
from printing an associated error message and exiting to ignoring the
error indication and proceeding (not recommended!). For simplicity,
the examples in this guide check the error status and call a separate
function, handle_err(), to handle any errors. One possible definition
of handle_err() can be found within the documentation of
nc_strerror().

The nc_strerror() function is available to convert a returned integer
error status into an error message string.

Occasionally, low-level I/O errors may occur in a layer below the
netCDF library. For example, if a write operation causes you to exceed
disk quotas or to attempt to write to a device that is no longer
available, you may get an error from a layer below the netCDF library,
but the resulting write error will still be reflected in the returned
status value.

 */

/**
\ingroup error
 Given an error number, return an error message.

This function returns a static reference to an error message string
corresponding to an integer netCDF error status or to a system error
number, presumably returned by a previous call to some other netCDF
function. The error codes are defined in netcdf.h.

\param ncerr1 error number

\returns short string containing error message.

\section Example

Here is an example of a simple error handling function that uses
nc_strerror to print the error message corresponding to the netCDF
error status returned from any netCDF function call and then exit:

\code
     #include <netcdf.h>
        ...
     void handle_error(int status) {
     if (status != NC_NOERR) {
        fprintf(stderr, "%s\n", nc_strerror(status));
        exit(-1);
        }
     }
\endcode
*/
static const char *
nc_strerror(int ncerr1)
{
   /* System error? */
   if(NC_ISSYSERR(ncerr1))
   {
      const char *cp = (const char *) strerror(ncerr1);
      if(cp == NULL)
         return "Unknown Error";
      return cp;
   }

   /* If we're here, this is a netcdf error code. */
   switch(ncerr1)
   {
      case NC_NOERR:
         return "No error";
      case NC_EBADID:
         return "NetCDF: Not a valid ID";
      case NC_ENFILE:
         return "NetCDF: Too many files open";
      case NC_EEXIST:
         return "NetCDF: File exists && NC_NOCLOBBER";
      case NC_EINVAL:
         return "NetCDF: Invalid argument";
      case NC_EPERM:
         return "NetCDF: Write to read only";
      case NC_ENOTINDEFINE:
         return "NetCDF: Operation not allowed in data mode";
      case NC_EINDEFINE:
         return "NetCDF: Operation not allowed in define mode";
      case NC_EINVALCOORDS:
         return "NetCDF: Index exceeds dimension bound";
      case NC_EMAXDIMS:
         return "NetCDF: NC_MAX_DIMS exceeded";
      case NC_ENAMEINUSE:
         return "NetCDF: String match to name in use";
      case NC_ENOTATT:
         return "NetCDF: Attribute not found";
      case NC_EMAXATTS:
         return "NetCDF: NC_MAX_ATTRS exceeded";
      case NC_EBADTYPE:
         return "NetCDF: Not a valid data type or _FillValue type mismatch";
      case NC_EBADDIM:
         return "NetCDF: Invalid dimension ID or name";
      case NC_EUNLIMPOS:
         return "NetCDF: NC_UNLIMITED in the wrong index";
      case NC_EMAXVARS:
         return "NetCDF: NC_MAX_VARS exceeded";
      case NC_ENOTVAR:
         return "NetCDF: Variable not found";
      case NC_EGLOBAL:
         return "NetCDF: Action prohibited on NC_GLOBAL varid";
      case NC_ENOTNC:
         return "NetCDF: Unknown file format";
      case NC_ESTS:
         return "NetCDF: In Fortran, string too short";
      case NC_EMAXNAME:
         return "NetCDF: NC_MAX_NAME exceeded";
      case NC_EUNLIMIT:
         return "NetCDF: NC_UNLIMITED size already in use";
      case NC_ENORECVARS:
         return "NetCDF: nc_rec op when there are no record vars";
      case NC_ECHAR:
         return "NetCDF: Attempt to convert between text & numbers";
      case NC_EEDGE:
         return "NetCDF: Start+count exceeds dimension bound";
      case NC_ESTRIDE:
         return "NetCDF: Illegal stride";
      case NC_EBADNAME:
         return "NetCDF: Name contains illegal characters";
      case NC_ERANGE:
         return "NetCDF: Numeric conversion not representable";
      case NC_ENOMEM:
         return "NetCDF: Memory allocation (malloc) failure";
      case NC_EVARSIZE:
         return "NetCDF: One or more variable sizes violate format constraints";
      case NC_EDIMSIZE:
         return "NetCDF: Invalid dimension size";
      case NC_ETRUNC:
         return "NetCDF: File likely truncated or possibly corrupted";
      case NC_EAXISTYPE:
         return "NetCDF: Illegal axis type";
      case NC_EDAP:
         return "NetCDF: DAP failure";
      case NC_ECURL:
         return "NetCDF: libcurl failure";
      case NC_EIO:
         return "NetCDF: I/O failure";
      case NC_ENODATA:
         return "NetCDF: Variable has no data in DAP request";
      case NC_EDAPSVC:
         return "NetCDF: DAP server error";
      case NC_EDAS:
         return "NetCDF: Malformed or inaccessible DAP DAS";
      case NC_EDDS:
         return "NetCDF: Malformed or inaccessible DAP DDS";
      case NC_EDATADDS:
         return "NetCDF: Malformed or inaccessible DAP DATADDS";
      case NC_EDAPURL:
         return "NetCDF: Malformed URL";
      case NC_EDAPCONSTRAINT:
         return "NetCDF: Malformed or unexpected Constraint";
      case NC_ETRANSLATION:
         return "NetCDF: Untranslatable construct";
      case NC_EACCESS:
         return "NetCDF: Access failure";
      case NC_EAUTH:
         return "NetCDF: Authorization failure";
      case NC_ENOTFOUND:
         return "NetCDF: file not found";
      case NC_ECANTREMOVE:
         return "NetCDF: cannot delete file";
      case NC_EHDFERR:
         return "NetCDF: HDF error";
      case NC_ECANTREAD:
         return "NetCDF: Can't read file";
      case NC_ECANTWRITE:
         return "NetCDF: Can't write file";
      case NC_ECANTCREATE:
         return "NetCDF: Can't create file";
      case NC_EFILEMETA:
         return "NetCDF: Can't add HDF5 file metadata";
      case NC_EDIMMETA:
         return "NetCDF: Can't define dimensional metadata";
      case NC_EATTMETA:
         return "NetCDF: Can't open HDF5 attribute";
      case NC_EVARMETA:
         return "NetCDF: Problem with variable metadata.";
      case NC_ENOCOMPOUND:
         return "NetCDF: Can't create HDF5 compound type";
      case NC_EATTEXISTS:
         return "NetCDF: Attempt to create attribute that alread exists";
      case NC_ENOTNC4:
         return "NetCDF: Attempting netcdf-4 operation on netcdf-3 file";
      case NC_ESTRICTNC3:
         return "NetCDF: Attempting netcdf-4 operation on strict nc3 netcdf-4 file";
      case NC_ENOTNC3:
         return "NetCDF: Attempting netcdf-3 operation on netcdf-4 file";
      case NC_ENOPAR:
         return "NetCDF: Parallel operation on file opened for non-parallel access";
      case NC_EPARINIT:
         return "NetCDF: Error initializing for parallel access";
      case NC_EBADGRPID:
         return "NetCDF: Bad group ID";
      case NC_EBADTYPID:
         return "NetCDF: Bad type ID";
      case NC_ETYPDEFINED:
         return "NetCDF: Type has already been defined and may not be edited";
      case NC_EBADFIELD:
         return "NetCDF: Bad field ID";
      case NC_EBADCLASS:
         return "NetCDF: Bad class";
      case NC_EMAPTYPE:
         return "NetCDF: Mapped access for atomic types only";
      case NC_ELATEFILL:
         return "NetCDF: Attempt to define fill value when data already exists.";
      case NC_ELATEDEF:
         return "NetCDF: Attempt to define var properties, like deflate, after enddef.";
      case NC_EDIMSCALE:
         return "NetCDF: Probem with HDF5 dimscales.";
      case NC_ENOGRP:
         return "NetCDF: No group found.";
      case NC_ESTORAGE:
         return "NetCDF: Cannot specify both contiguous and chunking.";
      case NC_EBADCHUNK:
         return "NetCDF: Bad chunk sizes.";
      case NC_ENOTBUILT:
         return "NetCDF: Attempt to use feature that was not turned on "
            "when netCDF was built.";
      case NC_EDISKLESS:
         return "NetCDF: Error in using diskless access";
      default:
         return nc_unknown_err_msg;
   }
}


