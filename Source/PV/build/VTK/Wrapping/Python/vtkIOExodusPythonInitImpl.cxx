// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCPExodusIIElementBlock(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCPExodusIIInSituReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExodusIICache(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExodusIIReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExodusIIWriter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkModelMetadata(PyObject *, const char *); }

static PyMethodDef PyvtkIOExodusPython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

extern  "C" {VTK_ABI_EXPORT void real_initvtkIOExodusPython(const char *modulename); }

void real_initvtkIOExodusPython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkIOExodusPython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkIOExodusPython");
    }
  PyVTKAddFile_vtkCPExodusIIElementBlock(d, modulename);
  PyVTKAddFile_vtkCPExodusIIInSituReader(d, modulename);
  PyVTKAddFile_vtkExodusIICache(d, modulename);
  PyVTKAddFile_vtkExodusIIReader(d, modulename);
  PyVTKAddFile_vtkExodusIIWriter(d, modulename);
  PyVTKAddFile_vtkModelMetadata(d, modulename);
}
