# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkIOXML-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/IO/XML/CMakeFiles/vtkIOXML.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkIOXMLHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkRTXMLPolyDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLCompositeDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLCompositeDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLDataSetWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLFileReadTester.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLGenericDataObjectReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLHierarchicalBoxDataFileConverter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLHierarchicalBoxDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLHierarchicalBoxDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLHierarchicalDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLHyperOctreeReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLHyperOctreeWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLImageDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLImageDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLMultiBlockDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLMultiBlockDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLMultiGroupDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLPDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLPImageDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLPolyDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLPolyDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLPPolyDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLPRectilinearGridReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLPStructuredDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLPStructuredGridReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLPUnstructuredDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLPUnstructuredGridReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLRectilinearGridReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLRectilinearGridWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLStructuredDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLStructuredDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLStructuredGridReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLStructuredGridWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLUniformGridAMRReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLUniformGridAMRWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLUnstructuredDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLUnstructuredDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLUnstructuredGridReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLUnstructuredGridWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLWriterC.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/XML/vtkXMLWriter.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/IO/XML/vtkIOXMLModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

