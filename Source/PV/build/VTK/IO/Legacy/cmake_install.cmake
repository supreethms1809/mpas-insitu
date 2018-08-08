# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkIOLegacy-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/IO/Legacy/CMakeFiles/vtkIOLegacy.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkIOLegacyHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkCompositeDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkCompositeDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkDataObjectReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkDataObjectWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkDataSetReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkDataSetWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkGenericDataObjectReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkGenericDataObjectWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkGraphReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkGraphWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkPixelExtentIO.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkPolyDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkPolyDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkRectilinearGridReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkRectilinearGridWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkSimplePointsReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkSimplePointsWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkStructuredGridReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkStructuredGridWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkStructuredPointsReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkStructuredPointsWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkTableReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkTableWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkTreeReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkTreeWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkUnstructuredGridReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Legacy/vtkUnstructuredGridWriter.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/IO/Legacy/vtkIOLegacyModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

