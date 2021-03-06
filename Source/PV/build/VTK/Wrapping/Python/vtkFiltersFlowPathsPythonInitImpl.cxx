// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAbstractInterpolatedVelocityField(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAMRInterpolatedVelocityField(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCompositeInterpolatedVelocityField(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDashedStreamLine(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInterpolatedVelocityField(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStreamer(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStreamLine(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStreamPoints(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStreamTracer(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkModifiedBSPTree(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCellLocatorInterpolatedVelocityField(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTemporalStreamTracer(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkParticleTracerBase(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkParticleTracer(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStreaklineFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkParticlePathFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTemporalInterpolatedVelocityField(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCachingInterpolatedVelocityField(PyObject *, const char *); }

static PyMethodDef PyvtkFiltersFlowPathsPython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

extern  "C" {VTK_ABI_EXPORT void real_initvtkFiltersFlowPathsPython(const char *modulename); }

void real_initvtkFiltersFlowPathsPython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkFiltersFlowPathsPython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkFiltersFlowPathsPython");
    }
  PyVTKAddFile_vtkAbstractInterpolatedVelocityField(d, modulename);
  PyVTKAddFile_vtkAMRInterpolatedVelocityField(d, modulename);
  PyVTKAddFile_vtkCompositeInterpolatedVelocityField(d, modulename);
  PyVTKAddFile_vtkDashedStreamLine(d, modulename);
  PyVTKAddFile_vtkInterpolatedVelocityField(d, modulename);
  PyVTKAddFile_vtkStreamer(d, modulename);
  PyVTKAddFile_vtkStreamLine(d, modulename);
  PyVTKAddFile_vtkStreamPoints(d, modulename);
  PyVTKAddFile_vtkStreamTracer(d, modulename);
  PyVTKAddFile_vtkModifiedBSPTree(d, modulename);
  PyVTKAddFile_vtkCellLocatorInterpolatedVelocityField(d, modulename);
  PyVTKAddFile_vtkTemporalStreamTracer(d, modulename);
  PyVTKAddFile_vtkParticleTracerBase(d, modulename);
  PyVTKAddFile_vtkParticleTracer(d, modulename);
  PyVTKAddFile_vtkStreaklineFilter(d, modulename);
  PyVTKAddFile_vtkParticlePathFilter(d, modulename);
  PyVTKAddFile_vtkTemporalInterpolatedVelocityField(d, modulename);
  PyVTKAddFile_vtkCachingInterpolatedVelocityField(d, modulename);
}

