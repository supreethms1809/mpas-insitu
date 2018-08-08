# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkPVServerImplementationCore-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/ParaViewCore/ServerImplementation/Core//CMakeFiles/vtkPVServerImplementationCore.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkPVServerImplementationCoreHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSMMessageMinimal.h"
    "/home/mpas/Desktop/Source/PV/build/ParaViewCore/ServerImplementation/Core/vtkPVMessage.pb.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkPVCatalystSessionCore.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkPVProxyDefinitionIterator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkPVSessionBase.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkPVSessionCore.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkPVSessionCoreInterpreterHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkPVSessionServer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIArraySelectionProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSICollaborationManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSICompoundSourceProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIDataArrayProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIDirectoryProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIDoubleMapProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIDoubleVectorProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIMetaReaderProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIIdTypeVectorProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIInputProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIIntVectorProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIObject.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIProxyDefinitionManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIProxyProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSISILProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSISourceProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIStringVectorProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSITimeLabelProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSITimeRangeProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSITimeStepsProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIVectorProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSIWriterProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerImplementation/Core/vtkSMMessage.h"
    "/home/mpas/Desktop/Source/PV/build/ParaViewCore/ServerImplementation/Core/vtkPVServerImplementationCoreModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

