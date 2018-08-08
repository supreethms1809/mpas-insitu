/* DO NOT EDIT.
 * Generated by ../../../bin/vtkEncodeString-pv4.3
 * 
 * Define the vtkGPUVolumeRayCastMapper_MinIPFourDependentCroppingFS string.
 *
 * Generated from file: /home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/VolumeOpenGL/vtkGPUVolumeRayCastMapper_MinIPFourDependentCroppingFS.glsl
 */
#include "vtkGPUVolumeRayCastMapper_MinIPFourDependentCroppingFS.h"
const char *vtkGPUVolumeRayCastMapper_MinIPFourDependentCroppingFS =
"/*=========================================================================\n"
"\n"
"  Program:   Visualization Toolkit\n"
"  Module:    vtkGPUVolumeRayCastMapper_MinIPFourDependentCroppingFS.glsl\n"
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
"// Projection (MinIP) method when cropping is on.\n"
"\n"
"#version 110\n"
"\n"
"// GLSL Spec 1.10 rev 59 30-April-2004 defines gl_FragData[] but implementation\n"
"// older than the spec only has it as an extension\n"
"// (nVidia Linux driver 100.14.13, OpenGL version 2.1.1,\n"
"// on Quadro FX 3500/PCI/SSE2)\n"
"#extension GL_ARB_draw_buffers : enable\n"
"\n"
"// max scalar buffer as an input\n"
"uniform sampler2D scalarBufferTexture;\n"
"\n"
"// color buffer as an input\n"
"uniform sampler2D frameBufferTexture;\n"
"\n"
"// 2D Texture fragment coordinates [0,1] from fragment coordinates\n"
"// the scalar frame buffer texture has the size of the plain buffer but\n"
"// we use a fraction of it. The texture coordinates is less than 1 if\n"
"// the reduction factor is less than 1.\n"
"vec2 fragTexCoord;\n"
"\n"
"float initialMinValue()\n"
"{\n"
"  return texture2D(scalarBufferTexture,fragTexCoord).r;\n"
"}\n"
"\n"
"vec4 initialColor()\n"
"{\n"
"  return texture2D(frameBufferTexture,fragTexCoord);\n"
"}\n"
"\n"
"void writeColorAndMinScalar(vec4 color,\n"
"                            vec4 opacity,\n"
"                            float minValue)\n"
"{\n"
"  // color framebuffer\n"
"  gl_FragData[0].r = color.r*opacity.a;\n"
"  gl_FragData[0].g = color.g*opacity.a;\n"
"  gl_FragData[0].b = color.b*opacity.a;\n"
"  gl_FragData[0].a=opacity.a;\n"
"\n"
"  // min scalar framebuffer\n"
"  gl_FragData[1].r=minValue;\n"
"  gl_FragData[1].g=0.0;\n"
"  gl_FragData[1].b=0.0;\n"
"  gl_FragData[1].a=0.0;\n"
"}\n"
"\n";

