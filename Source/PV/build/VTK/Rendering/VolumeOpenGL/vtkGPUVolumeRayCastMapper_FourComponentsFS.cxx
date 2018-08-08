/* DO NOT EDIT.
 * Generated by ../../../bin/vtkEncodeString-pv4.3
 * 
 * Define the vtkGPUVolumeRayCastMapper_FourComponentsFS string.
 *
 * Generated from file: /home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/VolumeOpenGL/vtkGPUVolumeRayCastMapper_FourComponentsFS.glsl
 */
#include "vtkGPUVolumeRayCastMapper_FourComponentsFS.h"
const char *vtkGPUVolumeRayCastMapper_FourComponentsFS =
"/*=========================================================================\n"
"\n"
"  Program:   Visualization Toolkit\n"
"  Module:    vtkGPUVolumeRayCastMapper_FourComponentsFS.glsl\n"
"\n"
"  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen\n"
"  All rights reserved.\n"
"  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.\n"
"\n"
"     This software is distributed WITHOUT ANY WARRANTY; without even\n"
"     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR\n"
"     PURPOSE.  See the above copyright notice for more information.\n"
"\n"
"=========================================================================*/\n"
"\n"
"// Fragment shader that implements scalarFromValue() and colorFromValue() in\n"
"// the case of a one-component dataset.\n"
"// The functions are used in composite mode.\n"
"\n"
"#version 110\n"
"\n"
"// \"value\" is a sample of the dataset.\n"
"// Think of \"value\" as an object.\n"
"\n"
"float scalarFromValue(vec4 value)\n"
"{\n"
"  return value.w;\n"
"}\n"
"\n"
"vec4 colorFromValue(vec4 value)\n"
"{\n"
"  return vec4(value.xyz,1.0);\n"
"}\n"
"\n";

