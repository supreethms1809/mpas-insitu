# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkFiltersStatistics-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Filters/Statistics/CMakeFiles/vtkFiltersStatistics.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkFiltersStatisticsHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkAutoCorrelativeStatistics.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkBivariateLinearTableThreshold.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkComputeQuartiles.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkContingencyStatistics.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkCorrelativeStatistics.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkDescriptiveStatistics.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkHighestDensityRegionsStatistics.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkExtractFunctionalBagPlot.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkKMeansDistanceFunctorCalculator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkKMeansDistanceFunctor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkKMeansStatistics.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkMultiCorrelativeStatistics.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkOrderStatistics.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkPCAStatistics.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkStatisticsAlgorithm.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkStrahlerMetric.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Filters/Statistics/vtkStreamingStatistics.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Filters/Statistics/vtkFiltersStatisticsModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

