#
# Copyright (C) 2003, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1885 2014-11-21 17:50:49Z wkliao $
#
# test/nf90_test/Makefile.  Generated from Makefile.in by configure.

srcdir = .


include ../../macros.make

INCLUDES  = -I../../src/lib -I../../src/libf
INCLUDES += -I$(srcdir) -I$(srcdir)/../../src/libf
INCLUDES += -I../../src/libf90
LIBS     := $(LIBRARY) $(LIBS) 

M4SRCS      = test_get.m4 \
              test_put.m4  \
              test_iget.m4 \
              test_iput.m4

M4SRCS_F90  = $(M4SRCS:.m4=.F90)

F90_SRCS    = nf90_error.F90 \
              nf90_test.F90 \
              test_read.F90 \
              test_write.F90 \
              util.F90

C_SRCS      = fortlib.c

HEADERS     = tests.inc

C_OBJS   = $(C_SRCS:.c=.o)
F90_OBJS = $(F90_SRCS:.F90=.o) $(M4SRCS_F90:.F90=.o)
OBJS     = $(C_OBJS) $(F90_OBJS)

PROGS    = nf90_test

GARBAGE  = $(PROGS) $(M4SRCS_F90) \
           scratch.nc test.nc

PACKING_LIST = $(C_SRCS) $(F90_SRCS) $(M4SRCS) $(HEADERS) depend Makefile.in README

all: $(PROGS)

nf90_test: $(OBJS) $(LIBRARY)
	$(LINK.F90) $(OBJS) $(LDFLAGS) $(LIBS)

tags: $(F90_SRCS) $(C_SRCS) FORCE
	ctags -t $(F90_SRCS) $(C_SRCS) ../fortran/*.c ../libsrc/*.c

# This simple testing target ensures that the test files are present
testing check: all
	$(RM) -f $(TEST_OUTDIR)/scratch.nc $(TEST_OUTDIR)/test.nc
	$(TEST_SEQRUN) ./nf90_test -c    -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf90_test       -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf90_test -c -2 -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf90_test -2    -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf90_test -c -5 -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf90_test -5    -d $(TEST_OUTDIR)

verbose_testing: all
	$(RM) -f $(TEST_OUTDIR)/scratch.nc $(TEST_OUTDIR)/test.nc
	$(TEST_SEQRUN) ./nf90_test -v -c    -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf90_test -v       -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf90_test -v -c -2 -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf90_test -v -2    -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf90_test -v -c -5 -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf90_test -v -5    -d $(TEST_OUTDIR)

#test.nc: 
#	(cd ../nc_test && $(MAKE) $(MFLAGS) nc_test && ./nc_test -c)
#	cp ../nc_test/test.nc .

ptest ptests:

include $(srcdir)/../../rules.make
include $(srcdir)/depend

$(LIBRARY): ;

