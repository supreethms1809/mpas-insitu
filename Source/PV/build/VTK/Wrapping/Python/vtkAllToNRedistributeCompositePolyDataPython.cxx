// python wrapper for vtkAllToNRedistributeCompositePolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAllToNRedistributeCompositePolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAllToNRedistributeCompositePolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAllToNRedistributeCompositePolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkAllToNRedistributeCompositePolyData_Doc();


static PyObject *
PyvtkAllToNRedistributeCompositePolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAllToNRedistributeCompositePolyData *op = static_cast<vtkAllToNRedistributeCompositePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAllToNRedistributeCompositePolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAllToNRedistributeCompositePolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAllToNRedistributeCompositePolyData *op = static_cast<vtkAllToNRedistributeCompositePolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAllToNRedistributeCompositePolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAllToNRedistributeCompositePolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAllToNRedistributeCompositePolyData *op = static_cast<vtkAllToNRedistributeCompositePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAllToNRedistributeCompositePolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAllToNRedistributeCompositePolyData::NewInstance());

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
PyvtkAllToNRedistributeCompositePolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAllToNRedistributeCompositePolyData *tempr = vtkAllToNRedistributeCompositePolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAllToNRedistributeCompositePolyData_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAllToNRedistributeCompositePolyData *op = static_cast<vtkAllToNRedistributeCompositePolyData *>(vp);

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
      op->vtkAllToNRedistributeCompositePolyData::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAllToNRedistributeCompositePolyData_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAllToNRedistributeCompositePolyData *op = static_cast<vtkAllToNRedistributeCompositePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAllToNRedistributeCompositePolyData::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAllToNRedistributeCompositePolyData_SetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAllToNRedistributeCompositePolyData *op = static_cast<vtkAllToNRedistributeCompositePolyData *>(vp);

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
      op->vtkAllToNRedistributeCompositePolyData::SetNumberOfProcesses(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAllToNRedistributeCompositePolyData_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAllToNRedistributeCompositePolyData *op = static_cast<vtkAllToNRedistributeCompositePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses() :
      op->vtkAllToNRedistributeCompositePolyData::GetNumberOfProcesses());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAllToNRedistributeCompositePolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkAllToNRedistributeCompositePolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAllToNRedistributeCompositePolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAllToNRedistributeCompositePolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAllToNRedistributeCompositePolyData\nC++: vtkAllToNRedistributeCompositePolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAllToNRedistributeCompositePolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkAllToNRedistributeCompositePolyData\nC++: vtkAllToNRedistributeCompositePolyData *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkAllToNRedistributeCompositePolyData_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nThe filter needs a controller to determine which process it is\nin.\n"},
  {(char*)"GetController", PyvtkAllToNRedistributeCompositePolyData_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nThe filter needs a controller to determine which process it is\nin.\n"},
  {(char*)"SetNumberOfProcesses", PyvtkAllToNRedistributeCompositePolyData_SetNumberOfProcesses, METH_VARARGS,
   (char*)"V.SetNumberOfProcesses(int)\nC++: void SetNumberOfProcesses(int a)\n\n"},
  {(char*)"GetNumberOfProcesses", PyvtkAllToNRedistributeCompositePolyData_GetNumberOfProcesses, METH_VARARGS,
   (char*)"V.GetNumberOfProcesses() -> int\nC++: int GetNumberOfProcesses()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAllToNRedistributeCompositePolyData_StaticNew()
{
  return vtkAllToNRedistributeCompositePolyData::New();
}

PyObject *PyVTKClass_vtkAllToNRedistributeCompositePolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAllToNRedistributeCompositePolyData_StaticNew,
    PyvtkAllToNRedistributeCompositePolyData_Methods,
    "vtkAllToNRedistributeCompositePolyData", modulename,
    NULL, NULL,
    PyvtkAllToNRedistributeCompositePolyData_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAllToNRedistributeCompositePolyData_Doc()
{
  static const char *docstring[] = {
    "vtkAllToNRedistributeCompositePolyData\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkAllToNRedistributePolyData extension that is composite data aware.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAllToNRedistributeCompositePolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAllToNRedistributeCompositePolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAllToNRedistributeCompositePolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

