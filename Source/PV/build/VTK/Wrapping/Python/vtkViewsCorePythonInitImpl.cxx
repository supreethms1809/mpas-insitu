// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkConvertSelectionDomain(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDataRepresentation(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkEmptyRepresentation(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkRenderViewBase(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkView(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkViewTheme(PyObject *, const char *); }

static PyMethodDef PyvtkViewsCorePython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

extern  "C" {VTK_ABI_EXPORT void real_initvtkViewsCorePython(const char *modulename); }

void real_initvtkViewsCorePython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkViewsCorePython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkViewsCorePython");
    }
  PyVTKAddFile_vtkConvertSelectionDomain(d, modulename);
  PyVTKAddFile_vtkDataRepresentation(d, modulename);
  PyVTKAddFile_vtkEmptyRepresentation(d, modulename);
  PyVTKAddFile_vtkRenderViewBase(d, modulename);
  PyVTKAddFile_vtkView(d, modulename);
  PyVTKAddFile_vtkViewTheme(d, modulename);
}

