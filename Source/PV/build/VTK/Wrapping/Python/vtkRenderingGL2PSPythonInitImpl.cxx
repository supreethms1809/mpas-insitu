// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGL2PSUtilities(PyObject *, const char *); }

static PyMethodDef PyvtkRenderingGL2PSPython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

extern  "C" {VTK_ABI_EXPORT void real_initvtkRenderingGL2PSPython(const char *modulename); }

void real_initvtkRenderingGL2PSPython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkRenderingGL2PSPython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkRenderingGL2PSPython");
    }
  PyVTKAddFile_vtkGL2PSUtilities(d, modulename);
}

