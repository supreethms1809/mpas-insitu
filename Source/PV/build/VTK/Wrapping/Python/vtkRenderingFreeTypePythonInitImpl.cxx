// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkFreeTypeStringToImage(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMathTextFreeTypeTextRenderer(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMathTextUtilities(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTextRendererStringToImage(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkScaledTextActor(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkVectorText(PyObject *, const char *); }

static PyMethodDef PyvtkRenderingFreeTypePython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

extern  "C" {VTK_ABI_EXPORT void real_initvtkRenderingFreeTypePython(const char *modulename); }

void real_initvtkRenderingFreeTypePython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkRenderingFreeTypePython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkRenderingFreeTypePython");
    }
  PyVTKAddFile_vtkFreeTypeStringToImage(d, modulename);
  PyVTKAddFile_vtkMathTextFreeTypeTextRenderer(d, modulename);
  PyVTKAddFile_vtkMathTextUtilities(d, modulename);
  PyVTKAddFile_vtkTextRendererStringToImage(d, modulename);
  PyVTKAddFile_vtkScaledTextActor(d, modulename);
  PyVTKAddFile_vtkVectorText(d, modulename);
}

