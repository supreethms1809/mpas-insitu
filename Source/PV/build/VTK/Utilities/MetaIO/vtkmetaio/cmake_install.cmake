# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkmetaio-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3/vtkmetaio" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaTube.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/localMetaConfiguration.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaImage.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaArrow.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaScene.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaEllipse.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaLine.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaContour.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaMesh.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaObject.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaBlob.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaVesselTube.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaGaussian.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaArray.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaImageUtils.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaSurface.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaITKUtils.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaTypes.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaImageTypes.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaUtils.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaCommand.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaForm.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaGroup.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaDTITube.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaEvent.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaFEMObject.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaTransform.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaLandmark.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaTubeGraph.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Utilities/MetaIO/vtkmetaio/metaOutput.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Utilities/MetaIO/vtkmetaio/metaIOConfig.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

