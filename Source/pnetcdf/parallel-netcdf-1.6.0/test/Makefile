#
# Copyright (C) 2003, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1885 2014-11-21 17:50:49Z wkliao $
#
# test/Makefile.  Generated from Makefile.in by configure.

srcdir = .


include ../macros.make

SUBDIRS = common \
          nc_test \
          test_int \
          test_float \
          test_double \
          test_double_int \
          test_dtype \
          C \
          fandc \
          nonblocking \
          cdf_format \
          header \
          testcases \
          data

# Packing subdirs must include all directories
PACKING_SUBDIRS := $(SUBDIRS) largefile nf_test nf90_test F90 subfile CXX

ifeq (no, yes)
SUBDIRS += largefile
endif

ifeq (yes, yes)
SUBDIRS += CXX
endif

ifeq (yes, yes)
SUBDIRS += nf_test
SUBDIRS += nf90_test
SUBDIRS += F90
endif

ifeq (yes, yes)
SUBDIRS += subfile
endif

PACKING_LIST = Makefile.in

all: $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) $(MFLAGS) -C $@

test_int: common
test_float: common
test_double_int: common
test_double: common

CHECK_DIRS = $(SUBDIRS:%=check-%)
check testing: $(CHECK_DIRS)
$(CHECK_DIRS):
	$(MAKE) $(MFLAGS) -C $(@:check-%=%) testing

VCHECK_DIRS = $(SUBDIRS:%=vcheck-%)
verbose_check verbose_testing: $(VCHECK_DIRS)
$(VCHECK_DIRS):
	$(MAKE) $(MFLAGS) -C $(@:vcheck-%=%) verbose_testing

PTEST_DIRS = $(SUBDIRS:%=ptest-%)
ptest: $(PTEST_DIRS)
$(PTEST_DIRS):
	$(MAKE) $(MFLAGS) -C $(@:ptest-%=%) ptest

PTESTS_DIRS = $(SUBDIRS:%=ptests-%)
ptests: $(PTESTS_DIRS)
$(PTESTS_DIRS):
	$(MAKE) $(MFLAGS) -C $(@:ptests-%=%) ptests

INSTALLDIRS = $(SUBDIRS:%=install-%)
install: all $(INSTALLDIRS)
$(INSTALLDIRS): 
	$(MAKE) $(MFLAGS) -C $(@:install-%=%) install

UNINSTALLDIRS = $(SUBDIRS:%=uninstall-%)
uninstall: $(UNINSTALLDIRS)
$(UNINSTALLDIRS): 
	$(MAKE) $(MFLAGS) -C $(@:uninstall-%=%) uninstall

include $(srcdir)/../rules.make

.NOTPARALLEL:

