/* DO NOT EDIT.
 * Generated by ../../../bin/vtkEncodeString-pv4.3
 * 
 * Define the vtkHAVSVolumeMapper_k2FP string.
 *
 * Generated from file: /home/mpas/Desktop/Source/PV/ParaView/VTK/Rendering/VolumeOpenGL/vtkHAVSVolumeMapper_k2FP.asm
 */
#include "vtkHAVSVolumeMapper_k2FP.h"
const char *vtkHAVSVolumeMapper_k2FP =
"!!ARBfp1.0\n"
"# -----------------------------------------------------------------------------\n"
"# Copyright 2005 by University of Utah\n"
"#\n"
"# Hardware-Assisted Visibility Sorting\n"
"#\n"
"# The program consists of the following steps:\n"
"#\n"
"# 1. Find the first and second entries in the fixed size k-buffer list sorted\n"
"#    by d (2+1 entries)\n"
"# 2. Perform a 3D pre-integrated transfer function lookup using front and back\n"
"#    scalar data values + the segment length computed from the distance values\n"
"#    of the first and second entries from the k-buffer.\n"
"# 3. Composite the color and opacity from the transfer funcion with the\n"
"#    color and opacity from the framebuffer. Discard winning k-buffer entry,\n"
"#    write the remaining k-buffer entries.\n"
"#\n"
"# The following textures are used:\n"
"#\n"
"#   Tex 0: framebuffer (pbuffer, 2D RGBA 16/32 bpp float)\n"
"#   Tex 1: k-buffer entries 1 and 2 (same)\n"
"#   Tex 4: transfer function (regular, 3D RGBA 8/16 bpp int)\n"
"#\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# use the ATI_draw_buffers extension\n"
"OPTION ATI_draw_buffers;\n"
"# this does not matter now, but will matter on future hardware\n"
"OPTION ARB_precision_hint_nicest;\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# input and temporaries\n"
"ATTRIB p = fragment.position; # fragment position in screen space\n"
"ATTRIB v = fragment.texcoord[0]; # v.x = scalar value in\n"
"ATTRIB e = fragment.texcoord[1]; # fragment position in eye space\n"
"PARAM sz = program.local[0]; # texture scale and max gap length parameters\n"
"                             # {1/pw, 1/ph, max, not_used)}\n"
"PARAM half = { 0.5, 0.5, 0.0, 0.0 };\n"
"PARAM exp = { 0.0, 0.0, 0.0, 1.44269504 }; # 1/ln2\n"
"\n"
"TEMP a0, a1, a2; # k-buffer entries\n"
"TEMP r0, r1, r2, r3; # sorted results\n"
"TEMP c, c0; # color and opacity\n"
"TEMP t; # temporary (boolean flag for min/max, dependent texture coordinate,\n"
"        # pbuffer texture coordinate, fragment to eye distance)\n"
"TEMP colorBack, colorFront;\n"
"TEMP taud, zeta, gamma, Psi;\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# compute texture coordinates from window position so that it is not\n"
"# interpolated perspective correct.  Then look up the color and opacity from\n"
"# the framebuffer\n"
"MUL t, p, sz; # t.xy = p.xy * sz.xy, only x and y are used for texture lookup\n"
"TEX c0, t, texture[0], 2D; # framebuffer color\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# Check opacity and kill fragment if it is greater than tolerance\n"
"SUB t.w, 0.99, c0.w;\n"
"KIL t.w;\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# set up the k-buffer entries a0, a1\n"
"# each k-buffer entry contains the scalar data value in x or z\n"
"# and the distance value in y or w\n"
"TEX a1, t, texture[1], 2D; # k-buffer entry 1\n"
"MOV a2, a1.zwzw; # k-buffer entry 2\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# compute fragment to eye distance\n"
"DP3 t, e, e;\n"
"RSQ t.y, t.y;\n"
"MUL a0.y, t.x, t.y; # fragment to eye distance\n"
"MOV a0.x, v.x; # scalar data value\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# find fragment with minimum d (r0), save the rest to r1, r2, r3\n"
"\n"
"# r0 = min_d(a0, a1); r1 = max_d(a0, a1);\n"
"SUB t.w, a0.y, a1.y; # t.w < 0 iff a0.y < a1.y\n"
"CMP r1, t.w, a1, a0; # r1 = (a0.y < a1.y ? a1 : a0)\n"
"CMP r0, t.w, a0, a1; # r0 = (a0.y < a1.y ? a0 : a1)\n"
"\n"
"# r0 = min_d(r0, a2); r2 = max_d(r0, a2)\n"
"SUB t.w, r0.y, a2.y; # t.w < 0 iff r0.y < a2.y\n"
"CMP r2, t.w, a2, r0; # r2 = (r0.y < a2.y ? a2 : r0)\n"
"CMP r0, t.w, r0, a2; # r0 = (r0.y < a2.y ? r0 : a2)\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# find fragment with minimum d (r3) from r1, r2\n"
"\n"
"# r3 = min_d(r1, r2);\n"
"SUB t.w, r1.y, r2.y; # t.w < 0 iff r1.y < r2.y\n"
"CMP r3, t.w, r1, r2; # r3 = (r1.y < r2.y ? r1 : r2);\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# set up texture coordinates for transfer function lookup\n"
"MOV t.x, r0.x; # front scalar\n"
"MOV t.y, r3.x; # back scalar\n"
"SUB t.z, r3.y, r0.y; # distance between front and back fragment\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# nullify fragment if distance is greater than unit scale (non-convexities)\n"
"SUB t.w, sz.z, t.z;\n"
"CMP t.z, t.w, 0.0, t.z;\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# transfer function lookup\n"
"TEX colorFront, t.x, texture[3], 1D;\n"
"TEX colorBack,  t.y, texture[3], 1D;\n"
"MUL taud.x, t.z, colorBack.a;\n"
"MUL taud.y, t.z, colorFront.a;\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# compute zeta = exp(-0.5*(taudf+taudb))\n"
"DP3 zeta.w, taud, half;\n"
"MUL zeta.w, exp.w, zeta.w;\n"
"EX2 zeta.w, -zeta.w;\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# compute gamma = taud/(1+taud);\n"
"ADD t, taud, 1.0;\n"
"RCP t.x, t.x;\n"
"RCP t.y, t.y;\n"
"MUL gamma, taud, t;\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# lookup Psi\n"
"TEX Psi.w, gamma, texture[2], 2D;\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# compute color = cb(psi-zeta) + cf(1.0-psi)\n"
"SUB t.w, Psi.w, zeta.w;\n"
"MUL colorBack, colorBack, t.w;\n"
"SUB t.w, 1.0, Psi.w;\n"
"MUL colorFront, colorFront, t.w;\n"
"ADD c, colorBack, colorFront;\n"
"SUB c.a, 1.0, zeta.w;\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# nullify winning entry if the scalar value < 0\n"
"CMP c, r0.x, 0.0, c;\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# composite color with the color from the framebuffer !!!front to back!!!\n"
"SUB t.w, 1.0, c0.w;\n"
"MAD result.color[0], c, t.w, c0;\n"
"\n"
"# -----------------------------------------------------------------------------\n"
"# write remaining k-buffer entries\n"
"MOV r1.zw, r2.xxxy;\n"
"MOV result.color[1], r1;\n"
"END\n"
"\n";
