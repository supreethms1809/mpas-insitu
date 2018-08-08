set(vtkPVClientServerCoreCore_HEADERS_LOADED 1)
set(vtkPVClientServerCoreCore_HEADERS "vtkCompleteArrays;vtkMPIMToNSocketConnection;vtkMPIMToNSocketConnectionPortInformation;vtkNetworkAccessManager;vtkPConvertSelection;vtkProcessModule;vtkPVAlgorithmPortsInformation;vtkPVArrayInformation;vtkPVClassNameInformation;vtkPVCompositeDataInformation;vtkPVCompositeDataInformationIterator;vtkPVDataInformation;vtkPVDataInformationHelper;vtkPVDataSetAttributesInformation;vtkPVDataSizeInformation;vtkPVDisableStackTraceSignalHandler;vtkPVEnableStackTraceSignalHandler;vtkPVExtractSelection;vtkPVExtractArraysOverTime;vtkPVGenericAttributeInformation;vtkPVInformation;vtkPVMemoryUseInformation;vtkPVMultiClientsInformation;vtkPVOptions;vtkPVPluginLoader;vtkPVPluginsInformation;vtkPVPluginTracker;vtkPVProgressHandler;vtkPVPythonInformation;vtkPVPythonModule;vtkPVPythonOptions;vtkPVServerInformation;vtkPVSession;vtkPVSILInformation;vtkPVSystemConfigInformation;vtkPVSystemInformation;vtkPVTemporalDataInformation;vtkPVTimerInformation;vtkSession;vtkSessionIterator;vtkTCPNetworkAccessManager;vtkPythonExtractSelection;vtkPythonProgrammableFilter;vtkPythonAnnotationFilter")

foreach(header ${vtkPVClientServerCoreCore_HEADERS})
  set(vtkPVClientServerCoreCore_HEADER_${header}_EXISTS 1)
endforeach()

set(vtkPVClientServerCoreCore_HEADER_vtkNetworkAccessManager_ABSTRACT 1)
set(vtkPVClientServerCoreCore_HEADER_vtkPVDataInformationHelper_ABSTRACT 1)
set(vtkPVClientServerCoreCore_HEADER_vtkPVInformation_ABSTRACT 1)
set(vtkPVClientServerCoreCore_HEADER_vtkPVPluginTracker_ABSTRACT 1)
set(vtkPVClientServerCoreCore_HEADER_vtkPVSession_ABSTRACT 1)
set(vtkPVClientServerCoreCore_HEADER_vtkSession_ABSTRACT 1)


