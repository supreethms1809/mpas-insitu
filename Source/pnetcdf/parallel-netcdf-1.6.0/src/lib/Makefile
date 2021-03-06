#
# Copyright (C) 2012, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1870 2014-11-16 01:48:31Z wkliao $
#
# src/lib/Makefile.  Generated from Makefile.in by configure.

srcdir = .


# generated by configure, so it's in the build dir, not srcdirr
include ../../macros.make

INCLUDES = -I. -I$(srcdir)

LIBRARY  = libpnetcdf.a
HEADER   = pnetcdf.h

M4_SRCS   = getput.m4 \
            i_getput.m4 \
            bput.m4 \
            ncx.m4 \
            m_getput_varx.m4 \
            varn.m4 \
            i_varn.m4 \
            attr.m4 \
            convert_swap.m4

HEADER_SRCS = fbits.h \
              nc.h \
              nctypes.h \
              ncio.h \
              ncx.h \
              rnd.h \
              ncmpidtype.h \
              macro.h \
              utf8proc_data.h \
              utf8proc.h

LIB_CSRCS = mpinetcdf.c \
            header.c \
            mpincio.c \
            dim.c \
            error.c \
            nc.c \
            string.c \
            var.c \
            ncmpidtype.c \
            filetype.c \
            nonblocking.c   \
            malloc.c \
            utf8proc.c \
            swap.c \
            vard.c

ifeq (yes, yes)
LIB_CSRCS   += subfile.c
HEADER_SRCS += subfile.h
endif

PACKING_LIST = $(LIB_CSRCS) \
               $(M4_SRCS) \
               $(HEADER_SRCS) \
               pnetcdf.h.in \
               depend \
               Makefile.in \
               ncconfig.h.in

ifeq (yes, no)
PACKING_LIST += subfile.c subfile.h
endif

LIB_OBJS   = $(LIB_CSRCS:.c=.o) $(M4_SRCS:.m4=.o)

GARBAGE    = $(LIBRARY) $(M4_SRCS:.m4=.c)

DIST_GARBAGE = ncconfig.h pnetcdf.h

all objs: $(LIBRARY)

$(LIBRARY): $(LIB_OBJS)
	$(AR) $(ARFLAGS) $(LIBRARY) $(LIB_OBJS)
	$(RANLIB) $(LIBRARY)

install:
	$(INSTALL) -d -m 755 $(LIBDIR)
	$(INSTALL_DATA) $(LIBRARY) $(LIBDIR)/$(LIBRARY)
	$(INSTALL) -d -m 755 $(INCDIR)
	$(INSTALL_DATA) $(HEADER) $(INCDIR)/$(HEADER)

uninstall:
	$(RM) -f $(LIBDIR)/$(LIBRARY)
	$(RM) -f $(INCDIR)/$(HEADER)

include $(srcdir)/../../rules.make

.SUFFIXES: .ln
LINT = lint
LINT.c = $(LINT) $(LINTFLAGS) $(CPPFLAGS)
.c.ln:
	$(LINT.c) -c $<

llib-lpnetcdf.ln: $(LIB_CSRCS)
	$(LINT.c) $(LIB_CSRCS) -y -o pnetcdf

lint: llib-lpnetcdf.ln
	$(LINT.c) t_nc.c llib-lpnetcdf.ln

include $(srcdir)/depend
