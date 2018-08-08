/* DO NOT EDIT.
 * Generated by ../../../bin/vtkEncodeString-pv4.3
 * 
 * Define the vtkOpenGLPropertyDefaultMain_fs string.
 *
 * Generated from file: /home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/OpenGL/vtkOpenGLPropertyDefaultMain_fs.glsl
 */
#include "vtkOpenGLPropertyDefaultMain_fs.h"
const char *vtkOpenGLPropertyDefaultMain_fs =
"// ============================================================================\n"
"//\n"
"//  Program:   Visualization Toolkit\n"
"//  Module:    vtkOpenGLPropertyDefaultMain_fs.glsl\n"
"//\n"
"//  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen\n"
"//  All rights reserved.\n"
"//  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.\n"
"//\n"
"//     This software is distributed WITHOUT ANY WARRANTY; without even\n"
"//     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR\n"
"//     PURPOSE.  See the above copyright notice for more information.\n"
"//\n"
"// ============================================================================\n"
"\n"
"// This is the default fragment shader with the main() function. It is used\n"
"// when no main() is provided at the renderer level and some fragment shader is\n"
"// defined by the user on a property. For example, the depth peeling algorithm\n"
"// defines its own main() function for the fragment shader.\n"
"\n"
"#version 110\n"
"\n"
"void propFuncFS();\n"
"\n"
"void main()\n"
"{\n"
"  propFuncFS();\n"
"}\n"
"\n";

