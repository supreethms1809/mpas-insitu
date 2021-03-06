// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkBandedPolyDataContourFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkButterflySubdivisionFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDijkstraGraphGeodesicPath(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDijkstraImageGeodesicPath(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkFillHolesFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGeodesicPath(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGraphGeodesicPath(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkLinearExtrusionFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkLinearSubdivisionFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkLoopSubdivisionFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPolyDataPointSampler(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkProjectedTexture(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkQuadRotationalExtrusionFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkRibbonFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkRotationalExtrusionFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkRuledSurfaceFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSelectEnclosedPoints(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSelectPolyData(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSpherePuzzleArrows(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSpherePuzzle(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSubdivideTetra(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkOutlineFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSectorSource(PyObject *, const char *); }

static PyMethodDef PyvtkFiltersModelingPython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

extern  "C" {VTK_ABI_EXPORT void real_initvtkFiltersModelingPython(const char *modulename); }

void real_initvtkFiltersModelingPython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkFiltersModelingPython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkFiltersModelingPython");
    }
  PyVTKAddFile_vtkBandedPolyDataContourFilter(d, modulename);
  PyVTKAddFile_vtkButterflySubdivisionFilter(d, modulename);
  PyVTKAddFile_vtkDijkstraGraphGeodesicPath(d, modulename);
  PyVTKAddFile_vtkDijkstraImageGeodesicPath(d, modulename);
  PyVTKAddFile_vtkFillHolesFilter(d, modulename);
  PyVTKAddFile_vtkGeodesicPath(d, modulename);
  PyVTKAddFile_vtkGraphGeodesicPath(d, modulename);
  PyVTKAddFile_vtkLinearExtrusionFilter(d, modulename);
  PyVTKAddFile_vtkLinearSubdivisionFilter(d, modulename);
  PyVTKAddFile_vtkLoopSubdivisionFilter(d, modulename);
  PyVTKAddFile_vtkPolyDataPointSampler(d, modulename);
  PyVTKAddFile_vtkProjectedTexture(d, modulename);
  PyVTKAddFile_vtkQuadRotationalExtrusionFilter(d, modulename);
  PyVTKAddFile_vtkRibbonFilter(d, modulename);
  PyVTKAddFile_vtkRotationalExtrusionFilter(d, modulename);
  PyVTKAddFile_vtkRuledSurfaceFilter(d, modulename);
  PyVTKAddFile_vtkSelectEnclosedPoints(d, modulename);
  PyVTKAddFile_vtkSelectPolyData(d, modulename);
  PyVTKAddFile_vtkSpherePuzzleArrows(d, modulename);
  PyVTKAddFile_vtkSpherePuzzle(d, modulename);
  PyVTKAddFile_vtkSubdivideTetra(d, modulename);
  PyVTKAddFile_vtkOutlineFilter(d, modulename);
  PyVTKAddFile_vtkSectorSource(d, modulename);
}

