/* DO NOT EDIT.
 * Generated by ../../../bin/vtkEncodeString-pv4.3
 * 
 * Define the vtkLineIntegralConvolution2D_LICI string.
 *
 * Generated from file: /home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/LIC/vtkLineIntegralConvolution2D_LICI.glsl
 */
#include "vtkLineIntegralConvolution2D_LICI.h"
const char *vtkLineIntegralConvolution2D_LICI =
"//=========================================================================\n"
"//\n"
"//  Program:   Visualization Toolkit\n"
"//  Module:    vtkLineIntegralConvolution2D_fs1.glsl\n"
"//\n"
"//  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen\n"
"//  All rights reserved.\n"
"//  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.\n"
"//\n"
"//     This software is distributed WITHOUT ANY WARRANTY; without even\n"
"//     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR\n"
"//     PURPOSE.  See the above copyright notice for more information.\n"
"//\n"
"//=========================================================================\n"
"\n"
"#version 110\n"
"\n"
"uniform sampler2D  texVectors;\n"
"uniform sampler2D  texNoise;\n"
"uniform sampler2D  texLIC;\n"
"uniform sampler2D  texSeedPts;\n"
"\n"
"uniform int   uPassNo;          // in pass 1 hpf of pass 0 is convolved.\n"
"uniform float uStepSize;        // step size in parametric space\n"
"\n"
"uniform vec2  uNoiseBoundsPt1;  // tc of upper right pt of noise texture\n"
"\n"
"// Lookup the vector at the given point. Value will be normalized if\n"
"// normalization is enabled.  See vtkLineIntegralConvolution2D.cxx for\n"
"// implementation\n"
"vec2 getVector(vec2 vectc);\n"
"\n"
"// convert from vector coordinate space to noise coordinate space.\n"
"// the noise texture is tiled across the whole domain\n"
"vec2 VectorTCToNoiseTC(vec2 vectc)\n"
"{\n"
"  return vectc/uNoiseBoundsPt1;\n"
"}\n"
"\n"
"// get the texture coordidnate to lookup noise value.\n"
"// in pass 1 repeatedly tile the noise texture across\n"
"// the computational domain.\n"
"vec2 getNoiseTC(vec2 tc)\n"
"{\n"
"  if (uPassNo == 0)\n"
"    {\n"
"    return VectorTCToNoiseTC(tc);\n"
"    }\n"
"  else\n"
"    {\n"
"    return tc;\n"
"    }\n"
"}\n"
"\n"
"// look up noise value at the given location. The location\n"
"// is supplied in vector texture coordinates, hence the need\n"
"// to convert to either noise or lic texture coordinates in\n"
"// pass 1 and 2 respectively.\n"
"float getNoise(vec2 vectc)\n"
"{\n"
"  return texture2D(texNoise, getNoiseTC(vectc)).r;\n"
"}\n"
"\n"
"// fourth-order Runge-Kutta streamline integration\n"
"// no bounds checks are made, therefor it's essential\n"
"// to have the entire texture initialized to 0\n"
"// and set clamp to border and have border color 0\n"
"// an integer is set if the step was taken, keeping\n"
"// an accurate step count is neccessary to prevent\n"
"// boundary artifacts. Don't count the step if\n"
"// all vector lookups are identically 0. This is\n"
"// a proxy for \"stepped outside valid domain\"\n"
"vec2 rk4(vec2 pt0, float dt, out bool count)\n"
"{\n"
"  count=true;\n"
"  float dtHalf = dt * 0.5;\n"
"  vec2 pt1;\n"
"\n"
"  vec2 v0 = getVector(pt0);\n"
"  pt1 = pt0 + v0 * dtHalf;\n"
"\n"
"  vec2 v1 = getVector(pt1);\n"
"  pt1 = pt0 + v1 * dtHalf;\n"
"\n"
"  vec2 v2 = getVector(pt1);\n"
"  pt1 = pt0 + v2 * dt;\n"
"\n"
"  vec2 v3 = getVector(pt1);\n"
"  vec2 vSum = v0 + v1 + v1 + v2 + v2 + v3;\n"
"\n"
"  if (vSum == vec2(0.0,0.0))\n"
"    {\n"
"    count = false;\n"
"    }\n"
"\n"
"  pt1 = pt0 + (vSum) * (dt * (1.0/6.0));\n"
"\n"
" return pt1;\n"
"}\n"
"\n"
"void main(void)\n"
"{\n"
"  vec2 lictc = gl_TexCoord[0].st;\n"
"  vec4 lic = texture2D(texLIC, lictc);\n"
"  vec2 pt0 = texture2D(texSeedPts, lictc).st;\n"
"\n"
"  bool count;\n"
"  vec2 pt1 = rk4(pt0, uStepSize, count);\n"
"\n"
"  if (count)\n"
"    {\n"
"    // accumulate lic step\n"
"    // (lic, mask, 0, step count)\n"
"    float noise = getNoise(pt1);\n"
"    gl_FragData[0] = vec4(lic.r + noise, lic.g, 0.0, lic.a + 1.0);\n"
"    gl_FragData[1] = vec4(pt1, 0.0, 1.0);\n"
"    }\n"
"  else\n"
"    {\n"
"    // keep existing values\n"
"    gl_FragData[0] = lic;\n"
"    gl_FragData[1] = vec4(pt0, 0.0, 1.0);\n"
"    }\n"
"}\n"
"\n";

