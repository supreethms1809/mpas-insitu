# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Exodus

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkIOExodus-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/IO/Exodus/CMakeFiles/vtkIOExodus.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkIOExodusHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Exodus/vtkCPExodusIINodalCoordinatesTemplate.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Exodus/vtkCPExodusIIResultsArrayTemplate.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Exodus/vtkCPExodusIIElementBlock.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Exodus/vtkCPExodusIIInSituReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Exodus/vtkCPExodusIINodalCoordinatesTemplate.txx"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Exodus/vtkCPExodusIINodalCoordinatesTemplate.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Exodus/vtkCPExodusIIResultsArrayTemplate.txx"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Exodus/vtkCPExodusIIResultsArrayTemplate.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Exodus/vtkExodusIICache.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Exodus/vtkExodusIIReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Exodus/vtkExodusIIReaderParser.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Exodus/vtkExodusIIReaderVariableCheck.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Exodus/vtkExodusIIWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/IO/Exodus/vtkModelMetadata.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/IO/Exodus/vtkIOExodusModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

