/* DO NOT EDIT.
 * Generated by ../../../bin/vtkEncodeString-pv4.3
 * 
 * Define the vtkGPUVolumeRayCastMapper_MinIPFS string.
 *
 * Generated from file: /home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/VolumeOpenGL/vtkGPUVolumeRayCastMapper_MinIPFS.glsl
 */
#include "vtkGPUVolumeRayCastMapper_MinIPFS.h"
const char *vtkGPUVolumeRayCastMapper_MinIPFS =
"/*=========================================================================\n"
"\n"
"  Program:   Visualization Toolkit\n"
"  Module:    vtkGPUVolumeRayCastMapper_MinIPFS.glsl\n"
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
"// Fragment program with ray cast and Minimum Intensity Projection (MinIP)\n"
"// method.\n"
"// Compilation: header part and the projection part are inserted first.\n"
"// pos is defined and initialized in header\n"
"// rayDir is defined in header and initialized in the projection part\n"
"// initMinValue() and writeColorAndMinScalar are defined in some specific\n"
"// file depending on cropping flag being on or off.\n"
"\n"
"#version 110\n"
"\n"
"uniform sampler3D dataSetTexture;\n"
"uniform sampler1D colorTexture;\n"
"uniform sampler1D opacityTexture;\n"
"\n"
"uniform vec3 lowBounds;\n"
"uniform vec3 highBounds;\n"
"\n"
"// Entry position (global scope)\n"
"vec3 pos;\n"
"// Incremental vector in texture space (global scope)\n"
"vec3 rayDir;\n"
"\n"
"float tMax;\n"
"\n"
"// Sub-functions, depending on cropping mode\n"
"float initialMinValue();\n"
"void writeColorAndMinScalar(vec4 sample,\n"
"                            vec4 opacity,\n"
"                            float minValue);\n"
"\n"
"void trace(void)\n"
"{\n"
"  // Max intensity is the lowest value.\n"
"  float minValue=initialMinValue();\n"
"  bool inside=true;\n"
"  vec4 sample;\n"
"\n"
"  float t=0.0;\n"
"  // We NEED two nested while loops. It is trick to work around hardware\n"
"  // limitation about the maximum number of loops.\n"
"  while(inside)\n"
"    {\n"
"    while(inside)\n"
"      {\n"
"      sample=texture3D(dataSetTexture,pos);\n"
"      minValue=min(minValue,sample.r);\n"
"      pos=pos+rayDir;\n"
"      t+=1.0;\n"
"      inside=t<tMax && all(greaterThanEqual(pos,lowBounds))\n"
"        && all(lessThanEqual(pos,highBounds));\n"
"\n"
"      // yes, t<tMax && all(greaterThanEqual(pos,lowBounds))\n"
"      // && all(lessThanEqual(pos,highBounds));\n"
"      // looks better but the latest nVidia 177.80 has a bug...\n"
"      inside=t<tMax && pos.x>=lowBounds.x && pos.y>=lowBounds.y\n"
"        && pos.z>=lowBounds.z && pos.x<=highBounds.x && pos.y<=highBounds.y\n"
"        && pos.z<=highBounds.z;\n"
"\n"
"\n"
"      }\n"
"    }\n"
"\n"
"  sample=texture1D(colorTexture,minValue);\n"
"  vec4 opacity=texture1D(opacityTexture,minValue);\n"
"\n"
"  writeColorAndMinScalar(sample,opacity,minValue);\n"
"}\n"
"\n";

