# Install script for directory: /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3/vtkxdmf2" TYPE FILE FILES
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDOM.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfExpression.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDomain.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfSet.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDsmComm.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfValues.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDsmBuffer.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfArray.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfExprYacc.tab.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfValuesMySQL.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDsmCommMpi.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfValuesBinary.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfRegion.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfValuesXML.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfHeavyData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfTopology.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfMap.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfRoot.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDataItem.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfExport.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfExpr.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfLightData.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfObject.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/bz2stream.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/Xdmf.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfGeometry.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfTime.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDsm.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDataStructure.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfArrayCopyMacro.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfAttribute.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfHDF.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfInformation.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfElement.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfH5Driver.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfValuesHDF.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfGrid.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/gzstream.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfHDFSupport.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDataTransform.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDsmMsg.h"
    "/home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDataDesc.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-4.3/vtkxdmf2" TYPE FILE FILES "/home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfConfig.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE STATIC_LIBRARY FILES "/home/mpas/Desktop/Source/PV/build/lib/libvtkxdmf2-pv4.3.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

