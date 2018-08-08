# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/LIC

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkRenderingLIC-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/CMakeFiles/vtkRenderingLIC.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkRenderingLICHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/LIC/vtkImageDataLIC2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/LIC/vtkLineIntegralConvolution2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/LIC/vtkPixelTransfer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/LIC/vtkStructuredGridLIC2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/LIC/vtkSurfaceLICComposite.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/LIC/vtkSurfaceLICDefaultPainter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/LIC/vtkSurfaceLICPainter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/LIC/vtkTextureIO.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/vtkLineIntegralConvolution2D_VT.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/vtkLineIntegralConvolution2D_LIC0.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/vtkLineIntegralConvolution2D_LICI.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/vtkLineIntegralConvolution2D_LICN.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/vtkLineIntegralConvolution2D_EE.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/vtkLineIntegralConvolution2D_CE.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/vtkLineIntegralConvolution2D_AAH.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/vtkLineIntegralConvolution2D_AAV.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/vtkStructuredGridLIC2D_fs.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/vtkSurfaceLICPainter_GeomVs.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/vtkSurfaceLICPainter_GeomFs.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/vtkSurfaceLICPainter_SC.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/vtkSurfaceLICPainter_CE.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/vtkSurfaceLICPainter_DCpy.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/LIC/vtkRenderingLICModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

