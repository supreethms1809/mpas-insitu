# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkFiltersParallel-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Filters/Parallel/CMakeFiles/vtkFiltersParallel.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkFiltersParallelHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkCollectGraph.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkCollectPolyData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkCollectTable.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkCutMaterial.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkDuplicatePolyData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkExtractCTHPart.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkExtractPolyDataPiece.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkExtractUnstructuredGridPiece.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkExtractUserDefinedPiece.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPCellDataToPointData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPExtractArraysOverTime.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPKdTree.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPLinearExtrusionFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPMaskPoints.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPOutlineCornerFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPOutlineFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPOutlineFilterInternals.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPPolyDataNormals.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPProbeFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPProjectSphereFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPReflectionFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPResampleFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPSphereSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPYoungsMaterialInterface.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPassThroughFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPieceRequestFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPieceScalars.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkPipelineSize.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkProcessIdScalars.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkRectilinearGridOutlineFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkTransmitPolyDataPiece.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkTransmitStructuredDataPiece.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkTransmitRectilinearGridPiece.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkTransmitStructuredGridPiece.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Parallel/vtkTransmitUnstructuredGridPiece.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Filters/Parallel/vtkFiltersParallelModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

