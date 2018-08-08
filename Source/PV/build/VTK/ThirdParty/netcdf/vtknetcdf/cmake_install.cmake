# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/netcdf/vtknetcdf

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkNetCDF-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkNetCDF_cxx-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3/vtknetcdf/include" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/netcdf/vtknetcdf/include/netcdf.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/netcdf/vtknetcdf/include/vtk_netcdf_mangle.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/netcdf/vtknetcdf/cxx/netcdf.hh"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/netcdf/vtknetcdf/cxx/netcdfcpp.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/netcdf/vtknetcdf/cxx/ncvalues.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/netcdf/vtknetcdf/vtk_netcdf_config.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/netcdf/vtknetcdf/liblib/cmake_install.cmake")
  INCLUDE("/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/netcdf/vtknetcdf/libdispatch/cmake_install.cmake")
  INCLUDE("/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/netcdf/vtknetcdf/libsrc/cmake_install.cmake")
  INCLUDE("/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/netcdf/vtknetcdf/libsrc4/cmake_install.cmake")
  INCLUDE("/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/netcdf/vtknetcdf/cxx/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

