# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/Qt/Core

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkpqCore-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/Qt/Core//CMakeFiles/pqCore.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pq3DWidgetFactory.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqAnimationCue.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqAnimationScene.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqAnimationSceneImageWriter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqApplicationCore.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqAutoStartInterface.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqBoxChartView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqCheckBoxDelegate.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqCollaborationEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqCollaborationManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqComparativeContextView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqComparativeRenderView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqComparativeXYBarChartView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqComparativeXYChartView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqContextView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqCoreInit.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqCoreTestUtility.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqCoreUtilities.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqDataRepresentation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqDebug.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqDisplayPolicy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqFileDialog.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqFileDialogEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqFileDialogEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqFileDialogFavoriteModel.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqFileDialogFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqFileDialogModel.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqFileDialogRecentDirsModel.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqFlatTreeViewEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqFlatTreeViewEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqFormBuilder.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqGraphLayoutStrategyInterface.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqImageUtil.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqInterfaceTracker.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqLinksModel.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqLinkViewWidget.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqMultiSliceAxisWidget.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqMultiSliceView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqNonEditableStyledItemDelegate.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqObjectBuilder.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqOptions.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqOutputPort.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqOutputWindowAdapter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqOutputWindow.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqOutputWindowModel.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqParallelCoordinatesChartView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqPipelineFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqPipelineRepresentation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqPipelineSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqPlotMatrixView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqPluginManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqProgressManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqPropertyLinks.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqPropertyLinksConnection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqPropertyManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqProxyModifiedStateUndoElement.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqProxySelection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqQVTKWidget.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqQVTKWidgetEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqQVTKWidgetEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqRecentlyUsedResourcesList.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqRenderViewBase.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqRenderView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqRepresentation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqScalarBarRepresentation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqScalarsToColors.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqServer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqServerConfiguration.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqServerConfigurationCollection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqServerManagerModel.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqServerManagerModelInterface.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqServerManagerModelItem.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqServerManagerObserver.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqServerResource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqSettings.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqSMAdaptor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqSMProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqSpreadSheetView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqSpreadSheetViewModel.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqSpreadSheetViewSelectionModel.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqSpreadSheetViewWidget.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqStandardServerManagerModelInterface.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqTimeKeeper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqTreeLayoutStrategyInterface.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqUndoStack.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqXMLEventObserver.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqXMLEventSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqXMLUtil.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqXYBagChartView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqXYBarChartView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqXYFunctionalBagChartView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqXYHistogramChartView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqXYChartView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/vtkPVGUIPluginInterface.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Core/pqPythonView.h"
    "/home/mpas/Desktop/Source/PV/build/Qt/Core/ui_pqOutputWindow.h"
    "/home/mpas/Desktop/Source/PV/build/Qt/Core/ui_pqFileDialog.h"
    "/home/mpas/Desktop/Source/PV/build/Qt/Core/pqCoreModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

