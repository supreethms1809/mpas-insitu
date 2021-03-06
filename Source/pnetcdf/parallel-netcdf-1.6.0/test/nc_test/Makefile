#
# Copyright (C) 2003, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1885 2014-11-21 17:50:49Z wkliao $
#
# test/nc_test/Makefile.  Generated from Makefile.in by configure.

srcdir = .


include ../../macros.make

INCLUDES  = -I../../src/lib -I$(srcdir)
LIBS     := $(LIBRARY) $(LIBS) -lm 

SRCS      = test_read.c \
            test_write.c \
            error.c \
            util.c

PROG_SRCS = nc_test.c \
            t_nc.c \
            tst_misc.c \
            tst_norm.c \
            tst_small.c \
            tst_names.c \
            tst_atts3.c \
            tst_atts.c

M4_SRCS   = test_get.m4 \
            test_put.m4 \
            test_iget.m4 \
            test_iput.m4

HEADERS   = tests.h \
            error.h

OBJS      = $(SRCS:.c=.o) $(M4_SRCS:.m4=.o)

PROGS     = $(PROG_SRCS:.c=)

GARBAGE      = $(PROGS) $(M4_SRCS:.m4=.c) \
               test.nc testfile.nc scratch.nc testfile.nc.2

PACKING_LIST = $(SRCS) $(M4_SRCS) $(HEADERS) $(PROG_SRCS) \
               Makefile.in depend README

all: $(PROGS)

nc_test: nc_test.o $(OBJS) $(LIBRARY)
	$(LINK.c) $< $(OBJS) $(LDFLAGS) $(LIBS)

t_nc: t_nc.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

tst_misc: tst_misc.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

tst_norm: tst_norm.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

tst_small: tst_small.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

tst_names: tst_names.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

tst_atts3: tst_atts3.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

tst_atts: tst_atts.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

# This simple testing target ensures that the test files are present
check testing: all
	$(RM) -f $(TEST_OUTDIR)/scratch.nc $(TEST_OUTDIR)/testfile.nc
	$(TEST_SEQRUN) ./nc_test -c    -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nc_test -d       $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nc_test -c -2 -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nc_test -2 -d    $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nc_test -c -5 -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nc_test -5 -d    $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./t_nc             $(TEST_OUTDIR)/testfile.nc
	$(TEST_SEQRUN) ./tst_misc         $(TEST_OUTDIR)/testfile.nc
	$(TEST_SEQRUN) ./tst_norm         $(TEST_OUTDIR)/testfile.nc
	$(TEST_SEQRUN) ./tst_small        $(TEST_OUTDIR)/testfile.nc
	$(TEST_SEQRUN) ./tst_names        $(TEST_OUTDIR)/testfile.nc
	$(TEST_SEQRUN) ./tst_atts3        $(TEST_OUTDIR)/testfile.nc
	$(TEST_SEQRUN) ./tst_atts         $(TEST_OUTDIR)/testfile.nc

verbose_testing: all
	$(RM) -f $(TEST_OUTDIR)/scratch.nc $(TEST_OUTDIR)/testfile.nc
	$(TEST_SEQRUN) ./nc_test -c -v    -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nc_test -v -d       $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nc_test -c -v -2 -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nc_test -v -2 -d    $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nc_test -c -v -5 -d $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./nc_test -v -5 -d    $(TEST_OUTDIR)
	$(TEST_SEQRUN) ./t_nc                $(TEST_OUTDIR)/testfile.nc
	$(TEST_SEQRUN) ./tst_misc            $(TEST_OUTDIR)/testfile.nc
	$(TEST_SEQRUN) ./tst_norm            $(TEST_OUTDIR)/testfile.nc
	$(TEST_SEQRUN) ./tst_small           $(TEST_OUTDIR)/testfile.nc
	$(TEST_SEQRUN) ./tst_names           $(TEST_OUTDIR)/testfile.nc
	$(TEST_SEQRUN) ./tst_atts3           $(TEST_OUTDIR)/testfile.nc
	$(TEST_SEQRUN) ./tst_atts            $(TEST_OUTDIR)/testfile.nc

ptest ptests:

include $(srcdir)/../../rules.make
include $(srcdir)/depend

$(LIBRARY): ;

