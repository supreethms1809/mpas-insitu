# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkIOInfovis-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/IO/Infovis/CMakeFiles/vtkIOInfovis.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkIOInfovisHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkBiomTableReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkChacoGraphReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkDelimitedTextReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkDIMACSGraphReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkDIMACSGraphWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkFixedWidthTextReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkISIReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkMultiNewickTreeReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkNewickTreeReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkNewickTreeWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkPhyloXMLTreeReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkPhyloXMLTreeWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkRISReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkTulipReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkXGMLReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Infovis/vtkXMLTreeReader.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/IO/Infovis/vtkIOInfovisModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

