# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkImagingCore-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Imaging/Core/CMakeFiles/vtkImagingCore.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkImagingCoreHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageStencilIterator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkExtractVOI.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageAppendComponents.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageBlend.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageCacheFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageCast.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageChangeInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageClip.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageConstantPad.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageDataStreamer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageDecomposeFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageDifference.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageExtractComponents.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageFlip.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageIterateFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageMagnify.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageMapToColors.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageMask.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageMirrorPad.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImagePadFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImagePermute.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageResample.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageReslice.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageResliceToColors.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageShiftScale.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageShrink3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageThreshold.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageTranslateExtent.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageWrapPad.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkRTAnalyticSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageResize.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageBSplineCoefficients.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageStencilData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageStencilAlgorithm.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkAbstractImageInterpolator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageBSplineInternals.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageBSplineInterpolator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageSincInterpolator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageInterpolator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Imaging/Core/vtkImageStencilSource.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Imaging/Core/vtkImagingCoreModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

