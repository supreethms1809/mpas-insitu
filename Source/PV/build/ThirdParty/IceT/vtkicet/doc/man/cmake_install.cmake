# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageGetColorf.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetSetDepthFormat.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageIsNull.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetDestroyMPICommunicator.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetSetColorFormat.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetGetError.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetPhysicalRenderSize.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageGetDepthcf.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetGetContext.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageGetDepth.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageGetNumPixels.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetDrawFrame.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetBoundingBoxd.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetIsEnabled.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageGetDepthFormat.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageCopyColorub.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageCopyDepth.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageCopyColor.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetGLInitialize.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageCopyColorf.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetGetPointerv.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetSingleImageStrategy.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageGetColorub.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetSetContext.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageNull.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageGetColorui.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetDrawCallback.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageGetWidth.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageGetColorcui.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageCopyDepthf.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetGetSingleImageStrategyName.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetGLDrawCallback.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetCopyState.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetDataReplicationGroupColor.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetGetBooleanv.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetCreateMPICommunicator.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetBoundingBox.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetGLIsInitialized.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetWallTime.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetDisable.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageGetDepthf.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetGetStrategyName.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageGetColorcub.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetCreateContext.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageGetColor.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetGLSetReadBuffer.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetGLDrawFrame.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetCompositeMode.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetAddTile.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetDataReplicationGroup.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetBoundingVertices.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetGetFloatv.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetDestroyContext.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageGetHeight.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageGetColorFormat.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetEnable.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetDiagnostics.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetStrategy.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetResetTiles.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetGet.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetBoundingBoxf.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetCompositeOrder.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetImageGetColorcf.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetGetDoublev.3"
    "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/IceT/vtkicet/doc/man/man3/icetGetIntegerv.3"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

