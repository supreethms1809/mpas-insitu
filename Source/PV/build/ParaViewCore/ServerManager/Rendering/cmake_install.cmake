# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkPVServerManagerRendering-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/ParaViewCore/ServerManager/Rendering//CMakeFiles/vtkPVServerManagerRendering.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkPVServerManagerRenderingHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkPVComparativeAnimationCue.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkPVComparativeView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMBagChartSeriesListDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMBoxRepresentationProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMCameraLink.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMCameraProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMChartRepresentationProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMChartSeriesListDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMChartSeriesSelectionDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMChartUseIndexForAxisDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMComparativeAnimationCueProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMComparativeAnimationCueUndoElement.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMComparativeViewProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMContextViewProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMDataDeliveryManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMFunctionalBagChartSeriesSelectionDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMImplicitPlaneRepresentationProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMMultiSliceViewProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMNewWidgetRepresentationProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMOrthographicSliceViewProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMPlotMatrixViewProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMPVRepresentationProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMRenderViewProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMRepresentationProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMRepresentationTypeDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMRepresentedArrayListDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMScalarBarWidgetRepresentationProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMSelectionHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMSpreadSheetRepresentationProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMTextWidgetRepresentationProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMTransferFunctionManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMTransferFunctionProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMUtilities.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMViewLayoutProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMViewProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMViewProxyInteractorHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMWidgetRepresentationProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMPythonViewProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Rendering/vtkSMParaViewPipelineControllerWithRendering.h"
    "/home/mpas/Desktop/Source/PV/build/ParaViewCore/ServerManager/Rendering/vtkPVServerManagerRenderingObjectFactory.h"
    "/home/mpas/Desktop/Source/PV/build/ParaViewCore/ServerManager/Rendering/vtkPVServerManagerRenderingModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

