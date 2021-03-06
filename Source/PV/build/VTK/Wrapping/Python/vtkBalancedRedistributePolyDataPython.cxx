// python wrapper for vtkBalancedRedistributePolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBalancedRedistributePolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBalancedRedistributePolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBalancedRedistributePolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWeightedRedistributePolyDataNew
extern "C" { PyObject *PyVTKClass_vtkWeightedRedistributePolyDataNew(const char *); }
#define DECLARED_PyVTKClass_vtkWeightedRedistributePolyDataNew
#endif

static const char **PyvtkBalancedRedistributePolyData_Doc();


static PyObject *
PyvtkBalancedRedistributePolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalancedRedistributePolyData *op = static_cast<vtkBalancedRedistributePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBalancedRedistributePolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalancedRedistributePolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalancedRedistributePolyData *op = static_cast<vtkBalancedRedistributePolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBalancedRedistributePolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalancedRedistributePolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalancedRedistributePolyData *op = static_cast<vtkBalancedRedistributePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBalancedRedistributePolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBalancedRedistributePolyData::NewInstance());

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
PyvtkBalancedRedistributePolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBalancedRedistributePolyData *tempr = vtkBalancedRedistributePolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBalancedRedistributePolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkBalancedRedistributePolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBalancedRedistributePolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBalancedRedistributePolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBalancedRedistributePolyData\nC++: vtkBalancedRedistributePolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBalancedRedistributePolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBalancedRedistributePolyData\nC++: vtkBalancedRedistributePolyData *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBalancedRedistributePolyData_StaticNew()
{
  return vtkBalancedRedistributePolyData::New();
}

PyObject *PyVTKClass_vtkBalancedRedistributePolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBalancedRedistributePolyData_StaticNew,
    PyvtkBalancedRedistributePolyData_Methods,
    "vtkBalancedRedistributePolyData", modulename,
    NULL, NULL,
    PyvtkBalancedRedistributePolyData_Doc(),
    PyVTKClass_vtkWeightedRedistributePolyDataNew(modulename));
  return cls;
}

const char **PyvtkBalancedRedistributePolyData_Doc()
{
  static const char *docstring[] = {
    "vtkBalancedRedistributePolyData - do balance of cells on processors\n\n",
    "Superclass: vtkWeightedRedistributePolyData\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBalancedRedistributePolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBalancedRedistributePolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBalancedRedistributePolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

