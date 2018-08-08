# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libQtTesting.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pq3DViewEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pq3DViewEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqAbstractActivateEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqAbstractMiscellaneousEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqAbstractDoubleEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqAbstractBooleanEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqAbstractButtonEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqAbstractIntEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqAbstractItemViewEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqAbstractItemViewEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqAbstractSliderEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqAbstractStringEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqBasicWidgetEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqBasicWidgetEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqComboBoxEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqCommentEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqDoubleSpinBoxEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqEventComment.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqEventDispatcher.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqEventObserver.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqEventSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqLineEditEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqMenuEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqNativeFileDialogEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqNativeFileDialogEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqObjectNaming.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqPlayBackEventsDialog.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqEventRecorder.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqRecordEventsDialog.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqSpinBoxEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqStdoutEventObserver.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqTabBarEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqTabBarEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqTestUtility.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqThreadedEventSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqTimer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqTreeViewEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqTreeViewEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqWidgetEventPlayer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/pqWidgetEventTranslator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting/QtTestingExport.h"
    "/home/mpas/Desktop/Source/PV/build/ThirdParty/QtTesting/vtkqttesting/QtTestingConfigure.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qttesting" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/ThirdParty/QtTesting/vtkqttesting/CMakeFiles/QtTestingConfig.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qttesting/ParaViewTargets.cmake")
    FILE(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qttesting/ParaViewTargets.cmake"
         "/home/mpas/Desktop/Source/PV/build/ThirdParty/QtTesting/vtkqttesting/CMakeFiles/Export/lib/cmake/qttesting/ParaViewTargets.cmake")
    IF(EXPORT_FILE_CHANGED)
      FILE(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qttesting/ParaViewTargets-*.cmake")
      IF(OLD_CONFIG_FILES)
        MESSAGE(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qttesting/ParaViewTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        FILE(REMOVE ${OLD_CONFIG_FILES})
      ENDIF(OLD_CONFIG_FILES)
    ENDIF(EXPORT_FILE_CHANGED)
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qttesting" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/ThirdParty/QtTesting/vtkqttesting/CMakeFiles/Export/lib/cmake/qttesting/ParaViewTargets.cmake")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qttesting" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/ThirdParty/QtTesting/vtkqttesting/CMakeFiles/Export/lib/cmake/qttesting/ParaViewTargets-minsizerel.cmake")
  ENDIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/mpas/Desktop/Source/PV/build/ThirdParty/QtTesting/vtkqttesting/Examples/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

