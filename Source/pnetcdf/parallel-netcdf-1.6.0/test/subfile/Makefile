#
# Copyright (C) 2013, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1885 2014-11-21 17:50:49Z wkliao $
#
# test/subfile/Makefile.  Generated from Makefile.in by configure.

srcdir = .


include ../../macros.make

INCLUDES  = -I../../src/lib
FPPFLAGS += -I../../src/libf -I../../src/libf90
F90FLAGS += -J.
LIBS     := $(LIBRARY) $(LIBS) 

C_SRCS   = test_subfile.c

CXX_SRCS = 

F77_SRCS = 

PROGS    = $(C_SRCS:.c=)
OBJS     = $(C_SRCS:.c=.o)
ifeq (yes, yes)
PROGS   += $(CXX_SRCS:.cpp=)
OBJS    += $(CXX_SRCS:.cpp=.o)
endif

ifeq (yes, yes)
PROGS   += $(F77_SRCS:.f=)
OBJS    += $(F77_SRCS:.f=.o)
endif

GARBAGE      = $(PROGS) *.nc
PACKING_LIST = $(C_SRCS) $(F77_SRCS) $(CXX_SRCS) Makefile.in depend README

all: $(PROGS)

test_subfile: test_subfile.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

testing check verbose_testing:

TEST_MPIRUN_2 = $(subst NP,2,$(TEST_MPIRUN))
ptest : $(PROGS)
	@for i in $(PROGS); do ( \
	$(TEST_MPIRUN_2) ./$$i -f $(TEST_OUTDIR)/testfile.nc -s 2 \
	; ) ; done

TEST_MPIRUN_4  = $(subst NP,4,$(TEST_MPIRUN))
ptests: $(PROGS)
	@for i in $(PROGS); do ( \
	$(TEST_MPIRUN_2) ./$$i -f $(TEST_OUTDIR)/testfile.nc -s 2 \
	; ) ; done
	@for i in $(PROGS); do ( \
	$(TEST_MPIRUN_4) ./$$i -f $(TEST_OUTDIR)/testfile.nc -s 2 \
	; ) ; done

include $(srcdir)/../../rules.make
include $(srcdir)/depend

$(LIBRARY): ;

