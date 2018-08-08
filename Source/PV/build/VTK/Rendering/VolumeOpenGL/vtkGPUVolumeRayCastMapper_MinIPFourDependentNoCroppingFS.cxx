/* DO NOT EDIT.
 * Generated by ../../../bin/vtkEncodeString-pv4.3
 * 
 * Define the vtkGPUVolumeRayCastMapper_MinIPFourDependentNoCroppingFS string.
 *
 * Generated from file: /home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/VolumeOpenGL/vtkGPUVolumeRayCastMapper_MinIPFourDependentNoCroppingFS.glsl
 */
#include "vtkGPUVolumeRayCastMapper_MinIPFourDependentNoCroppingFS.h"
const char *vtkGPUVolumeRayCastMapper_MinIPFourDependentNoCroppingFS =
"/*=========================================================================\n"
"\n"
"  Program:   Visualization Toolkit\n"
"  Module:    vtkGPUVolumeRayCastMapper_MinIPFourDependentNoCroppingFS.glsl\n"
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
"// Implementation of some functions used by the 4-component Minimum Intensity\n"
"// Projection (MinIP) method when cropping is off.\n"
"\n"
"#version 110\n"
"\n"
"float initialMinValue()\n"
"{\n"
"  return 1.0;\n"
"}\n"
"\n"
"vec4 initialColor()\n"
"{\n"
"  return vec4(0.0,0.0,0.0,0.0);\n"
"}\n"
"\n"
"void writeColorAndMinScalar(vec4 color,\n"
"                            vec4 opacity,\n"
"                            float minValue)\n"
"{\n"
"  // minValue is not used\n"
"\n"
"  // color framebuffer\n"
"  gl_FragColor.r = color.r*opacity.a;\n"
"  gl_FragColor.g = color.g*opacity.a;\n"
"  gl_FragColor.b = color.b*opacity.a;\n"
"  gl_FragColor.a=opacity.a;\n"
"}\n"
"\n";

