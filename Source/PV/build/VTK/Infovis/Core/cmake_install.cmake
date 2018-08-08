# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkInfovisCore-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Infovis/Core/CMakeFiles/vtkInfovisCore.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkInfovisCoreHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkAddMembershipArray.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkAdjacencyMatrixToEdgeTable.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkArrayNorm.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkArrayToTable.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkCollapseGraph.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkCollapseVerticesByArray.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkDataObjectToTable.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkDotProductSimilarity.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkExtractSelectedTree.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkEdgeCenters.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkExpandSelectedGraph.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkExtractSelectedGraph.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkGenerateIndexArray.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkGraphHierarchicalBundleEdges.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkGroupLeafVertices.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkMergeColumns.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkMergeGraphs.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkMergeTables.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkMutableGraphHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkNetworkHierarchy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkPipelineGraphSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkPruneTreeFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkRandomGraphSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkReduceTable.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkRemoveIsolatedVertices.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkSparseArrayToTable.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkStreamGraph.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkStringToCategory.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkStringToNumeric.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkTableToArray.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkTableToGraph.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkTableToSparseArray.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkTableToTreeFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkThresholdGraph.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkThresholdTable.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkTransferAttributes.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkTransposeMatrix.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkTreeFieldAggregator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkTreeDifferenceFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkTreeLevelsFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkVertexDegree.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkRemoveHiddenData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Infovis/Core/vtkKCoreDecomposition.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Infovis/Core/vtkInfovisCoreModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

