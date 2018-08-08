# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkFiltersCore-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Filters/Core/CMakeFiles/vtkFiltersCore.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkFiltersCoreHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkAppendFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkAppendPolyData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkAppendSelection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkArrayCalculator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkAssignAttribute.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkAttributeDataToFieldDataFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkCellDataToPointData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkCleanPolyData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkClipPolyData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkCompositeDataProbeFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkConnectivityFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkContourFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkContourGrid.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkContourHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkDataObjectGenerator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkDataObjectToDataSetFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkDataSetEdgeSubdivisionCriterion.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkDataSetToDataObjectFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkDecimatePolylineFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkDecimatePro.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkDelaunay2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkDelaunay3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkElevationFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkExecutionTimer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkFeatureEdges.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkFieldDataToAttributeDataFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkGlyph2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkGlyph3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkHedgeHog.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkHull.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkIdFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkMarchingCubes.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkMarchingSquares.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkMaskFields.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkMaskPoints.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkMaskPolyData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkMassProperties.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkMergeDataObjectFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkMergeFields.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkMergeFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkPointDataToCellData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkPolyDataConnectivityFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkPolyDataNormals.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkProbeFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkQuadricClustering.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkQuadricDecimation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkRearrangeFields.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkReverseSense.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkSimpleElevationFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkSmoothPolyDataFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkStripper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkStructuredGridOutlineFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkSynchronizedTemplates2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkSynchronizedTemplates3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkSynchronizedTemplatesCutter3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkTensorGlyph.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkThreshold.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkThresholdPoints.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkTransposeTable.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkTriangleFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkTubeFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkVectorDot.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkVectorNorm.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkWindowedSincPolyDataFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkCutter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkCompositeCutter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkGridSynchronizedTemplates3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkRectilinearSynchronizedTemplates.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkEdgeSubdivisionCriterion.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkStreamingTessellator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkImplicitPolyDataDistance.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkStreamerBase.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkCenterOfMass.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkGhostArray.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkImageAppend.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkStructuredGridAppend.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Core/vtkAppendCompositeDataLeaves.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Filters/Core/vtkFiltersCoreModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

