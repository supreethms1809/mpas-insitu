# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkRenderingAnnotation-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/Annotation/CMakeFiles/vtkRenderingAnnotation.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkRenderingAnnotationHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkScalarBarActorInternal.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkAnnotatedCubeActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkArcPlotter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkAxesActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkAxisActor2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkAxisActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkAxisFollower.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkBarChartActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkCaptionActor2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkConvexHull2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkCornerAnnotation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkCubeAxesActor2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkCubeAxesActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkGraphAnnotationLayersFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkLeaderActor2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkLegendBoxActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkLegendScaleActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkPieChartActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkPolarAxesActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkProp3DAxisFollower.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkScalarBarActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkSpiderPlotActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Annotation/vtkXYPlotActor.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/Annotation/vtkRenderingAnnotationModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

