#
# Copyright (C) 2012, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1958 2014-12-27 21:04:48Z wkliao $
#
# examples/Makefile.  Generated from Makefile.in by configure.

srcdir  = .


include ../macros.make

GARBAGE =

SUBDIRS = C tutorial

ifeq (yes, yes)
SUBDIRS += CXX
endif

ifeq (yes, yes)
SUBDIRS += F77
SUBDIRS += F90
endif

PACKING_LIST = Makefile.in README

PACKING_SUBDIRS = C tutorial F77 F90 CXX

all: $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) $(MFLAGS) -C $@

PTEST_DIRS = $(SUBDIRS:%=ptest-%)
ptest: $(PTEST_DIRS)
$(PTEST_DIRS):
	$(MAKE) $(MFLAGS) -C $(@:ptest-%=%) ptest

# make ptest cannot run in parallel. use dependency to ensure.
ptest-tutorial: ptest-C
ptest-CXX:      ptest-tutorial
ptest-F77:      ptest-CXX
ptest-F90:      ptest-F77

PTESTS_DIRS = $(SUBDIRS:%=ptests-%)
ptests: $(PTESTS_DIRS)
$(PTESTS_DIRS):
	$(MAKE) $(MFLAGS) -C $(@:ptests-%=%) ptests

# make ptests cannot run in parallel. use dependency to ensure.
ptests-tutorial: ptests-C
ptests-CXX:      ptests-tutorial
ptests-F77:      ptests-CXX
ptests-F90:      ptests-F77

INSTALLDIRS = $(SUBDIRS:%=install-%)
install: all $(INSTALLDIRS)
$(INSTALLDIRS): 
	$(MAKE) $(MFLAGS) -C $(@:install-%=%) install

UNINSTALLDIRS = $(SUBDIRS:%=uninstall-%)
uninstall: $(UNINSTALLDIRS)
$(UNINSTALLDIRS): 
	$(MAKE) $(MFLAGS) -C $(@:uninstall-%=%) uninstall

include $(srcdir)/../rules.make

