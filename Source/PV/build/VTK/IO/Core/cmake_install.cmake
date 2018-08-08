# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkIOCore-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/IO/Core/CMakeFiles/vtkIOCore.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkIOCoreHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkAbstractParticleWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkArrayReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkArrayWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkASCIITextCodec.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkBase64InputStream.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkBase64OutputStream.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkBase64Utilities.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkDataCompressor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkDelimitedTextWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkGlobFileNames.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkInputStream.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkJavaScriptDataWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkOutputStream.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkSortFileNames.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkTextCodec.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkTextCodecFactory.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkUTF16TextCodec.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkUTF8TextCodec.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkAbstractPolyDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkZLibDataCompressor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkArrayDataReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Core/vtkArrayDataWriter.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/IO/Core/vtkIOCoreModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

