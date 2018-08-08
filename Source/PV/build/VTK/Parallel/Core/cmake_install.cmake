# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Parallel/Core

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkParallelCore-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Parallel/Core/CMakeFiles/vtkParallelCore.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkParallelCoreHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Parallel/Core/vtkCommunicator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Parallel/Core/vtkDummyCommunicator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Parallel/Core/vtkDummyController.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Parallel/Core/vtkMultiProcessController.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Parallel/Core/vtkMultiProcessStream.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Parallel/Core/vtkProcess.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Parallel/Core/vtkProcessGroup.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Parallel/Core/vtkSocketCommunicator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Parallel/Core/vtkSocketController.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Parallel/Core/vtkSubCommunicator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Parallel/Core/vtkSubGroup.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Parallel/Core/vtkFieldDataSerializer.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Parallel/Core/vtkSocketCommunicatorHash.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Parallel/Core/vtkParallelCoreModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

