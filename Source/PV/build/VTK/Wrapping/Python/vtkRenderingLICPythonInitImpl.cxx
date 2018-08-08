// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageDataLIC2D(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStructuredGridLIC2D(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSurfaceLICDefaultPainter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSurfaceLICPainter(PyObject *, const char *); }

static PyMethodDef PyvtkRenderingLICPython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

extern  "C" {VTK_ABI_EXPORT void real_initvtkRenderingLICPython(const char *modulename); }

void real_initvtkRenderingLICPython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkRenderingLICPython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkRenderingLICPython");
    }
  PyVTKAddFile_vtkImageDataLIC2D(d, modulename);
  PyVTKAddFile_vtkStructuredGridLIC2D(d, modulename);
  PyVTKAddFile_vtkSurfaceLICDefaultPainter(d, modulename);
  PyVTKAddFile_vtkSurfaceLICPainter(d, modulename);
}
