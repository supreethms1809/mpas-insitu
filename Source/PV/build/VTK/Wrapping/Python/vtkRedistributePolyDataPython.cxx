// python wrapper for vtkRedistributePolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRedistributePolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRedistributePolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRedistributePolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkRedistributePolyData_Doc();


static PyObject *
PyvtkRedistributePolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRedistributePolyData *op = static_cast<vtkRedistributePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRedistributePolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRedistributePolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRedistributePolyData *op = static_cast<vtkRedistributePolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRedistributePolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRedistributePolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRedistributePolyData *op = static_cast<vtkRedistributePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRedistributePolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRedistributePolyData::NewInstance());

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
PyvtkRedistributePolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRedistributePolyData *tempr = vtkRedistributePolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRedistributePolyData_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRedistributePolyData *op = static_cast<vtkRedistributePolyData *>(vp);

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
      op->vtkRedistributePolyData::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRedistributePolyData_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRedistributePolyData *op = static_cast<vtkRedistributePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkRedistributePolyData::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRedistributePolyData_GetColorProc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorProc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRedistributePolyData *op = static_cast<vtkRedistributePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetColorProc() :
      op->vtkRedistributePolyData::GetColorProc());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRedistributePolyData_SetColorProc_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorProc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRedistributePolyData *op = static_cast<vtkRedistributePolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorProc(temp0);
      }
    else
      {
      op->vtkRedistributePolyData::SetColorProc(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRedistributePolyData_SetColorProc_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorProc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRedistributePolyData *op = static_cast<vtkRedistributePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorProc();
      }
    else
      {
      op->vtkRedistributePolyData::SetColorProc();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRedistributePolyData_SetColorProc(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRedistributePolyData_SetColorProc_s1(self, args);
    case 0:
      return PyvtkRedistributePolyData_SetColorProc_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColorProc");
  return NULL;
}



static PyObject *
PyvtkRedistributePolyData_SetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRedistributePolyData *op = static_cast<vtkRedistributePolyData *>(vp);

  vtkSocketController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSocketController"))
    {
    if (ap.IsBound())
      {
      op->SetSocketController(temp0);
      }
    else
      {
      op->vtkRedistributePolyData::SetSocketController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRedistributePolyData_SetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRedistributePolyData *op = static_cast<vtkRedistributePolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThrough(temp0);
      }
    else
      {
      op->vtkRedistributePolyData::SetPassThrough(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRedistributePolyData_GetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRedistributePolyData *op = static_cast<vtkRedistributePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassThrough() :
      op->vtkRedistributePolyData::GetPassThrough());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRedistributePolyData_PassThroughOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRedistributePolyData *op = static_cast<vtkRedistributePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughOn();
      }
    else
      {
      op->vtkRedistributePolyData::PassThroughOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRedistributePolyData_PassThroughOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRedistributePolyData *op = static_cast<vtkRedistributePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughOff();
      }
    else
      {
      op->vtkRedistributePolyData::PassThroughOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRedistributePolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkRedistributePolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRedistributePolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRedistributePolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRedistributePolyData\nC++: vtkRedistributePolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRedistributePolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRedistributePolyData\nC++: vtkRedistributePolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkRedistributePolyData_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nThe filter needs a controller to determine which process it is\nin.\n"},
  {(char*)"GetController", PyvtkRedistributePolyData_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nThe filter needs a controller to determine which process it is\nin.\n"},
  {(char*)"GetColorProc", PyvtkRedistributePolyData_GetColorProc, METH_VARARGS,
   (char*)"V.GetColorProc() -> int\nC++: int GetColorProc()\n\n"},
  {(char*)"SetColorProc", PyvtkRedistributePolyData_SetColorProc, METH_VARARGS,
   (char*)"V.SetColorProc(int)\nC++: void SetColorProc(int a)\nV.SetColorProc()\nC++: void SetColorProc()\n\n"},
  {(char*)"SetSocketController", PyvtkRedistributePolyData_SetSocketController, METH_VARARGS,
   (char*)"V.SetSocketController(vtkSocketController)\nC++: virtual void SetSocketController(vtkSocketController *)\n\nThese are here for ParaView compatibility. Not used.\n"},
  {(char*)"SetPassThrough", PyvtkRedistributePolyData_SetPassThrough, METH_VARARGS,
   (char*)"V.SetPassThrough(int)\nC++: virtual void SetPassThrough(int)\n\nThese are here for ParaView compatibility. Not used.\n"},
  {(char*)"GetPassThrough", PyvtkRedistributePolyData_GetPassThrough, METH_VARARGS,
   (char*)"V.GetPassThrough() -> int\nC++: virtual int GetPassThrough()\n\nThese are here for ParaView compatibility. Not used.\n"},
  {(char*)"PassThroughOn", PyvtkRedistributePolyData_PassThroughOn, METH_VARARGS,
   (char*)"V.PassThroughOn()\nC++: void PassThroughOn()\n\nThese are here for ParaView compatibility. Not used.\n"},
  {(char*)"PassThroughOff", PyvtkRedistributePolyData_PassThroughOff, METH_VARARGS,
   (char*)"V.PassThroughOff()\nC++: void PassThroughOff()\n\nThese are here for ParaView compatibility. Not used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRedistributePolyData_StaticNew()
{
  return vtkRedistributePolyData::New();
}

PyObject *PyVTKClass_vtkRedistributePolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRedistributePolyData_StaticNew,
    PyvtkRedistributePolyData_Methods,
    "vtkRedistributePolyData", modulename,
    NULL, NULL,
    PyvtkRedistributePolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRedistributePolyData_Doc()
{
  static const char *docstring[] = {
    "vtkRedistributePolyData - redistribute poly cells from other processes\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRedistributePolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRedistributePolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRedistributePolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

