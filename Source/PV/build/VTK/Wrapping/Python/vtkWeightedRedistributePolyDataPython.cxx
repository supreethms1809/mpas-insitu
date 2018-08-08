// python wrapper for vtkWeightedRedistributePolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkWeightedRedistributePolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWeightedRedistributePolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWeightedRedistributePolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRedistributePolyDataNew
extern "C" { PyObject *PyVTKClass_vtkRedistributePolyDataNew(const char *); }
#define DECLARED_PyVTKClass_vtkRedistributePolyDataNew
#endif

static const char **PyvtkWeightedRedistributePolyData_Doc();


static PyObject *
PyvtkWeightedRedistributePolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedRedistributePolyData *op = static_cast<vtkWeightedRedistributePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWeightedRedistributePolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedRedistributePolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedRedistributePolyData *op = static_cast<vtkWeightedRedistributePolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWeightedRedistributePolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedRedistributePolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedRedistributePolyData *op = static_cast<vtkWeightedRedistributePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWeightedRedistributePolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWeightedRedistributePolyData::NewInstance());

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
PyvtkWeightedRedistributePolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWeightedRedistributePolyData *tempr = vtkWeightedRedistributePolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedRedistributePolyData_SetWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedRedistributePolyData *op = static_cast<vtkWeightedRedistributePolyData *>(vp);

  int temp0;
  int temp1;
  float temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetWeights(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWeightedRedistributePolyData::SetWeights(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkWeightedRedistributePolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkWeightedRedistributePolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWeightedRedistributePolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWeightedRedistributePolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWeightedRedistributePolyData\nC++: vtkWeightedRedistributePolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWeightedRedistributePolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWeightedRedistributePolyData\nC++: vtkWeightedRedistributePolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWeights", PyvtkWeightedRedistributePolyData_SetWeights, METH_VARARGS,
   (char*)"V.SetWeights(int, int, float)\nC++: void SetWeights(int, int, float)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWeightedRedistributePolyData_StaticNew()
{
  return vtkWeightedRedistributePolyData::New();
}

PyObject *PyVTKClass_vtkWeightedRedistributePolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWeightedRedistributePolyData_StaticNew,
    PyvtkWeightedRedistributePolyData_Methods,
    "vtkWeightedRedistributePolyData", modulename,
    NULL, NULL,
    PyvtkWeightedRedistributePolyData_Doc(),
    PyVTKClass_vtkRedistributePolyDataNew(modulename));
  return cls;
}

const char **PyvtkWeightedRedistributePolyData_Doc()
{
  static const char *docstring[] = {
    "vtkWeightedRedistributePolyData - do weighted balance of cells on\nprocessors\n\n",
    "Superclass: vtkRedistributePolyData\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWeightedRedistributePolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWeightedRedistributePolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWeightedRedistributePolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

