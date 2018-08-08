# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkRenderingCore-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/Core/CMakeFiles/vtkRenderingCore.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkRenderingCoreHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkGPUInfoListArray.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkNoise200x200.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkPythagoreanQuadruples.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkRayCastStructures.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkRenderingCoreEnums.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkTDxMotionEventInfo.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkAbstractMapper3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkAbstractMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkAbstractPicker.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkAbstractVolumeMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkActor2DCollection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkActor2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkActorCollection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkAssembly.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkBackgroundColorMonitor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkCameraActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkCamera.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkCameraInterpolator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkCellCenterDepthSort.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkColorTransferFunction.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkCompositeDataDisplayAttributes.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkCompositePolyDataMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkCoordinate.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkCullerCollection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkCuller.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkDataSetMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkDiscretizableColorTransferFunction.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkDistanceToCamera.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkFollower.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkFrustumCoverageCuller.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkGenericRenderWindowInteractor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkGenericVertexAttributeMapping.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkGlyph3DMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkGPUInfo.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkGPUInfoList.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkGraphicsFactory.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkGraphMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkGraphToGlyphs.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkHardwareSelector.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkHierarchicalPolyDataMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkImageActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkImageMapper3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkImageMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkImageProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkImageSlice.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkImageSliceMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkInteractorEventRecorder.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkInteractorObserver.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkLabeledContourMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkLightActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkLightCollection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkLight.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkLightKit.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkLogLookupTable.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkLookupTableWithEnabling.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkMapArrayValues.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkMapper2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkMapperCollection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkObserverMediator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkPolyDataMapper2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkPolyDataMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkProp3DCollection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkProp3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkProp3DFollower.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkPropAssembly.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkPropCollection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkProp.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkProperty2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkRendererCollection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkRenderer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkRendererDelegate.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkRendererSource.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkRenderWindowCollection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkRenderWindow.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkRenderWindowInteractor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkSelectVisiblePoints.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkShaderDeviceAdapter2.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkTextActor.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkTextActor3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkTexture.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkTexturedActor2D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkTransformCoordinateSystems.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkTransformInterpolator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkTupleInterpolator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkViewDependentErrorMetric.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkViewport.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkVisibilitySort.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkVolumeCollection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkVolume.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkVolumeProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkWindowLevelLookupTable.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkWindowToImageFilter.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkAssemblyNode.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkAssemblyPath.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkAssemblyPaths.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkAreaPicker.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkPicker.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkAbstractPropPicker.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkPropPicker.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkPickingManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkLODProp3D.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkWorldPointPicker.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkCellPicker.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkPointPicker.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkRenderedAreaPicker.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkScenePicker.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkInteractorStyle.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkInteractorStyleSwitchBase.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkTDxInteractorStyle.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkTDxInteractorStyleCamera.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkTDxInteractorStyleSettings.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkStringToImage.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkTextMapper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkTextProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkTextPropertyCollection.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkTextRenderer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkAbstractInteractionDevice.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkAbstractRenderDevice.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkRenderWidget.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/Core/vtkPainterDeviceAdapter.h"
    "/home/mpas/Desktop/Source/PV/build/VTK/Rendering/Core/vtkRenderingCoreModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

