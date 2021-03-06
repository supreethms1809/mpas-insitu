// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAppendFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAppendPolyData(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAppendSelection(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkArrayCalculator(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAssignAttribute(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAttributeDataToFieldDataFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCellDataToPointData(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCleanPolyData(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkClipPolyData(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCompositeDataProbeFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkConnectivityFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkContourFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkContourGrid(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDataObjectGenerator(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDataObjectToDataSetFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDataSetEdgeSubdivisionCriterion(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDataSetToDataObjectFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDecimatePolylineFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDecimatePro(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDelaunay2D(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDelaunay3D(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkElevationFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExecutionTimer(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkFeatureEdges(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkFieldDataToAttributeDataFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGlyph2D(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGlyph3D(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkHedgeHog(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkHull(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkIdFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMarchingCubes(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMarchingSquares(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMaskFields(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMaskPoints(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMaskPolyData(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMassProperties(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMergeDataObjectFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMergeFields(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMergeFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPointDataToCellData(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPolyDataConnectivityFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPolyDataNormals(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkProbeFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkQuadricClustering(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkQuadricDecimation(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkRearrangeFields(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkReverseSense(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSimpleElevationFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSmoothPolyDataFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStripper(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStructuredGridOutlineFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSynchronizedTemplates2D(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSynchronizedTemplates3D(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSynchronizedTemplatesCutter3D(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTensorGlyph(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkThreshold(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkThresholdPoints(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTransposeTable(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTriangleFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTubeFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkVectorDot(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkVectorNorm(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkWindowedSincPolyDataFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCutter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCompositeCutter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGridSynchronizedTemplates3D(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkRectilinearSynchronizedTemplates(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkEdgeSubdivisionCriterion(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStreamingTessellator(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImplicitPolyDataDistance(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStreamerBase(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCenterOfMass(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGhostArray(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageAppend(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStructuredGridAppend(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAppendCompositeDataLeaves(PyObject *, const char *); }

static PyMethodDef PyvtkFiltersCorePython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

extern  "C" {VTK_ABI_EXPORT void real_initvtkFiltersCorePython(const char *modulename); }

