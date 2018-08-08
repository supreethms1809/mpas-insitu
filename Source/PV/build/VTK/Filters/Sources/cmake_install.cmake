# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkFiltersSources-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Filters/Sources/CMakeFiles/vtkFiltersSources.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkFiltersSourcesHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkArcSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkArrowSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkButtonSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkConeSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkCubeSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkCylinderSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkDiskSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkEllipticalButtonSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkFrustumSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkGlyphSource2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkHyperOctreeFractalSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkHyperTreeGridSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkLineSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkOutlineCornerFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkOutlineCornerSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkOutlineSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkParametricFunctionSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkPlaneSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkPlatonicSolidSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkPointSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkPolyLineSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkProgrammableDataObjectSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkProgrammableSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkRectangularButtonSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkRegularPolygonSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkSelectionSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkSphereSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkSuperquadricSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkTessellatedBoxSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkTextSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkTexturedSphereSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkGraphToPolyData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Sources/vtkDiagonalMatrixSource.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Filters/Sources/vtkFiltersSourcesModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

