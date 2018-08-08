// python wrapper for vtkPStreamTracer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPStreamTracer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPStreamTracer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPStreamTracerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStreamTracerNew
extern "C" { PyObject *PyVTKClass_vtkStreamTracerNew(const char *); }
#define DECLARED_PyVTKClass_vtkStreamTracerNew
#endif

static const char **PyvtkPStreamTracer_Doc();


static PyObject *
PyvtkPStreamTracer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStreamTracer *op = static_cast<vtkPStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPStreamTracer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPStreamTracer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStreamTracer *op = static_cast<vtkPStreamTracer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPStreamTracer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPStreamTracer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStreamTracer *op = static_cast<vtkPStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPStreamTracer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPStreamTracer::NewInstance());

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
PyvtkPStreamTracer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPStreamTracer *tempr = vtkPStreamTracer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPStreamTracer_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStreamTracer *op = static_cast<vtkPStreamTracer *>(vp);

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
      op->vtkPStreamTracer::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPStreamTracer_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStreamTracer *op = static_cast<vtkPStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPStreamTracer::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPStreamTracer_Methods[] = {
  {(char*)"GetClassName", PyvtkPStreamTracer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPStreamTracer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPStreamTracer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPStreamTracer\nC++: vtkPStreamTracer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPStreamTracer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPStreamTracer\nC++: vtkPStreamTracer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPStreamTracer_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(\n    vtkMultiProcessController *controller)\n\nSet/Get the controller use in compositing (set to the global\ncontroller by default) If not using the default, this must be\ncalled before any other methods.\n"},
  {(char*)"GetController", PyvtkPStreamTracer_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get the controller use in compositing (set to the global\ncontroller by default) If not using the default, this must be\ncalled before any other methods.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPStreamTracer_StaticNew()
{
  return vtkPStreamTracer::New();
}

PyObject *PyVTKClass_vtkPStreamTracerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPStreamTracer_StaticNew,
    PyvtkPStreamTracer_Methods,
    "vtkPStreamTracer", modulename,
    NULL, NULL,
    PyvtkPStreamTracer_Doc(),
    PyVTKClass_vtkStreamTracerNew(modulename));
  return cls;
}

const char **PyvtkPStreamTracer_Doc()
{
  static const char *docstring[] = {
    "vtkPStreamTracer -  parallel streamline generators\n\n",
    "Superclass: vtkStreamTracer\n\n",
    "This class implements parallel streamline generators. Note that all\nprocesses must have access to the WHOLE seed source, i.e. the source\nmust be identical on all processes.\n\nSee Also:\n\nvtkStreamTracer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPStreamTracer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPStreamTracerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPStreamTracer", o) != 0)
    {
    Py_DECREF(o);
    }

}

