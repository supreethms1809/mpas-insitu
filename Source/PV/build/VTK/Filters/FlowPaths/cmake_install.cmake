# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkFiltersFlowPaths-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Filters/FlowPaths/CMakeFiles/vtkFiltersFlowPaths.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkFiltersFlowPathsHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkAbstractInterpolatedVelocityField.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkAMRInterpolatedVelocityField.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkCompositeInterpolatedVelocityField.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkDashedStreamLine.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkInterpolatedVelocityField.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkStreamer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkStreamLine.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkStreamPoints.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkStreamTracer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkModifiedBSPTree.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkCellLocatorInterpolatedVelocityField.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkTemporalStreamTracer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkParticleTracerBase.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkParticleTracer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkStreaklineFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkParticlePathFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkTemporalInterpolatedVelocityField.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/FlowPaths/vtkCachingInterpolatedVelocityField.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Filters/FlowPaths/vtkFiltersFlowPathsModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

