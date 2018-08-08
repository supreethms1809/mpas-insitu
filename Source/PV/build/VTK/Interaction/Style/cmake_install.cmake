# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkInteractionStyle-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Interaction/Style/CMakeFiles/vtkInteractionStyle.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkInteractionStyleHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleDrawPolygon.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleFlight.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleImage.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleJoystickActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleJoystickCamera.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleMultiTouchCamera.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleRubberBand2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleRubberBand3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleRubberBandPick.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleRubberBandZoom.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleTerrain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleTrackballActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleTrackballCamera.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleTrackball.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleUnicam.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleUser.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkInteractorStyleSwitch.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Interaction/Style/vtkParallelCoordinatesInteractorStyle.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Interaction/Style/vtkInteractionStyleObjectFactory.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Interaction/Style/vtkInteractionStyleModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

