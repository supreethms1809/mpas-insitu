# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Xdmf2

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkIOXdmf2-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/IO/Xdmf2/CMakeFiles/vtkIOXdmf2.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkIOXdmf2Hierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Xdmf2/vtkSILBuilder.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Xdmf2/vtkXdmfDataArray.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Xdmf2/vtkXdmfHeavyData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Xdmf2/vtkXdmfReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Xdmf2/vtkXdmfReaderInternal.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Xdmf2/vtkXdmfWriter.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/IO/Xdmf2/vtkIOXdmf2Module.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

