# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/libxml2/vtklibxml2

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "MinSizeRel")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtklibxml2-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3/vtklibxml2/libxml" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlversion.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/hash.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/schemasInternals.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlregexp.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/c14n.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/vtk_libxml2_mangle.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/threads.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlsave.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/nanoftp.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/HTMLtree.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlIO.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/valid.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlexports.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/SAX.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/globals.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlschemas.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/uri.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlautomata.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/nanohttp.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/tree.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/schematron.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/parserInternals.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/pattern.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlunicode.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/DOCBparser.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/dict.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/debugXML.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/parser.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/encoding.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/relaxng.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlerror.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlstring.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlmemory.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlmodule.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xpathInternals.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/SAX2.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xinclude.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlwriter.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/entities.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlschemastypes.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xpointer.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xpath.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/list.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/HTMLparser.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/chvalid.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlreader.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/catalog.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xlink.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

