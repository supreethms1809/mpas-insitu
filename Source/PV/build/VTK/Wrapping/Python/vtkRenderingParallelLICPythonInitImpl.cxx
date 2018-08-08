// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkParallelTimer(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPSurfaceLICPainter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkRenderingParallelLICObjectFactory(PyObject *, const char *); }

static PyMethodDef PyvtkRenderingParallelLICPython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

extern  "C" {VTK_ABI_EXPORT void real_initvtkRenderingParallelLICPython(const char *modulename); }

void real_initvtkRenderingParallelLICPython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkRenderingParallelLICPython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkRenderingParallelLICPython");
    }
  PyVTKAddFile_vtkParallelTimer(d, modulename);
  PyVTKAddFile_vtkPSurfaceLICPainter(d, modulename);
  PyVTKAddFile_vtkRenderingParallelLICObjectFactory(d, modulename);
}
