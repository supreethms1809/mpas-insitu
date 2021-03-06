// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkClientServerCompositePass(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkClientServerSynchronizedRenderers(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCompositedSynchronizedRenderers(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCompositer(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCompositeRenderManager(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCompressCompositer(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkParallelRenderManager(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPHardwareSelector(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSynchronizedRenderers(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSynchronizedRenderWindows(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTreeCompositer(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageRenderManager(PyObject *, const char *); }

static PyMethodDef PyvtkRenderingParallelPython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

extern  "C" {VTK_ABI_EXPORT void real_initvtkRenderingParallelPython(const char *modulename); }

void real_initvtkRenderingParallelPython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkRenderingParallelPython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkRenderingParallelPython");
    }
  PyVTKAddFile_vtkClientServerCompositePass(d, modulename);
  PyVTKAddFile_vtkClientServerSynchronizedRenderers(d, modulename);
  PyVTKAddFile_vtkCompositedSynchronizedRenderers(d, modulename);
  PyVTKAddFile_vtkCompositer(d, modulename);
  PyVTKAddFile_vtkCompositeRenderManager(d, modulename);
  PyVTKAddFile_vtkCompressCompositer(d, modulename);
  PyVTKAddFile_vtkParallelRenderManager(d, modulename);
  PyVTKAddFile_vtkPHardwareSelector(d, modulename);
  PyVTKAddFile_vtkSynchronizedRenderers(d, modulename);
  PyVTKAddFile_vtkSynchronizedRenderWindows(d, modulename);
  PyVTKAddFile_vtkTreeCompositer(d, modulename);
  PyVTKAddFile_vtkImageRenderManager(d, modulename);
}

