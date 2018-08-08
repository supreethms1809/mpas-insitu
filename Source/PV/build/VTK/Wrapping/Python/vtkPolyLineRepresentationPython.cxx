// python wrapper for vtkPolyLineRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPolyLineRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPolyLineRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPolyLineRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCurveRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkCurveRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkCurveRepresentationNew
#endif

static const char **PyvtkPolyLineRepresentation_Doc();


static PyObject *
PyvtkPolyLineRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPolyLineRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyLineRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyLineRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyLineRepresentation::NewInstance());

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
PyvtkPolyLineRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPolyLineRepresentation *tempr = vtkPolyLineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GetPolyData(temp0);
      }
    else
      {
      op->vtkPolyLineRepresentation::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_SetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfHandles(temp0);
      }
    else
      {
      op->vtkPolyLineRepresentation::SetNumberOfHandles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_GetHandlePositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetHandlePositions() :
      op->vtkPolyLineRepresentation::GetHandlePositions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_GetSummedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSummedLength() :
      op->vtkPolyLineRepresentation::GetSummedLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_InitializeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->InitializeHandles(temp0);
      }
    else
      {
      op->vtkPolyLineRepresentation::InitializeHandles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyLineRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyLineRepresentation *op = static_cast<vtkPolyLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkPolyLineRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyLineRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyLineRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyLineRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyLineRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPolyLineRepresentation\nC++: vtkPolyLineRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolyLineRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyLineRepresentation\nC++: vtkPolyLineRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetPolyData", PyvtkPolyLineRepresentation_GetPolyData, METH_VARARGS,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the poly line.\npolydata consists of points and line segments between consecutive\npoints. Points are guaranteed to be up-to-date when either the\nInteractionEvent or EndInteraction events are invoked. The user\nprovides the vtkPolyData and the points and polyline are added to\nit.\n"},
  {(char*)"SetNumberOfHandles", PyvtkPolyLineRepresentation_SetNumberOfHandles, METH_VARARGS,
   (char*)"V.SetNumberOfHandles(int)\nC++: virtual void SetNumberOfHandles(int npts)\n\nSet the number of handles for this widget.\n"},
  {(char*)"GetHandlePositions", PyvtkPolyLineRepresentation_GetHandlePositions, METH_VARARGS,
   (char*)"V.GetHandlePositions() -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetHandlePositions()\n\nGet the positions of the handles.\n"},
  {(char*)"GetSummedLength", PyvtkPolyLineRepresentation_GetSummedLength, METH_VARARGS,
   (char*)"V.GetSummedLength() -> float\nC++: double GetSummedLength()\n\nGet the true length of the poly line. Calculated as the summed\nlengths of the individual straight line segments.\n"},
  {(char*)"InitializeHandles", PyvtkPolyLineRepresentation_InitializeHandles, METH_VARARGS,
   (char*)"V.InitializeHandles(vtkPoints)\nC++: virtual void InitializeHandles(vtkPoints *points)\n\nConvenience method to allocate and set the handles from a\nvtkPoints instance.  If the first and last points are the same,\nthe poly line sets Closed to on and disregards the last point,\notherwise Closed remains unchanged.\n"},
  {(char*)"BuildRepresentation", PyvtkPolyLineRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nBuild the representation for the poly line.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyLineRepresentation_StaticNew()
{
  return vtkPolyLineRepresentation::New();
}

PyObject *PyVTKClass_vtkPolyLineRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyLineRepresentation_StaticNew,
    PyvtkPolyLineRepresentation_Methods,
    "vtkPolyLineRepresentation", modulename,
    NULL, NULL,
    PyvtkPolyLineRepresentation_Doc(),
    PyVTKClass_vtkCurveRepresentationNew(modulename));
  return cls;
}

const char **PyvtkPolyLineRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkPolyLineRepresentation - vtkWidgetRepresentation for a poly line.\n\n",
    "Superclass: vtkCurveRepresentation\n\n",
    "vtkPolyLineRepresentation is a vtkCurveRepresentation for a poly\nline. This 3D widget defines a poly line that can be interactively\nplaced in a scene. The poly line has handles, the number of which can\nbe changed, plus the widget can be picked on the poly line itself to\ntranslate or rotate it in the scene. Based on vtkCurveRepresentation\n\nSee Also:\n\nvtkSplineRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyLineRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyLineRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyLineRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

