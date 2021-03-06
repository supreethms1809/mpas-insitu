#
# Copyright (C) 2012, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1989 2015-01-31 22:25:20Z wkliao $
#
# examples/F90/Makefile.  Generated from Makefile.in by configure.

srcdir  = .


include ../../macros.make

# note the order of -L list matters
INCLUDES    = -I../../src/libf90
F90LDFLAGS := -L../../src/lib $(F90LDFLAGS) $(LDFLAGS)
LIBS       := -lpnetcdf $(LIBS)

F90_SRCS  = nonblocking_write.f90 \
            column_wise.f90 \
            block_cyclic.f90 \
            flexible_api.f90 \
            get_info.f90 \
            hints.f90 \
            put_var.f90 \
            put_varn_real.f90 \
            put_varn_int.f90 \
            transpose.f90 \
            vard_int.f90

PROGS     = $(F90_SRCS:.f90=)
OBJS      = $(F90_SRCS:.f90=.o)

GARBAGE      = $(PROGS) *.nc

PACKING_LIST = $(F90_SRCS) depend Makefile.in

all: $(PROGS)

install:

uninstall:

nonblocking_write: nonblocking_write.o $(LIBRARY)
	$(LINK.F90) $< $(F90LDFLAGS) $(LIBS)

get_info: get_info.o $(LIBRARY)
	$(LINK.F90) $< $(F90LDFLAGS) $(LIBS)

column_wise: column_wise.o $(LIBRARY)
	$(LINK.F90) $< $(F90LDFLAGS) $(LIBS)

block_cyclic: block_cyclic.o $(LIBRARY)
	$(LINK.F90) $< $(F90LDFLAGS) $(LIBS)

put_var: put_var.o $(LIBRARY)
	$(LINK.F90) $< $(F90LDFLAGS) $(LIBS)

hints: hints.o $(LIBRARY)
	$(LINK.F90) $< $(F90LDFLAGS) $(LIBS)

flexible_api: flexible_api.o $(LIBRARY)
	$(LINK.F90) $< $(F90LDFLAGS) $(LIBS)

put_varn_int: put_varn_int.o $(LIBRARY)
	$(LINK.F90) $< $(F90LDFLAGS) $(LIBS)

put_varn_real: put_varn_real.o $(LIBRARY)
	$(LINK.F90) $< $(F90LDFLAGS) $(LIBS)

transpose: transpose.o $(LIBRARY)
	$(LINK.F90) $< $(F90LDFLAGS) $(LIBS)

vard_int: vard_int.o $(LIBRARY)
	$(LINK.F90) $< $(F90LDFLAGS) $(LIBS)

TEST_MPIRUN_4  = $(subst NP,4,$(TEST_MPIRUN))
TEST_MPIRUN_8  = $(subst NP,8,$(TEST_MPIRUN))
TEST_MPIRUN_3  = $(subst NP,3,$(TEST_MPIRUN))

ptest: $(PROGS)
	@for i in $(PROGS); do ( \
        $(TEST_MPIRUN_4) ./$$i -q $(TEST_OUTDIR)/testfile.nc ; \
        if [ $$? = 0 ] ; then \
           echo "PASS: parallel run on 4 processes ------------------- $$i"; \
        else \
           echo "FAILED: parallel run on 4 processes ----------------- $$i"; \
        fi ; ) ; done

ptests: $(PROGS)
	@for i in $(PROGS); do ( \
        $(TEST_MPIRUN_4) ./$$i -q $(TEST_OUTDIR)/testfile.nc ; \
        if [ $$? = 0 ] ; then \
           echo "PASS: parallel run on 4 processes ------------------- $$i"; \
        else \
           echo "FAILED: parallel run on 4 processes ----------------- $$i"; \
        fi ; ) ; done
	@for i in $(PROGS); do ( \
        $(TEST_MPIRUN_8) ./$$i -q $(TEST_OUTDIR)/testfile.nc ; \
        if [ $$? = 0 ] ; then \
           echo "PASS: parallel run on 8 processes ------------------- $$i"; \
        else \
           echo "FAILED: parallel run on 8 processes ----------------- $$i"; \
        fi ; ) ; done
	@for i in $(PROGS); do ( \
        $(TEST_MPIRUN_3) ./$$i -q $(TEST_OUTDIR)/testfile.nc ; \
        if [ $$? = 0 ] ; then \
           echo "PASS: parallel run on 3 processes ------------------- $$i"; \
        else \
           echo "FAILED: parallel run on 3 processes ----------------- $$i"; \
        fi ; ) ; done

include $(srcdir)/depend
include $(srcdir)/../../rules.make

$(LIBRARY): ;

