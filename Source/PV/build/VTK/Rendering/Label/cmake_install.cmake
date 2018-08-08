# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Label

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkRenderingLabel-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/Label/CMakeFiles/vtkRenderingLabel.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkRenderingLabelHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Label/vtkLabeledDataMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Label/vtkLabeledTreeMapDataMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Label/vtkLabelHierarchyAlgorithm.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Label/vtkLabelHierarchyCompositeIterator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Label/vtkLabelHierarchy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Label/vtkLabelHierarchyIterator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Label/vtkLabelPlacementMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Label/vtkLabelPlacer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Label/vtkLabelRenderStrategy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Label/vtkLabelSizeCalculator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Label/vtkFreeTypeLabelRenderStrategy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Label/vtkDynamic2DLabelMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Label/vtkPointSetToLabelHierarchy.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/Label/vtkRenderingLabelModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

