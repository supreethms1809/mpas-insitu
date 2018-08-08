# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkIOImage-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/IO/Image/CMakeFiles/vtkIOImage.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkIOImageHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkBMPReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkBMPWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkDEMReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkDICOMImageReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkGESignaReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkImageExport.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkImageImport.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkImageImportExecutive.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkImageReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkImageReader2.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkImageReader2Collection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkImageReader2Factory.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkImageWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkJPEGReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkJPEGWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkJSONImageWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkMedicalImageProperties.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkMedicalImageReader2.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkMetaImageReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkMetaImageWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkNIFTIImageHeader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkNIFTIImageReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkNIFTIImageWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkNrrdReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkPNGReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkPNGWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkPNMReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkPNMWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkPostScriptWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkSLCReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkTIFFReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkTIFFWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkVolume16Reader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Image/vtkVolumeReader.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/IO/Image/vtkIOImageModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

