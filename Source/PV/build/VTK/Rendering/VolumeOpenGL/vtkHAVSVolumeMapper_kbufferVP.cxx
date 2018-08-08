/* DO NOT EDIT.
 * Generated by ../../../bin/vtkEncodeString-pv4.3
 * 
 * Define the vtkHAVSVolumeMapper_kbufferVP string.
 *
 * Generated from file: /home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/VolumeOpenGL/vtkHAVSVolumeMapper_kbufferVP.asm
 */
#include "vtkHAVSVolumeMapper_kbufferVP.h"
const char *vtkHAVSVolumeMapper_kbufferVP =
"!!ARBvp1.0\n"
"# -----------------------------------------------------------------------------\n"
"# Copyright 2005 by University of Utah\n"
"#\n"
"# This program fixes perspective-correct texture lookups\n"
"# -----------------------------------------------------------------------------\n"
"\n"
"ATTRIB iPos = vertex.position;\n"
"ATTRIB iTex0 = vertex.texcoord[0];\n"
"PARAM mvp[4] = { state.matrix.mvp };\n"
"PARAM mv[4] = { state.matrix.modelview };\n"
"OUTPUT oPos = result.position;\n"
"OUTPUT oTex0 = result.texcoord[0];\n"
"OUTPUT oTex1 = result.texcoord[1];\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# transform vertex to clip coordinates\n"
"DP4 oPos.x, mvp[0], iPos;\n"
"DP4 oPos.y, mvp[1], iPos;\n"
"DP4 oPos.z, mvp[2], iPos;\n"
"DP4 oPos.w, mvp[3], iPos;\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# transform vertex to eye coordinates\n"
"DP4 oTex1.x, mv[0], iPos;\n"
"DP4 oTex1.y, mv[1], iPos;\n"
"DP4 oTex1.z, mv[2], iPos;\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# texcoord 0 contains the scalar data value\n"
"MOV oTex0, iTex0;\n"
"\n"
"END\n"
"\n";

