// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageButterworthHighPass(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageButterworthLowPass(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageFFT(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageFourierCenter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageFourierFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageIdealHighPass(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageIdealLowPass(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageRFFT(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTableFFT(PyObject *, const char *); }

static PyMethodDef PyvtkImagingFourierPython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

extern  "C" {VTK_ABI_EXPORT void real_initvtkImagingFourierPython(const char *modulename); }

void real_initvtkImagingFourierPython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkImagingFourierPython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkImagingFourierPython");
    }
  PyVTKAddFile_vtkImageButterworthHighPass(d, modulename);
  PyVTKAddFile_vtkImageButterworthLowPass(d, modulename);
  PyVTKAddFile_vtkImageFFT(d, modulename);
  PyVTKAddFile_vtkImageFourierCenter(d, modulename);
  PyVTKAddFile_vtkImageFourierFilter(d, modulename);
  PyVTKAddFile_vtkImageIdealHighPass(d, modulename);
  PyVTKAddFile_vtkImageIdealLowPass(d, modulename);
  PyVTKAddFile_vtkImageRFFT(d, modulename);
  PyVTKAddFile_vtkTableFFT(d, modulename);
}

