#
# Copyright (C) 2003, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1885 2014-11-21 17:50:49Z wkliao $
#
# test/test_int/Makefile.  Generated from Makefile.in by configure.

srcdir  = .


include ../../macros.make

INCLUDES  = -I../../src/lib -I$(srcdir)/../common
LDFLAGS  += -L../common
LIBS     := -ltestutils $(LIBRARY) $(LIBS) 

SRCS    = test_read.c \
          test_read_indep.c \
          test_write.c \
          test_write_indep.c \
          test_write64.c \
          test_read64.c

OBJS    = $(SRCS:.c=.o)
PROGS   = $(SRCS:.c=)

GARBAGE      = $(PROGS)
PACKING_LIST = $(SRCS) Makefile.in README header.txt

all: $(PROGS)
	set -e; cd ../data && $(MAKE) $(MFLAGS) all

test_read: test_read.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

test_read_indep: test_read_indep.o  $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

test_write: test_write.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

test_write_indep: test_write_indep.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

test_write64: test_write64.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

test_read64: test_read64.o $(LIBRARY)
	$(LINK.c) $< $(LDFLAGS) $(LIBS)

testing check verbose_testing:

ptest ptests:

include $(srcdir)/../../rules.make

$(LIBRARY): ;

