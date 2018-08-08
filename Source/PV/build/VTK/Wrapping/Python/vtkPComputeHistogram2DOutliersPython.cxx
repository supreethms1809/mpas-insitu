// python wrapper for vtkPComputeHistogram2DOutliers
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPComputeHistogram2DOutliers.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPComputeHistogram2DOutliers(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPComputeHistogram2DOutliersNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkComputeHistogram2DOutliersNew
extern "C" { PyObject *PyVTKClass_vtkComputeHistogram2DOutliersNew(const char *); }
#define DECLARED_PyVTKClass_vtkComputeHistogram2DOutliersNew
#endif

static const char **PyvtkPComputeHistogram2DOutliers_Doc();


static PyObject *
PyvtkPComputeHistogram2DOutliers_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPComputeHistogram2DOutliers *op = static_cast<vtkPComputeHistogram2DOutliers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPComputeHistogram2DOutliers::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPComputeHistogram2DOutliers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPComputeHistogram2DOutliers *op = static_cast<vtkPComputeHistogram2DOutliers *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPComputeHistogram2DOutliers::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPComputeHistogram2DOutliers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPComputeHistogram2DOutliers *op = static_cast<vtkPComputeHistogram2DOutliers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPComputeHistogram2DOutliers *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPComputeHistogram2DOutliers::NewInstance());

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
PyvtkPComputeHistogram2DOutliers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPComputeHistogram2DOutliers *tempr = vtkPComputeHistogram2DOutliers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPComputeHistogram2DOutliers_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPComputeHistogram2DOutliers *op = static_cast<vtkPComputeHistogram2DOutliers *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPComputeHistogram2DOutliers::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPComputeHistogram2DOutliers_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPComputeHistogram2DOutliers *op = static_cast<vtkPComputeHistogram2DOutliers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPComputeHistogram2DOutliers::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPComputeHistogram2DOutliers_Methods[] = {
  {(char*)"GetClassName", PyvtkPComputeHistogram2DOutliers_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPComputeHistogram2DOutliers_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPComputeHistogram2DOutliers_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPComputeHistogram2DOutliers\nC++: vtkPComputeHistogram2DOutliers *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPComputeHistogram2DOutliers_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPComputeHistogram2DOutliers\nC++: vtkPComputeHistogram2DOutliers *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPComputeHistogram2DOutliers_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\n"},
  {(char*)"GetController", PyvtkPComputeHistogram2DOutliers_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPComputeHistogram2DOutliers_StaticNew()
{
  return vtkPComputeHistogram2DOutliers::New();
}

PyObject *PyVTKClass_vtkPComputeHistogram2DOutliersNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPComputeHistogram2DOutliers_StaticNew,
    PyvtkPComputeHistogram2DOutliers_Methods,
    "vtkPComputeHistogram2DOutliers", modulename,
    NULL, NULL,
    PyvtkPComputeHistogram2DOutliers_Doc(),
    PyVTKClass_vtkComputeHistogram2DOutliersNew(modulename));
  return cls;
}

const char **PyvtkPComputeHistogram2DOutliers_Doc()
{
  static const char *docstring[] = {
    "vtkPComputeHistogram2DOutliers - extract outlier rows from\n\n",
    "Superclass: vtkComputeHistogram2DOutliers\n\n",
    "This class does exactly the same this as\nvtkComputeHistogram2DOutliers,\n but does it in a multi-process environment.  After each node\n computes their own local outliers, class does an AllGather\n that distributes the outliers to every node.  This could probably\njust\n be a Gather onto the root node instead.\n\n\n After this operation, the row selection will only contain local row\nids,\n since I'm not su",
    "re how to deal with distributed ids.\n\nSee Also:\n\n\n vtkComputeHistogram2DOutliers\n\nThanks:\n\n\n Developed by David Feng at Sandia National Laboratories\n----------------------------------------------------------------------\n    --------\n----------------------------------------------------------------------\n    --------\n----------------------------------------------------------------------\n    --------",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPComputeHistogram2DOutliers(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPComputeHistogram2DOutliersNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPComputeHistogram2DOutliers", o) != 0)
    {
    Py_DECREF(o);
    }

}

