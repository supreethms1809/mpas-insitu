// python wrapper for vtkPParticleTracerBase
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPParticleTracerBase.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPParticleTracerBase(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPParticleTracerBaseNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkParticleTracerBaseNew
extern "C" { PyObject *PyVTKClass_vtkParticleTracerBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkParticleTracerBaseNew
#endif

static const char **PyvtkPParticleTracerBase_Doc();


static PyObject *
PyvtkPParticleTracerBase_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPParticleTracerBase *op = static_cast<vtkPParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPParticleTracerBase::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPParticleTracerBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPParticleTracerBase *op = static_cast<vtkPParticleTracerBase *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPParticleTracerBase::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPParticleTracerBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPParticleTracerBase *op = static_cast<vtkPParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPParticleTracerBase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPParticleTracerBase::NewInstance());

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
PyvtkPParticleTracerBase_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPParticleTracerBase *tempr = vtkPParticleTracerBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPParticleTracerBase_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPParticleTracerBase *op = static_cast<vtkPParticleTracerBase *>(vp);

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
      op->vtkPParticleTracerBase::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPParticleTracerBase_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPParticleTracerBase *op = static_cast<vtkPParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPParticleTracerBase::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPParticleTracerBase_Methods[] = {
  {(char*)"GetClassName", PyvtkPParticleTracerBase_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPParticleTracerBase_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPParticleTracerBase_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPParticleTracerBase\nC++: vtkPParticleTracerBase *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPParticleTracerBase_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPParticleTracerBase\nC++: vtkPParticleTracerBase *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPParticleTracerBase_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(\n    vtkMultiProcessController *controller)\n\nSet/Get the controller used when sending particles between\nprocesses The controller must be an instance of vtkMPIController.\n"},
  {(char*)"GetController", PyvtkPParticleTracerBase_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get the controller used when sending particles between\nprocesses The controller must be an instance of vtkMPIController.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPParticleTracerBaseNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPParticleTracerBase_Methods,
    "vtkPParticleTracerBase", modulename,
    NULL, NULL,
    PyvtkPParticleTracerBase_Doc(),
    PyVTKClass_vtkParticleTracerBaseNew(modulename));
  return cls;
}

const char **PyvtkPParticleTracerBase_Doc()
{
  static const char *docstring[] = {
    "vtkParticleTracerBase - A parallel particle tracer for vector fields\n\n",
    "Superclass: vtkParticleTracerBase\n\n",
    "vtkPParticleTracerBase is the base class for parallel filters that\nadvect particles in a vector field. Note that the input vtkPointData\nstructure must be identical on all datasets.\n\nSee Also:\n\nvtkRibbonFilter vtkRuledSurfaceFilter vtkInitialValueProblemSolver\nvtkRungeKutta2 vtkRungeKutta4 vtkRungeKutta45 vtkStreamTracer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPParticleTracerBase(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPParticleTracerBaseNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPParticleTracerBase", o) != 0)
    {
    Py_DECREF(o);
    }

}

