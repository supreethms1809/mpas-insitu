// python wrapper for vtkPTemporalStreamTracer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPTemporalStreamTracer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPTemporalStreamTracer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPTemporalStreamTracerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTemporalStreamTracerNew
extern "C" { PyObject *PyVTKClass_vtkTemporalStreamTracerNew(const char *); }
#define DECLARED_PyVTKClass_vtkTemporalStreamTracerNew
#endif

static const char **PyvtkPTemporalStreamTracer_Doc();


static PyObject *
PyvtkPTemporalStreamTracer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTemporalStreamTracer *op = static_cast<vtkPTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPTemporalStreamTracer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPTemporalStreamTracer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTemporalStreamTracer *op = static_cast<vtkPTemporalStreamTracer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPTemporalStreamTracer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPTemporalStreamTracer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTemporalStreamTracer *op = static_cast<vtkPTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPTemporalStreamTracer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPTemporalStreamTracer::NewInstance());

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
PyvtkPTemporalStreamTracer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPTemporalStreamTracer *tempr = vtkPTemporalStreamTracer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPTemporalStreamTracer_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTemporalStreamTracer *op = static_cast<vtkPTemporalStreamTracer *>(vp);

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
      op->vtkPTemporalStreamTracer::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPTemporalStreamTracer_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTemporalStreamTracer *op = static_cast<vtkPTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPTemporalStreamTracer::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPTemporalStreamTracer_Methods[] = {
  {(char*)"GetClassName", PyvtkPTemporalStreamTracer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPTemporalStreamTracer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPTemporalStreamTracer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPTemporalStreamTracer\nC++: vtkPTemporalStreamTracer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPTemporalStreamTracer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPTemporalStreamTracer\nC++: vtkPTemporalStreamTracer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPTemporalStreamTracer_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(\n    vtkMultiProcessController *controller)\n\nSet/Get the controller used when sending particles between\nprocesses The controller must be an instance of vtkMPIController.\n"},
  {(char*)"GetController", PyvtkPTemporalStreamTracer_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get the controller used when sending particles between\nprocesses The controller must be an instance of vtkMPIController.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPTemporalStreamTracer_StaticNew()
{
  return vtkPTemporalStreamTracer::New();
}

PyObject *PyVTKClass_vtkPTemporalStreamTracerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPTemporalStreamTracer_StaticNew,
    PyvtkPTemporalStreamTracer_Methods,
    "vtkPTemporalStreamTracer", modulename,
    NULL, NULL,
    PyvtkPTemporalStreamTracer_Doc(),
    PyVTKClass_vtkTemporalStreamTracerNew(modulename));
  return cls;
}

const char **PyvtkPTemporalStreamTracer_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalStreamTracer - A Parallel Particle tracer for unsteady\nvector fields\n\n",
    "Superclass: vtkTemporalStreamTracer\n\n",
    "vtkTemporalStreamTracer is a filter that integrates a vector field to\ngenerate\n\nSee Also:\n\nvtkRibbonFilter vtkRuledSurfaceFilter vtkInitialValueProblemSolver\nvtkRungeKutta2 vtkRungeKutta4 vtkRungeKutta45 vtkStreamTracer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPTemporalStreamTracer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPTemporalStreamTracerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPTemporalStreamTracer", o) != 0)
    {
    Py_DECREF(o);
    }

}

