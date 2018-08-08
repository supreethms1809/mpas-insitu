#
# Copyright (C) 2003, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1885 2014-11-21 17:50:49Z wkliao $
#
# test/cdf_format/Makefile.  Generated from Makefile.in by configure.

srcdir  = .


include ../../macros.make

INCLUDES  = -I../../src/lib
LIBS     := $(LIBRARY) $(LIBS) 

SRCS    = test_inq_format.c cdf_type.c

OBJS    = $(SRCS:.c=.o)
PROGS   = $(SRCS:.c=)

GARBAGE      = $(PROGS) testfile.nc
PACKING_LIST = $(SRCS) Makefile.in

all: $(PROGS)
	set -e ; cd ../data && $(MAKE) $(MFLAGS) all

test_inq_format: test_inq_format.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

cdf_type: cdf_type.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

testing check verbose_testing: all
	$(TEST_SEQRUN) ./test_inq_format
	$(TEST_SEQRUN) ./cdf_type $(TEST_OUTDIR)/testfile.nc

ptest ptests:

include $(srcdir)/../../rules.make

$(LIBRARY): ;
