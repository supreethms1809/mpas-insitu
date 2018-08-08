
if(NOT QtTesting_EXPORTS_INCLUDED)
  include("/home/mpas/Desktop/Source/PV/build/ThirdParty/QtTesting/vtkqttesting/QtTestingExports.cmake")
  set(QtTesting_EXPORTS_INCLUDED 1)
endif()

set(QtTesting_INCLUDE_DIRS "/home/mpas/Desktop/Source/PV/ParaView/ThirdParty/QtTesting/vtkqttesting;/home/mpas/Desktop/Source/PV/build/ThirdParty/QtTesting/vtkqttesting")
set(QtTesting_LIBRARY_DIR "/home/mpas/Desktop/Source/PV/build/ThirdParty/QtTesting/vtkqttesting")
set(QtTesting_LIBRARIES QtTesting)
include("${CMAKE_CURRENT_LIST_DIR}/QtTestingExports.cmake")
