# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/tiff/vtktiff

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/vtkmkg3states-pv4.3" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/vtkmkg3states-pv4.3")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/vtkmkg3states-pv4.3"
         RPATH "")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/mpas/Desktop/Source/PV/build/bin/vtkmkg3states-pv4.3")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/vtkmkg3states-pv4.3" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/vtkmkg3states-pv4.3")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/vtkmkg3states-pv4.3")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtktiff-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3/vtktiff" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/tiff/vtktiff/tiffDllConfig.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/tiff/vtktiff/tiffvers.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/tiff/vtktiff/vtk_tiff_mangle.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/tiff/vtktiff/tiff.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/tiff/vtktiff/tiffio.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/tiff/vtktiff/tconf.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/tiff/vtktiff/tiffconf.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
