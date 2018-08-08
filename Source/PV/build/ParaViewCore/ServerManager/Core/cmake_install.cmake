# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkPVServerManagerCore-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/ParaViewCore/ServerManager/Core//CMakeFiles/vtkPVServerManagerCore.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-4.3/Modules" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/lib/cmake/paraview-4.3/Modules/vtkPVServerManagerCoreHierarchy.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkLiveInsituLink.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMArrayListDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMArrayRangeDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMArraySelectionDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMBooleanDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMBoundsDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMCollaborationManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMCompositeTreeDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMCompoundProxyDefinitionLoader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMCompoundSourceProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMCompoundSourceProxyDefinitionBuilder.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMCoreUtilities.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMDataSourceProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMDataTypeDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMDeserializer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMDeserializerProtobuf.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMDeserializerXMLCache.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMDeserializerXML.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMDimensionsDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMDocumentation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMDomainIterator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMDoubleMapProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMDoubleMapPropertyIterator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMDoubleRangeDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMDoubleVectorProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMEnumerationDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMExtentDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMFieldDataDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMFileListDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMFixedTypeDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMGlobalPropertiesLinkUndoElement.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMGlobalPropertiesProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMIdTypeVectorProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMInputArrayDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMInputProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMInsituStateLoader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMIntRangeDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMIntVectorProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMLink.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMLiveInsituLinkProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMMapProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMNamedPropertyIterator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMNumberOfComponentsDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMObject.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMOrderedPropertyIterator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMOutputPort.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMParaViewPipelineController.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMPWriterProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMPipelineState.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMPluginLoaderProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMPluginManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMPropertyGroup.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMPropertyHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMPropertyIterator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMPropertyLink.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMProxyDefinitionManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMProxyGroupDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMProxyIterator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMProxyLink.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMProxyListDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMProxyLocator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMProxyManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMProxyProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMProxySelectionModel.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMRangeDomainTemplate.txx"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMRangeDomainTemplate.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMReaderFactory.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMRemoteObject.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMRemoteObjectUpdateUndoElement.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMServerStateLocator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMSessionClient.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMSession.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMSessionObject.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMSessionProxyManager.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMSettings.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMSettingsProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMSILDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMSILModel.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMSourceProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMStateLoader.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMStateLocator.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMStateVersionController.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMStringListDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMStringVectorProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMUncheckedPropertyHelper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMUndoElement.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMUndoStackBuilder.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMUndoStack.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMNullProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMTimeKeeper.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMTimeKeeperProxy.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMTrace.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMVectorProperty.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMWriterFactory.h"
    "/home/mpas/Desktop/Source/PV/ParaView/ParaViewCore/ServerManager/Core/vtkSMWriterProxy.h"
    "/home/mpas/Desktop/Source/PV/build/ParaViewCore/ServerManager/Core/vtkPVServerManagerCoreModule.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

