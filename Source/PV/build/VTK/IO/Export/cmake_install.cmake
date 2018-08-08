# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkIOExport-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/IO/Export/CMakeFiles/vtkIOExport.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkIOExportHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export/vtkExporter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export/vtkIVExporter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export/vtkOBJExporter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export/vtkOOGLExporter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export/vtkPOVExporter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export/vtkRIBExporter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export/vtkRIBLight.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export/vtkRIBProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export/vtkVRMLExporter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export/vtkX3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export/vtkX3DExporter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export/vtkX3DExporterFIWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export/vtkX3DExporterWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export/vtkX3DExporterXMLWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Export/vtkGL2PSExporter.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/IO/Export/vtkIOExportModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

