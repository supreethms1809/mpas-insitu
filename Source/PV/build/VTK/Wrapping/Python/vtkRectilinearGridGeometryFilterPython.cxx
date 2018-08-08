// python wrapper for vtkRectilinearGridGeometryFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRectilinearGridGeometryFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRectilinearGridGeometryFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRectilinearGridGeometryFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkRectilinearGridGeometryFilter_Doc();


static PyObject *
PyvtkRectilinearGridGeometryFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridGeometryFilter *op = static_cast<vtkRectilinearGridGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRectilinearGridGeometryFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridGeometryFilter *op = static_cast<vtkRectilinearGridGeometryFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRectilinearGridGeometryFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridGeometryFilter *op = static_cast<vtkRectilinearGridGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRectilinearGridGeometryFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRectilinearGridGeometryFilter::NewInstance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
        {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
        }
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridGeometryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRectilinearGridGeometryFilter *tempr = vtkRectilinearGridGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridGeometryFilter_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridGeometryFilter *op = static_cast<vtkRectilinearGridGeometryFilter *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkRectilinearGridGeometryFilter::GetExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridGeometryFilter_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridGeometryFilter *op = static_cast<vtkRectilinearGridGeometryFilter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkRectilinearGridGeometryFilter::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGridGeometryFilter_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridGeometryFilter *op = static_cast<vtkRectilinearGridGeometryFilter *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetExtent(temp0);
      }
    else
      {
      op->vtkRectilinearGridGeometryFilter::SetExtent(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGridGeometryFilter_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkRectilinearGridGeometryFilter_SetExtent_s1(self, args);
    case 1:
      return PyvtkRectilinearGridGeometryFilter_SetExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return NULL;
}


static PyMethodDef PyvtkRectilinearGridGeometryFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkRectilinearGridGeometryFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRectilinearGridGeometryFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRectilinearGridGeometryFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRectilinearGridGeometryFilter\nC++: vtkRectilinearGridGeometryFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRectilinearGridGeometryFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRectilinearGridGeometryFilter\nC++: vtkRectilinearGridGeometryFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetExtent", PyvtkRectilinearGridGeometryFilter_GetExtent, METH_VARARGS,
   (char*)"V.GetExtent() -> (int, int, int, int, int, int)\nC++: int *GetExtent()\n\nGet the extent in topological coordinate range (imin,imax,\njmin,jmax, kmin,kmax).\n"},
  {(char*)"SetExtent", PyvtkRectilinearGridGeometryFilter_SetExtent, METH_VARARGS,
   (char*)"V.SetExtent(int, int, int, int, int, int)\nC++: void SetExtent(int iMin, int iMax, int jMin, int jMax,\n    int kMin, int kMax)\nV.SetExtent([int, int, int, int, int, int])\nC++: void SetExtent(int extent[6])\n\nSpecify (imin,imax, jmin,jmax, kmin,kmax) indices.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRectilinearGridGeometryFilter_StaticNew()
{
  return vtkRectilinearGridGeometryFilter::New();
}

PyObject *PyVTKClass_vtkRectilinearGridGeometryFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRectilinearGridGeometryFilter_StaticNew,
    PyvtkRectilinearGridGeometryFilter_Methods,
    "vtkRectilinearGridGeometryFilter", modulename,
    NULL, NULL,
    PyvtkRectilinearGridGeometryFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRectilinearGridGeometryFilter_Doc()
{
  static const char *docstring[] = {
    "vtkRectilinearGridGeometryFilter - extract geometry for a rectilinear\ngrid\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkRectilinearGridGeometryFilter is a filter that extracts geometry\nfrom a rectilinear grid. By specifying appropriate i-j-k indices, it\nis possible to extract a point, a curve, a surface, or a \"volume\".\nThe volume is actually a (n x m x o) region of points.\n\nThe extent specification is zero-offset. That is, the first k-plane\nin a 50x50x50 rectilinear grid is given by (0,49, 0,49, 0,0).\n\nCaveats:\n",
    "\nIf you don't know the dimensions of the input dataset, you can use a\nlarge number to specify extent (the number will be clamped\nappropriately). For example, if the dataset dimensions are 50x50x50,\nand you want a the fifth k-plane, you can use the extents (0,100,\n0,100, 4,4). The 100 will automatically be clamped to 49.\n\nSee Also:\n\nvtkGeometryFilter vtkExtractGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRectilinearGridGeometryFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRectilinearGridGeometryFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectilinearGridGeometryFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

