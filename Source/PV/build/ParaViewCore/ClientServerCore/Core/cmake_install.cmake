# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkPVClientServerCoreCore-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/ParaViewCore/ClientServerCore/Core//CMakeFiles/vtkPVClientServerCoreCore.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkPVClientServerCoreCoreHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE RENAME "vtkPVClientServerCoreCore_HINTS" FILES "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/hints")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkCompleteArrays.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkExtractsDeliveryHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkMPIMToNSocketConnection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkMPIMToNSocketConnectionPortInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkNetworkAccessManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPConvertSelection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkProcessModuleAutoMPI.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkProcessModule.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVAlgorithmPortsInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVArrayInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVClassNameInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVCompositeDataInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVCompositeDataInformationIterator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVDataInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVDataInformationHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVDataSetAttributesInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVDataSizeInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVDisableStackTraceSignalHandler.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVEnableStackTraceSignalHandler.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVExtractSelection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVExtractArraysOverTime.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVGenericAttributeInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVMemoryUseInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVMultiClientsInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVOptions.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVOptionsXMLParser.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVPlugin.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVPluginLoader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVPluginsInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVPluginTracker.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVProgressHandler.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVPythonInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVPythonModule.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVPythonOptions.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVPythonPluginInterface.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVServerInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVServerManagerPluginInterface.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVServerOptions.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVSession.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVSILInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVSystemConfigInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVSystemInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVTemporalDataInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPVTimerInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkSession.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkSessionIterator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkTCPNetworkAccessManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPythonExtractSelection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPythonProgrammableFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ClientServerCore/Core/vtkPythonAnnotationFilter.h"
    "/home/mpas/Desktop/Source/PV/build/ParaViewCore/ClientServerCore/Core/vtkPVClientServerCoreCoreModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

