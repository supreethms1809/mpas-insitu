#
# Copyright (C) 2003, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1885 2014-11-21 17:50:49Z wkliao $
#
# test/largefile/Makefile.  Generated from Makefile.in by configure.

srcdir = .


include ../../macros.make

INCLUDES  = -I../../src/lib
LIBS     := $(LIBRARY) $(LIBS) 

ifeq (no, yes)
DEFS := $(DEFS) -DWORDS_BIGENDIAN
endif

SRCS    = large_files.c \
          large_var.c

OBJS    = $(SRCS:.c=.o)
PROGS   = $(SRCS:.c=)

GARBAGE      = $(PROGS) *.nc
PACKING_LIST = $(SRCS) Makefile.in

all: $(PROGS)

large_files: large_files.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

large_var: large_var.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

testing check verbose_testing: $(PROGS)
	$(RM) -f $(TEST_OUTDIR)/testfile.nc $(TEST_OUTDIR)/testfile.nc
	for i in $< ; do ( \
	$(TEST_SEQRUN) ./$$i $(TEST_OUTDIR)/testfile.nc \
	; ) ; done

# Some of these tests are designed to run on one processes,
# Run them on 4 processes to see if they can handle well
TEST_MPIRUN_4  = $(subst NP,4,$(TEST_MPIRUN))
ptest: $(PROGS)
	$(RM) -f $(TEST_OUTDIR)/testfile.nc $(TEST_OUTDIR)/testfile.nc
	for i in $< ; do ( \
	$(TEST_MPIRUN_4) ./$$i $(TEST_OUTDIR)/testfile.nc \
	; ) ; done

TEST_MPIRUN_2  = $(subst NP,2,$(TEST_MPIRUN))
TEST_MPIRUN_6  = $(subst NP,6,$(TEST_MPIRUN))
ptests: $(PROGS)
	@for i in $(PROGS); do ( \
	$(TEST_MPIRUN_4) ./$$i $(TEST_OUTDIR)/testfile.nc \
	; ) ; done
	@for i in $(PROGS); do ( \
	$(TEST_MPIRUN_2) ./$$i $(TEST_OUTDIR)/testfile.nc \
	; ) ; done
	@for i in $(PROGS); do ( \
	$(TEST_MPIRUN_6) ./$$i $(TEST_OUTDIR)/testfile.nc \
	; ) ; done
include $(srcdir)/../../rules.make

$(LIBRARY): ;

