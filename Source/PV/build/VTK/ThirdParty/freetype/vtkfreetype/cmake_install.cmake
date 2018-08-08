# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkfreetype-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3/vtkfreetype/include" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/ft2build.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/vtk_freetype_mangle.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/vtk_ftmodule.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/freetype/vtkfreetype/include/vtkFreeTypeConfig.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3/vtkfreetype/include/freetype" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftsystem.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ttnameid.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftmac.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/tttables.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/t1tables.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftpfr.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftotval.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftsynth.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/fttypes.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftincrem.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftgxval.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftwinfnt.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftmm.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftsnames.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftrender.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftbzip2.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftbbox.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftlist.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/fttrigon.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftchapters.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftmoderr.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ttunpat.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftcache.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftsizes.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/freetype.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftimage.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftmodapi.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftadvanc.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftbdf.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftxf86.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftgzip.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftlcdfil.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftstroke.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftoutln.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftgasp.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftbitmap.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftcid.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftglyph.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftlzw.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/tttags.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/fterrdef.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/fterrors.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3/vtkfreetype/include/freetype/config" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftheader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftoption.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftmodule.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftstdlib.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftconfig.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

