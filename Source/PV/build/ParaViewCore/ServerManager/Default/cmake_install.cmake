# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkPVServerManagerDefault-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/ParaViewCore/ServerManager/Default//CMakeFiles/vtkPVServerManagerDefault.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkPVServerManagerDefaultHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkPVGeneralSettings.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkPVMultiServerDataSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkSMCameraConfigurationReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkSMCameraConfigurationWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkSMCSVExporterProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkSMDirectoryProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkSMExporterProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkSMInteractionUndoStackBuilder.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkSMMultiServerSourceProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkSMPropertyModificationUndoElement.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkSMProxyConfigurationReader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkSMProxyConfigurationWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkSMPSWriterProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkSMRenderViewExporterProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkSMTesting.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkSMViewExportHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Default/vtkSMGL2PSExporterProxy.h"
    "/home/mpas/Desktop/Source/PV/build/ParaViewCore/ServerManager/Default/vtkPVServerManagerDefaultModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

