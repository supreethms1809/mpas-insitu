# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/IO/ParallelXML

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkIOParallelXML-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/IO/ParallelXML/CMakeFiles/vtkIOParallelXML.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkIOParallelXMLHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/ParallelXML/vtkXMLPDataSetWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/ParallelXML/vtkXMLPDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/ParallelXML/vtkXMLPImageDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/ParallelXML/vtkXMLPPolyDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/ParallelXML/vtkXMLPRectilinearGridWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/ParallelXML/vtkXMLPStructuredDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/ParallelXML/vtkXMLPStructuredGridWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/ParallelXML/vtkXMLPUnstructuredDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/ParallelXML/vtkXMLPUnstructuredGridWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/ParallelXML/vtkXMLPHierarchicalBoxDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/ParallelXML/vtkXMLPMultiBlockDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/ParallelXML/vtkXMLPUniformGridAMRWriter.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/IO/ParallelXML/vtkIOParallelXMLModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

