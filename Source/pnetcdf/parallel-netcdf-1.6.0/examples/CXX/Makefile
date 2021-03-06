#
# Copyright (C) 2014, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1989 2015-01-31 22:25:20Z wkliao $
#
# examples/CXX/Makefile.  Generated from Makefile.in by configure.

srcdir  = .


include ../../macros.make

# note the order of -L list matters
INCLUDES  = -I../../src/lib -I../../src/libcxx
LDFLAGS  := -L../../src/lib $(LDFLAGS)
LIBS     := -lpnetcdf $(LIBS)

C_SRCS  = collective_write.cpp \
          nonblocking_write.cpp \
          column_wise.cpp \
          block_cyclic.cpp \
          flexible_api.cpp \
          get_info.cpp \
          hints.cpp \
          put_varn_float.cpp \
          put_varn_int.cpp \
          put_vara.cpp \
          get_vara.cpp \
          transpose.cpp \
          vard_int.cpp

PROGS        = $(C_SRCS:.cpp=)
OBJS         = $(C_SRCS:.cpp=.o)

PAR_PROGS    = $(PROGS)

GARBAGE      = $(PROGS) *.nc

PACKING_LIST = $(C_SRCS) depend Makefile.in

all: $(PROGS)

install:

uninstall:

collective_write: collective_write.o $(LIBRARY)
	$(LINK.cxx) $< $(LDFLAGS) $(LIBS)

nonblocking_write: nonblocking_write.o $(LIBRARY)
	$(LINK.cxx) $< $(LDFLAGS) $(LIBS)

get_info: get_info.o $(LIBRARY)
	$(LINK.cxx) $< $(LDFLAGS) $(LIBS)

column_wise: column_wise.o $(LIBRARY)
	$(LINK.cxx) $< $(LDFLAGS) $(LIBS)

block_cyclic: block_cyclic.o $(LIBRARY)
	$(LINK.cxx) $< $(LDFLAGS) $(LIBS)

put_vara: put_vara.o $(LIBRARY)
	$(LINK.cxx) $< $(LDFLAGS) $(LIBS)

hints: hints.o $(LIBRARY)
	$(LINK.cxx) $< $(LDFLAGS) $(LIBS)

flexible_api: flexible_api.o $(LIBRARY)
	$(LINK.cxx) $< $(LDFLAGS) $(LIBS)

put_varn_int: put_varn_int.o $(LIBRARY)
	$(LINK.cxx) $< $(LDFLAGS) $(LIBS)

put_varn_float: put_varn_float.o $(LIBRARY)
	$(LINK.cxx) $< $(LDFLAGS) $(LIBS)

get_vara: get_vara.o $(LIBRARY)
	$(LINK.cxx) $< $(LDFLAGS) $(LIBS)

transpose: transpose.o $(LIBRARY)
	$(LINK.cxx) $< $(LDFLAGS) $(LIBS)

vard_int: vard_int.o $(LIBRARY)
	$(LINK.cxx) $< $(LDFLAGS) $(LIBS)

TEST_MPIRUN_4  = $(subst NP,4,$(TEST_MPIRUN))
TEST_MPIRUN_8  = $(subst NP,8,$(TEST_MPIRUN))
TEST_MPIRUN_3  = $(subst NP,3,$(TEST_MPIRUN))

ptest: $(PAR_PROGS)
	@for i in $(PAR_PROGS); do ( \
        $(TEST_MPIRUN_4) ./$$i -q $(TEST_OUTDIR)/testfile.nc ; \
        if [ $$? = 0 ] ; then \
           echo "PASS: parallel run on 4 processes ------------------- $$i"; \
        else \
           echo "FAILED: parallel run on 4 processes ----------------- $$i"; \
        fi ; ) ; done

ptests: $(PAR_PROGS)
	@for i in $(PAR_PROGS); do ( \
        $(TEST_MPIRUN_4) ./$$i -q $(TEST_OUTDIR)/testfile.nc ; \
        if [ $$? = 0 ] ; then \
           echo "PASS: parallel run on 4 processes ------------------- $$i"; \
        else \
           echo "FAILED: parallel run on 4 processes ----------------- $$i"; \
        fi ; ) ; done
	@for i in $(PAR_PROGS) ; do ( \
        $(TEST_MPIRUN_8) ./$$i -q $(TEST_OUTDIR)/testfile.nc ; \
        if [ $$? = 0 ] ; then \
           echo "PASS: parallel run on 8 processes ------------------- $$i"; \
        else \
           echo "FAILED: parallel run on 8 processes ----------------- $$i"; \
        fi ; ) ; done
	@for i in $(PAR_PROGS) ; do ( \
        $(TEST_MPIRUN_3) ./$$i -q $(TEST_OUTDIR)/testfile.nc ; \
        if [ $$? = 0 ] ; then \
           echo "PASS: parallel run on 3 processes ------------------- $$i"; \
        else \
           echo "FAILED: parallel run on 3 processes ----------------- $$i"; \
        fi ; ) ; done

include $(srcdir)/depend
include $(srcdir)/../../rules.make

$(LIBRARY): ;

