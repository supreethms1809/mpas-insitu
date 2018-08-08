# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkCommonComputationalGeometry-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Common/ComputationalGeometry/CMakeFiles/vtkCommonComputationalGeometry.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkCommonComputationalGeometryHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkCardinalSpline.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkKochanekSpline.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricBoy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricConicSpiral.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricCrossCap.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricDini.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricEllipsoid.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricEnneper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricFigure8Klein.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricFunction.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricKlein.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricMobius.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricRandomHills.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricRoman.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricSpline.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricSuperEllipsoid.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricSuperToroid.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Common/ComputationalGeometry/vtkParametricTorus.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Common/ComputationalGeometry/vtkCommonComputationalGeometryModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

