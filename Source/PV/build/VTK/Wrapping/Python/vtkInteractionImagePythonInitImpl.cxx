// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageViewer2(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageViewer(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkResliceImageViewer(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkResliceImageViewerMeasurements(PyObject *, const char *); }

static PyMethodDef PyvtkInteractionImagePython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

extern  "C" {VTK_ABI_EXPORT void real_initvtkInteractionImagePython(const char *modulename); }

void real_initvtkInteractionImagePython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkInteractionImagePython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkInteractionImagePython");
    }
  PyVTKAddFile_vtkImageViewer2(d, modulename);
  PyVTKAddFile_vtkImageViewer(d, modulename);
  PyVTKAddFile_vtkResliceImageViewer(d, modulename);
  PyVTKAddFile_vtkResliceImageViewerMeasurements(d, modulename);
}

