#
# Copyright (C) 2014, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1885 2014-11-21 17:50:49Z wkliao $
#
# test/CXX/Makefile.  Generated from Makefile.in by configure.

srcdir	= .


include ../../macros.make

INCLUDES  = -I../../src/lib -I../../src/libcxx
LIBS     := $(LIBRARY) $(LIBS) 

SRCS    = nctst.cpp \
          test_classic.cpp

OBJS    = $(SRCS:.cpp=.o)
PROGS   = $(SRCS:.cpp=)

PAR_PROGS =

GARBAGE      = $(PROGS) *.nc
PACKING_LIST = $(SRCS) Makefile.in

all: $(PROGS)

nctst.o: nctst.cpp 

nctst: nctst.o $(LIBRARY) $(LIBRARY)
	$(LINK.cxx) $< $(LDFLAGS) $(LIBS)

test_classic.o: test_classic.cpp 

test_classic: test_classic.o $(LIBRARY)
	$(LINK.cxx) $< $(LDFLAGS) $(LIBS)

check testing verbose_testing: $(PROGS)
	$(TEST_SEQRUN) ./nctst        $(TEST_OUTDIR)/testfile.nc
	$(TEST_SEQRUN) ./test_classic $(TEST_OUTDIR)/testfile.nc


TEST_MPIRUN_4  = $(subst NP,4,$(TEST_MPIRUN))

ptest: $(PAR_PROGS)
	@for i in $(PAR_PROGS); do ( \
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

