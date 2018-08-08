# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkIOGeometry-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/IO/Geometry/CMakeFiles/vtkIOGeometry.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkIOGeometryHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkAVSucdReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkBYUReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkBYUWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkChacoReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkFacetWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkFLUENTReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkGAMBITReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkGaussianCubeReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkIVWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkMCubesReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkMCubesWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkMFIXReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkMoleculeReaderBase.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkMultiBlockPLOT3DReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkMultiBlockPLOT3DReaderInternals.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkOBJReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkOpenFOAMReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkParticleReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkPDBReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkPlot3DMetaReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkProStarReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkSTLReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkSTLWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkTecplotReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkUGFacetReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkWindBladeReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Geometry/vtkXYZMolReader.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/IO/Geometry/vtkIOGeometryModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

