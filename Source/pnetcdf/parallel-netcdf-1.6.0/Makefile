#
# Copyright (C) 2003, Northwestern University and Argonne National Laboratory
# See COPYRIGHT notice in top-level directory.
#
# $Id: Makefile.in 1885 2014-11-21 17:50:49Z wkliao $
#
# Makefile.  Generated from Makefile.in by configure.

srcdir = .


include macros.make

PACKAGE_NAME      = parallel-netcdf
PACKAGE_VERSION   = 1.6.0
PACKAGE_STRING    = parallel-netcdf 1.6.0
PACKAGE_BUGREPORT = parallel-netcdf@mcs.anl.gov

PACKAGE_FILENAME  = $(PACKAGE_NAME)-$(PACKAGE_VERSION)

INSTALL_SUBDIRS	= src man

SUBDIRS		= src \
		  test \
		  scripts \
		  doc \
		  man \
		  benchmarks \
		  examples

GARBAGE		=

DIST_GARBAGE	= config.cache \
		  config.status \
		  config.log \
		  macros.make

PACKING_LIST	= Makefile.in \
		  aclocal.m4 \
		  configure \
		  configure.in \
		  macros.make.in \
		  rules.make \
		  COPYRIGHT \
		  CREDITS \
		  INSTALL \
		  README \
		  README.CRAY \
		  README.IBM \
		  README.LINUX \
		  README.SGI \
		  README.SX \
		  README.large_files \
		  RELEASE_NOTES \
		  pbs.script \
		  cobalt.script

PACKING_SUBDIRS	= $(SUBDIRS)

all:
	$(MAKE) $(MFLAGS) -C src

tests:
	$(MAKE) $(MFLAGS) -C test

check testing:
	$(MAKE) $(MFLAGS) -C test testing

verbose_check verbose_testing:
	$(MAKE) $(MFLAGS) -C test verbose_testing

PTEST_SUBDIRS = test examples benchmarks
PTEST_DIRS = $(PTEST_SUBDIRS:%=ptest-%)
ptest: tests $(PTEST_DIRS)
$(PTEST_DIRS): 
	$(MAKE) $(MFLAGS) -C $(@:ptest-%=%) ptest
# make sure ptest runs one directory after another
ptest-examples: ptest-test
ptest-benchmarks: ptest-examples

PTESTS_DIRS = $(PTEST_SUBDIRS:%=ptests-%)
ptests: tests $(PTESTS_DIRS)
$(PTESTS_DIRS): 
	$(MAKE) $(MFLAGS) -C $(@:ptests-%=%) ptests
# make sure ptests runs one directory after another
ptests-examples: ptests-test
ptests-benchmarks: ptests-examples

INSTALLDIRS = $(INSTALL_SUBDIRS:%=install-%)
install: $(INSTALLDIRS)
$(INSTALLDIRS): 
	$(MAKE) $(MFLAGS) -C $(@:install-%=%) install

UNINSTALLDIRS = $(INSTALL_SUBDIRS:%=uninstall-%)
uninstall: $(UNINSTALLDIRS)
$(UNINSTALLDIRS): 
	$(MAKE) $(MFLAGS) -C $(@:uninstall-%=%) uninstall

################################################################################
# Distribution:

# The following rule checks to see that were on the right system.  If we're
# not, then the distribution mightn't contain the intended ncgen(1) (not
# to mention that dvips(1) is necessary for building the C++ User's Guide).
#
check_system:	FORCE
	@case "$(OVERRIDE)" in \
	'') case `uname -sr` in \
	    'SunOS 5'*) \
		exit 0;; \
	    *)  echo 1>&2 "Error: Not on a SunOS 5 system."; \
		echo 1>&2 "Set macro OVERRIDE to override."; \
		exit 1;; \
	    esac;; \
	*) exit 0;; \
	esac

# Make a compressed, tar(1) file of the source distribution in the current 
# directory.
#
tar.Z:		check_system FORCE
	$(MAKE) $(MFLAGS) $(PACKAGE_FILENAME).tar.Z

dist: ensure_manifest MANIFEST
	id=$(PACKAGE_FILENAME) \
	&& $(RM) -fr $$id \
	&& $(LN_S) $(srcdir) $$id \
	&& tar $(TARFLAGS) - `$(SED) "s|^|$$id/|" MANIFEST` | gzip  > $(PACKAGE_FILENAME).tar.gz \
	&& tar $(TARFLAGS) - `$(SED) "s|^|$$id/|" MANIFEST` | bzip2 > $(PACKAGE_FILENAME).tar.bz2 \
	&& $(RM) -f $$id MANIFEST

MANIFEST:	FORCE
	$(MAKE) $(MFLAGS) -s MANIFEST.echo >$@

# Make a compressed, tar(1) file of the source distribution in the
# appropriate FTP directory.
#
# NOTE: Making "ftp" will cause the "tar.Z" file to be made even if it
# already exists.  This is because the MANIFEST file upon which it
# depends must be remade every time.  This is not a waste of time,
# however, if the "tar.Z" target is made in private directories and the
# "ftp" target is made in the "/upc/$(PACKAGE_FILENAME)/build/" directory.
#
ftp:		check_system FORCE
	$(MAKE) $(MFLAGS) $(FTPDIR)/$(PACKAGE_FILENAME).tar.Z \
	test -r $(FTPDIR)/$(PACKAGE_FILENAME).tar.Z || exit 0; \
	    cd $(FTPDIR) || exit 1;

$(FTPDIR)/$(PACKAGE_FILENAME).tar.Z:	$(PACKAGE_FILENAME).tar.Z
	$(RM) -f $@
	cp $(PACKAGE_FILENAME).tar.Z $@ 
	chmod u+rw,g+rw,o=r $@

# Make a compressed, tar(1) file of the binary distribution in the 
# appropriate FTP directory.
#
binftp:		FORCE
	$(MAKE) $(MFLAGS) $(FTPBINDIR)/$(PACKAGE_FILENAME).tar.Z \

ftpbin:		binftp

$(FTPBINDIR)/$(PACKAGE_FILENAME).tar.Z:
	$(RM) -f $@
	id=$(PACKAGE_FILENAME) \
	&& $(RM) -f $$id \
	&& $(LN_S) $(prefix) $$id \
	&& tar $(TARFLAGS) - README $$id/bin $$id/include \
	    $$id/lib $$id/man | compress > $@ \
	&& $(RM) -f $$id
	chmod u+rw,g+rw,o=r $@
	test -r $(FTPBINDIR)/$(PACKAGE_FILENAME).tar.Z || exit 0; \
	    cd $(FTPBINDIR) || exit 1;


# rule for generating cscope information
cscope:
	find $(srcdir) -iname "*.[ch]" > $(srcdir)/cscope.files
	( cd $(srcdir); cscope -be -i $(srcdir)/cscope.files )

include $(srcdir)/rules.make


