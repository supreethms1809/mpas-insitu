# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkRenderingVolume-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/Volume/CMakeFiles/vtkRenderingVolume.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkRenderingVolumeHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkDirectionEncoder.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkEncodedGradientEstimator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkEncodedGradientShader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkFiniteDifferenceGradientEstimator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkFixedPointRayCastImage.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeGOHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeGOShadeHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeShadeHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkFixedPointVolumeRayCastHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkFixedPointVolumeRayCastMIPHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkFixedPointVolumeRayCastMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkGPUVolumeRayCastMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkProjectedTetrahedraMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkRayCastImageDisplayHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkRecursiveSphereDirectionEncoder.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkSphericalDirectionEncoder.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkUnstructuredGridBunykRayCastFunction.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkUnstructuredGridHomogeneousRayIntegrator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkUnstructuredGridLinearRayIntegrator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkUnstructuredGridPartialPreIntegration.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkUnstructuredGridPreIntegration.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkUnstructuredGridVolumeMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkUnstructuredGridVolumeRayCastFunction.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkUnstructuredGridVolumeRayCastIterator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkUnstructuredGridVolumeRayCastMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkUnstructuredGridVolumeRayIntegrator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkUnstructuredGridVolumeZSweepMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkVolumeMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkVolumeOutlineSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkVolumePicker.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkVolumeRayCastCompositeFunction.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkVolumeRayCastFunction.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkVolumeRayCastIsosurfaceFunction.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkVolumeRayCastMIPFunction.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkVolumeRayCastMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkVolumeRayCastSpaceLeapingImageFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkHAVSVolumeMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkProjectedAAHexahedraMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkVolumeTextureMapper2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkVolumeTextureMapper3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Volume/vtkVolumeTextureMapper.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/Volume/vtkRenderingVolumeModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