void real_initvtkFiltersCorePython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkFiltersCorePython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkFiltersCorePython");
    }
  PyVTKAddFile_vtkAppendFilter(d, modulename);
  PyVTKAddFile_vtkAppendPolyData(d, modulename);
  PyVTKAddFile_vtkAppendSelection(d, modulename);
  PyVTKAddFile_vtkArrayCalculator(d, modulename);
  PyVTKAddFile_vtkAssignAttribute(d, modulename);
  PyVTKAddFile_vtkAttributeDataToFieldDataFilter(d, modulename);
  PyVTKAddFile_vtkCellDataToPointData(d, modulename);
  PyVTKAddFile_vtkCleanPolyData(d, modulename);
  PyVTKAddFile_vtkClipPolyData(d, modulename);
  PyVTKAddFile_vtkCompositeDataProbeFilter(d, modulename);
  PyVTKAddFile_vtkConnectivityFilter(d, modulename);
  PyVTKAddFile_vtkContourFilter(d, modulename);
  PyVTKAddFile_vtkContourGrid(d, modulename);
  PyVTKAddFile_vtkDataObjectGenerator(d, modulename);
  PyVTKAddFile_vtkDataObjectToDataSetFilter(d, modulename);
  PyVTKAddFile_vtkDataSetEdgeSubdivisionCriterion(d, modulename);
  PyVTKAddFile_vtkDataSetToDataObjectFilter(d, modulename);
  PyVTKAddFile_vtkDecimatePolylineFilter(d, modulename);
  PyVTKAddFile_vtkDecimatePro(d, modulename);
  PyVTKAddFile_vtkDelaunay2D(d, modulename);
  PyVTKAddFile_vtkDelaunay3D(d, modulename);
  PyVTKAddFile_vtkElevationFilter(d, modulename);
  PyVTKAddFile_vtkExecutionTimer(d, modulename);
  PyVTKAddFile_vtkFeatureEdges(d, modulename);
  PyVTKAddFile_vtkFieldDataToAttributeDataFilter(d, modulename);
  PyVTKAddFile_vtkGlyph2D(d, modulename);
  PyVTKAddFile_vtkGlyph3D(d, modulename);
  PyVTKAddFile_vtkHedgeHog(d, modulename);
  PyVTKAddFile_vtkHull(d, modulename);
  PyVTKAddFile_vtkIdFilter(d, modulename);
  PyVTKAddFile_vtkMarchingCubes(d, modulename);
  PyVTKAddFile_vtkMarchingSquares(d, modulename);
  PyVTKAddFile_vtkMaskFields(d, modulename);
  PyVTKAddFile_vtkMaskPoints(d, modulename);
  PyVTKAddFile_vtkMaskPolyData(d, modulename);
  PyVTKAddFile_vtkMassProperties(d, modulename);
  PyVTKAddFile_vtkMergeDataObjectFilter(d, modulename);
  PyVTKAddFile_vtkMergeFields(d, modulename);
  PyVTKAddFile_vtkMergeFilter(d, modulename);
  PyVTKAddFile_vtkPointDataToCellData(d, modulename);
  PyVTKAddFile_vtkPolyDataConnectivityFilter(d, modulename);
  PyVTKAddFile_vtkPolyDataNormals(d, modulename);
  PyVTKAddFile_vtkProbeFilter(d, modulename);
  PyVTKAddFile_vtkQuadricClustering(d, modulename);
  PyVTKAddFile_vtkQuadricDecimation(d, modulename);
  PyVTKAddFile_vtkRearrangeFields(d, modulename);
  PyVTKAddFile_vtkReverseSense(d, modulename);
  PyVTKAddFile_vtkSimpleElevationFilter(d, modulename);
  PyVTKAddFile_vtkSmoothPolyDataFilter(d, modulename);
  PyVTKAddFile_vtkStripper(d, modulename);
  PyVTKAddFile_vtkStructuredGridOutlineFilter(d, modulename);
  PyVTKAddFile_vtkSynchronizedTemplates2D(d, modulename);
  PyVTKAddFile_vtkSynchronizedTemplates3D(d, modulename);
  PyVTKAddFile_vtkSynchronizedTemplatesCutter3D(d, modulename);
  PyVTKAddFile_vtkTensorGlyph(d, modulename);
  PyVTKAddFile_vtkThreshold(d, modulename);
  PyVTKAddFile_vtkThresholdPoints(d, modulename);
  PyVTKAddFile_vtkTransposeTable(d, modulename);
  PyVTKAddFile_vtkTriangleFilter(d, modulename);
  PyVTKAddFile_vtkTubeFilter(d, modulename);
  PyVTKAddFile_vtkVectorDot(d, modulename);
  PyVTKAddFile_vtkVectorNorm(d, modulename);
  PyVTKAddFile_vtkWindowedSincPolyDataFilter(d, modulename);
  PyVTKAddFile_vtkCutter(d, modulename);
  PyVTKAddFile_vtkCompositeCutter(d, modulename);
  PyVTKAddFile_vtkGridSynchronizedTemplates3D(d, modulename);
  PyVTKAddFile_vtkRectilinearSynchronizedTemplates(d, modulename);
  PyVTKAddFile_vtkEdgeSubdivisionCriterion(d, modulename);
  PyVTKAddFile_vtkStreamingTessellator(d, modulename);
  PyVTKAddFile_vtkImplicitPolyDataDistance(d, modulename);
  PyVTKAddFile_vtkStreamerBase(d, modulename);
  PyVTKAddFile_vtkCenterOfMass(d, modulename);
  PyVTKAddFile_vtkGhostArray(d, modulename);
  PyVTKAddFile_vtkImageAppend(d, modulename);
  PyVTKAddFile_vtkStructuredGridAppend(d, modulename);
  PyVTKAddFile_vtkAppendCompositeDataLeaves(d, modulename);
}

