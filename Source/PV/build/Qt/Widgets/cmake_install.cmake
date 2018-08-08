# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkpqWidgets-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/Qt/Widgets//CMakeFiles/pqWidgets.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/ctkRangeSlider.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/ctkDoubleRangeSlider.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqAnimationKeyFrame.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqAnimationModel.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqAnimationTrack.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqAnimationWidget.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqChartPrintSave.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqCheckableHeaderView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqCheckBoxPixMaps.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqCollapsedGroup.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqColorButtonEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqColorDialogEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqColorDialogEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqColorButtonEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqColorChooserButton.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqConnect.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqConsoleWidget.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqConsoleWidgetEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqConsoleWidgetEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqDelimitedTextParser.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqDoubleRangeDialog.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqDoubleRangeWidget.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqDoubleSpinBox.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqExpandableTableView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqExpanderButton.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqFlatTreeView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqHelpWindow.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqHighlightablePushButton.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqLineEdit.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqLineEditEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqListWidgetCheckHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqListWidgetItemObject.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqProgressBar.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqProgressWidget.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqQuickLaunchDialog.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqSectionVisibilityContextMenu.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqSetData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqSetName.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqSignalAdaptors.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqSpinBox.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqTableView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqTextEdit.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqTreeView.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqTreeViewSelectionHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqTreeWidgetCheckHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqTreeWidget.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqTreeWidgetItem.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqTreeWidgetItemObject.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqTreeWidgetSelectionHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/Qt/Widgets/pqWaitCursor.h"
    "/home/mpas/Desktop/Source/PV/build/Qt/Widgets/ui_pqExpanderButton.h"
    "/home/mpas/Desktop/Source/PV/build/Qt/Widgets/ui_pqHelpWindow.h"
    "/home/mpas/Desktop/Source/PV/build/Qt/Widgets/ui_pqQuickLaunchDialog.h"
    "/home/mpas/Desktop/Source/PV/build/Qt/Widgets/pqWidgetsModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

