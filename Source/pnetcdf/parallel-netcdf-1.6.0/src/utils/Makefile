#
# Copyright (C) 2003, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1629 2014-05-12 23:48:33Z wkliao $
#
# src/utils/Makefile.  Generated from Makefile.in by configure.

srcdir = .


include ../../macros.make

SUBDIRS = ncmpigen ncmpidump ncmpidiff ncmpivalid pnetcdf_version

PACKING_LIST = Makefile.in

PACKING_SUBDIRS = $(SUBDIRS)

all objs: $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) $(MFLAGS) -C $@

INSTALLDIRS = $(SUBDIRS:%=install-%)
install: $(INSTALLDIRS)
$(INSTALLDIRS): 
	$(MAKE) $(MFLAGS) -C $(@:install-%=%) install

UNINSTALLDIRS = $(SUBDIRS:%=uninstall-%)
uninstall: $(UNINSTALLDIRS)
$(UNINSTALLDIRS): 
	$(MAKE) $(MFLAGS) -C $(@:uninstall-%=%) uninstall

include $(srcdir)/../../rules.make
