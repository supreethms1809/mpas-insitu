# $Id: macros.make.in 1908 2014-12-04 20:16:01Z robl $

# The purpose of this file is to contain common make(1) macros.
# It should be processed by every execution of that utility.



# POSIX shell.  Shouldn't be necessary -- but is under IRIX 5.3.
SHELL		= /bin/sh
RM		= rm
LN_S		= ln -s

# Installation Directories:
# SRCDIR	= @SRCDIR@
prefix		= /usr
exec_prefix	= $(prefix)
INCDIR		= $(exec_prefix)/include
LIBDIR		= $(exec_prefix)/lib
BINDIR		= $(exec_prefix)/bin
MANDIR		= $(prefix)/man
BUILDDIR	= /home/mpas/Desktop/Source/pnetcdf/parallel-netcdf-1.6.0
LIBRARY		= /home/mpas/Desktop/Source/pnetcdf/parallel-netcdf-1.6.0/src/lib/libpnetcdf.a


# Useful tools
M4		= m4
M4FLAGS		= 
EGREP		= /bin/grep -E

# AC_PROG_SED and AC_PROG_GREP are only available on autoconf 2.60 and later
# SED		= @SED@
# GREP		= /bin/grep
SED		= sed
GREP		= grep

# Preprocessing:
DEFS		= -DHAVE_CONFIG_H
FC_DEFINE	= -D
CPP		= /usr/bin/mpicc -E
CPPFLAGS	= $(INCLUDES) $(DEFS) 
CXXCPPFLAGS     = $(INCLUDES) $(DEFS) 
FPP		= 
FPPFLAGS	= $(INCLUDES) 


# Compilation:
CC		= /usr/bin/mpicc
CXX		= /usr/bin/mpicxx
F77		= /usr/bin/mpif77
FC		= /usr/bin/mpif77
F90		= /usr/bin/mpif90

CFLAGS		= -g -O2
CXXFLAGS	= -g -O2
FFLAGS		= -g -O2
FCFLAGS		= -g -O2
F90FLAGS	= -g -O2
FCFLAGS_f90	= 
FCFLAGS_F	= 
FCFLAGS_F90	= 

# NETCDF.MOD	= @NETCDF_MOD@
CC_MAKEDEPEND	= false

COMPILE.c	= $(CC)  -c $(CFLAGS)   $(CPPFLAGS)
COMPILE.cxx	= $(CXX) -c $(CXXFLAGS) $(CXXCPPFLAGS)
COMPILE.f	= $(F77) -c $(FFLAGS)   $(FPPFLAGS)
COMPILE.f90	= $(F90) -c $(F90FLAGS) $(FPPFLAGS) $(FCFLAGS_f90)
# The following command isn't available on some systems; therefore, the
# `.F.o' rule is relatively complicated.
COMPILE.F	= $(FC)  -c $(FCFLAGS)  $(FPPFLAGS) $(FCFLAGS_F)
COMPILE.F90	= $(F90) -c $(F90FLAGS) $(FPPFLAGS) $(FCFLAGS_F90)


# Linking:
FLIBS		= 
FCLIBS		=  -L/usr//lib -L/usr/lib/openmpi/lib -L/usr/lib/gcc/x86_64-linux-gnu/4.8 -L/usr/lib/gcc/x86_64-linux-gnu/4.8/../../../x86_64-linux-gnu -L/usr/lib/gcc/x86_64-linux-gnu/4.8/../../../../lib -L/lib/x86_64-linux-gnu -L/lib/../lib -L/usr/lib/x86_64-linux-gnu -L/usr/lib/../lib -L/usr/lib/gcc/x86_64-linux-gnu/4.8/../../.. -lmpi_f90 -lmpi_f77 -lmpi -ldl -lhwloc -lgfortran -lm -lquadmath -lpthread
F90LIBS		= 
FLDFLAGS	= 
F90LDFLAGS	= 
LDFLAGS		=  
LIBS		= 

LINK.c		= $(CC)  $(CFLAGS)   -o $@
LINK.cxx	= $(CXX) $(CXXFLAGS) -o $@
LINK.f		= $(F77) $(FFLAGS)   -o $@
LINK.F		= $(FC)  $(FCFLAGS)  -o $@
LINK.F90	= $(F90) $(F90FLAGS) -o $@

TEST_MPIRUN	= mpiexec -n NP
TEST_OUTDIR	= .
TEST_SEQRUN	= 

# Manual pages:
WHATIS		= whatis
# The following macro should be empty on systems that don't
# allow users to create their own manual-page indexes.
MAKEWHATIS_CMD	= 


# Misc. Utilities:
AR		= ar
ARFLAGS		= cru
AWK		= mawk
RANLIB		= ranlib
INSTALL 	= /usr/bin/install -c
INSTALL_DATA	= ${INSTALL} -m 644
TARFLAGS	= -chf


# Dummy macros: used only as placeholders to silence GNU make.  They are
# redefined, as necessary, in subdirectory makefiles.
HEADER		= dummy_header
HEADER1		= dummy_header1
HEADER2		= dummy_header2
HEADER3		= dummy_header3
MANUAL		= dummy_manual
PROGRAM		= dummy_program


# Distribution macros:
FTPDIR		= /home/ftp/pub/$(PACKAGE)
FTPBINDIR	= @FTPBINDIR@

PNETCDF_VERSION_MAJOR = 1
PNETCDF_VERSION_MINOR = 6
PNETCDF_VERSION_SUB   = 0
PNETCDF_VERSION_PRE   = 
PNETCDF_VERSION       = 1.6.0

