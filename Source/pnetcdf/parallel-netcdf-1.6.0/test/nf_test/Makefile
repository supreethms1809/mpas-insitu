#
# Copyright (C) 2003, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1885 2014-11-21 17:50:49Z wkliao $
#
# test/nf_test/Makefile.  Generated from Makefile.in by configure.

srcdir = .


include ../../macros.make

INCLUDES  = -I../../src/lib -I../../src/libf
INCLUDES += -I$(srcdir) -I$(srcdir)/../../src/libf
LIBS     := $(LIBRARY) $(LIBS) 

M4SRCS    = test_get.m4 \
            test_put.m4  \
            test_iget.m4 \
            test_iput.m4

M4SRCS_F  = $(M4SRCS:.m4=.F)

F_SRCS    = nf_error.F \
            nf_test.F \
            test_read.F \
            test_write.F \
            util.F

C_SRCS    = fortlib.c

HEADERS   = tests.inc

C_OBJS  = $(C_SRCS:.c=.o)
F_OBJS  = $(F_SRCS:.F=.o) $(M4SRCS_F:.F=.o)
OBJS    = $(C_OBJS) $(F_OBJS)

PROGS  = nf_test

GARBAGE = $(PROGS) $(M4SRCS_F) \
          scratch.nc test.nc

PACKING_LIST = $(C_SRCS) $(F_SRCS) $(M4SRCS) $(HEADERS) depend Makefile.in README

all: $(PROGS)

nf_test: $(OBJS) $(LIBRARY)
	$(LINK.F) $(OBJS) $(LDFLAGS) $(LIBS)

tags: $(F_SRCS) $(C_SRCS) FORCE
	ctags -t $(F_SRCS) $(C_SRCS) ../fortran/*.c ../libsrc/*.c

# This simple testing target ensures that the test files are present
testing check: all
	$(RM) -f $(TEST_OUTDIR)/scratch.nc $(TEST_OUTDIR)/test.nc
	$(TEST_SEQRUN) ./nf_test -c    -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf_test       -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf_test -c -2 -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf_test -2    -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf_test -c -5 -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf_test -5    -d $(TEST_OUTDIR)

verbose_testing: all
	$(RM) -f $(TEST_OUTDIR)/scratch.nc $(TEST_OUTDIR)/test.nc
	$(TEST_SEQRUN) ./nf_test -v -c    -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf_test -v       -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf_test -v -c -2 -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf_test -v -2    -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf_test -v -c -5 -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nf_test -v -5    -d $(TEST_OUTDIR)

#test.nc: 
#	(cd ../nc_test && $(MAKE) $(MFLAGS) nc_test && ./nc_test -c)
#	cp ../nc_test/test.nc .

ptest ptests:

include $(srcdir)/../../rules.make
include $(srcdir)/depend

$(LIBRARY): ;

