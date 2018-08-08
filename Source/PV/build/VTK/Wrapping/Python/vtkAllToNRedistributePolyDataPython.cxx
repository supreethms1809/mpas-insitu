// python wrapper for vtkAllToNRedistributePolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAllToNRedistributePolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAllToNRedistributePolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAllToNRedistributePolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWeightedRedistributePolyDataNew
extern "C" { PyObject *PyVTKClass_vtkWeightedRedistributePolyDataNew(const char *); }
#define DECLARED_PyVTKClass_vtkWeightedRedistributePolyDataNew
#endif

static const char **PyvtkAllToNRedistributePolyData_Doc();


static PyObject *
PyvtkAllToNRedistributePolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAllToNRedistributePolyData *op = static_cast<vtkAllToNRedistributePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAllToNRedistributePolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAllToNRedistributePolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAllToNRedistributePolyData *op = static_cast<vtkAllToNRedistributePolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAllToNRedistributePolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAllToNRedistributePolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAllToNRedistributePolyData *op = static_cast<vtkAllToNRedistributePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAllToNRedistributePolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAllToNRedistributePolyData::NewInstance());

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
PyvtkAllToNRedistributePolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAllToNRedistributePolyData *tempr = vtkAllToNRedistributePolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAllToNRedistributePolyData_SetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAllToNRedistributePolyData *op = static_cast<vtkAllToNRedistributePolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfProcesses(temp0);
      }
    else
      {
      op->vtkAllToNRedistributePolyData::SetNumberOfProcesses(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAllToNRedistributePolyData_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAllToNRedistributePolyData *op = static_cast<vtkAllToNRedistributePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses() :
      op->vtkAllToNRedistributePolyData::GetNumberOfProcesses());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAllToNRedistributePolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkAllToNRedistributePolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAllToNRedistributePolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAllToNRedistributePolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAllToNRedistributePolyData\nC++: vtkAllToNRedistributePolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAllToNRedistributePolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAllToNRedistributePolyData\nC++: vtkAllToNRedistributePolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfProcesses", PyvtkAllToNRedistributePolyData_SetNumberOfProcesses, METH_VARARGS,
   (char*)"V.SetNumberOfProcesses(int)\nC++: void SetNumberOfProcesses(int a)\n\n"},
  {(char*)"GetNumberOfProcesses", PyvtkAllToNRedistributePolyData_GetNumberOfProcesses, METH_VARARGS,
   (char*)"V.GetNumberOfProcesses() -> int\nC++: int GetNumberOfProcesses()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAllToNRedistributePolyData_StaticNew()
{
  return vtkAllToNRedistributePolyData::New();
}

PyObject *PyVTKClass_vtkAllToNRedistributePolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAllToNRedistributePolyData_StaticNew,
    PyvtkAllToNRedistributePolyData_Methods,
    "vtkAllToNRedistributePolyData", modulename,
    NULL, NULL,
    PyvtkAllToNRedistributePolyData_Doc(),
    PyVTKClass_vtkWeightedRedistributePolyDataNew(modulename));
  return cls;
}

const char **PyvtkAllToNRedistributePolyData_Doc()
{
  static const char *docstring[] = {
    "vtkAllToNRedistributePolyData - do balanced redistribution of cells\non from all to n processors\n\n",
    "Superclass: vtkWeightedRedistributePolyData\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAllToNRedistributePolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAllToNRedistributePolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAllToNRedistributePolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

