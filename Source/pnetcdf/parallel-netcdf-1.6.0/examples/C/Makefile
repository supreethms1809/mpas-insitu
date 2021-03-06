#
# Copyright (C) 2012, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1989 2015-01-31 22:25:20Z wkliao $
#
# examples/C/Makefile.  Generated from Makefile.in by configure.

srcdir  = .


include ../../macros.make

# note the order of -L list matters
INCLUDES  = -I../../src/lib
LDFLAGS  := -L../../src/lib $(LDFLAGS)
LIBS     := -lpnetcdf $(LIBS)

C_SRCS  = collective_write.c \
          nonblocking_write.c \
          column_wise.c \
          block_cyclic.c \
          flexible_api.c \
          get_info.c \
          hints.c \
          mput.c \
          put_varn_float.c \
          put_varn_int.c \
          create_open.c \
          global_attributes.c \
          put_vara.c \
          get_vara.c \
          transpose.c \
          vard_int.c \
          i_varn_int64.c \
          bput_varn_uint.c

# Note: put_vara must be run immediately before get_vara

PROGS     = $(C_SRCS:.c=)
OBJS      = $(C_SRCS:.c=.o)

GARBAGE      = $(PROGS) *.nc

PACKING_LIST = $(C_SRCS) depend Makefile.in

all: $(PROGS)

install:

uninstall:

collective_write: collective_write.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

nonblocking_write: nonblocking_write.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

get_info: get_info.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

column_wise: column_wise.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

block_cyclic: block_cyclic.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

put_vara: put_vara.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

mput: mput.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

hints: hints.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

flexible_api: flexible_api.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

put_varn_int: put_varn_int.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

put_varn_float: put_varn_float.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

create_open: create_open.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

global_attributes: global_attributes.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

get_vara: get_vara.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

transpose: transpose.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

vard_int: vard_int.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

i_varn_int64: i_varn_int64.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

bput_varn_uint: bput_varn_uint.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

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
	@for i in $(PROGS) ; do ( \
        $(TEST_MPIRUN_3) ./$$i -q $(TEST_OUTDIR)/testfile.nc ; \
        if [ $$? = 0 ] ; then \
           echo "PASS: parallel run on 3 processes ------------------- $$i"; \
        else \
           echo "FAILED: parallel run on 3 processes ----------------- $$i"; \
        fi ; ) ; done

include $(srcdir)/depend
include $(srcdir)/../../rules.make

$(LIBRARY): ;

