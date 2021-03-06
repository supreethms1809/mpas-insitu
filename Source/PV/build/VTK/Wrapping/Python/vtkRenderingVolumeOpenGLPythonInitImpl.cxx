// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkOpenGLHAVSVolumeMapper(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkOpenGLProjectedAAHexahedraMapper(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkOpenGLProjectedTetrahedraMapper(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkOpenGLRayCastImageDisplayHelper(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkOpenGLVolumeTextureMapper2D(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkOpenGLVolumeTextureMapper3D(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSmartVolumeMapper(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkOpenGLGPUVolumeRayCastMapper(PyObject *, const char *); }

static PyMethodDef PyvtkRenderingVolumeOpenGLPython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

extern  "C" {VTK_ABI_EXPORT void real_initvtkRenderingVolumeOpenGLPython(const char *modulename); }

void real_initvtkRenderingVolumeOpenGLPython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkRenderingVolumeOpenGLPython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkRenderingVolumeOpenGLPython");
    }
  PyVTKAddFile_vtkOpenGLHAVSVolumeMapper(d, modulename);
  PyVTKAddFile_vtkOpenGLProjectedAAHexahedraMapper(d, modulename);
  PyVTKAddFile_vtkOpenGLProjectedTetrahedraMapper(d, modulename);
  PyVTKAddFile_vtkOpenGLRayCastImageDisplayHelper(d, modulename);
  PyVTKAddFile_vtkOpenGLVolumeTextureMapper2D(d, modulename);
  PyVTKAddFile_vtkOpenGLVolumeTextureMapper3D(d, modulename);
  PyVTKAddFile_vtkSmartVolumeMapper(d, modulename);
  PyVTKAddFile_vtkOpenGLGPUVolumeRayCastMapper(d, modulename);
}

