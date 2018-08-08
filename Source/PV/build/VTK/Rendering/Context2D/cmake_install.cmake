# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkRenderingContext2D-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/Context2D/CMakeFiles/vtkRenderingContext2D.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkRenderingContext2DHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkAbstractContextBufferId.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkAbstractContextItem.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkBlockItem.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkBrush.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkContext2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkContext3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkContextActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkContextClip.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkContextDevice2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkContextDevice3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkContextItem.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkContextKeyEvent.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkContextMapper2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkContextMouseEvent.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkContextScene.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkContextTransform.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkImageItem.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkMarkerUtilities.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkPen.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Context2D/vtkTooltipItem.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/Context2D/vtkRenderingContext2DModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

