// python wrapper for vtkPParticleTracer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPParticleTracer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPParticleTracer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPParticleTracerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPParticleTracerBaseNew
extern "C" { PyObject *PyVTKClass_vtkPParticleTracerBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkPParticleTracerBaseNew
#endif

static const char **PyvtkPParticleTracer_Doc();


static PyObject *
PyvtkPParticleTracer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPParticleTracer *op = static_cast<vtkPParticleTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPParticleTracer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPParticleTracer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPParticleTracer *op = static_cast<vtkPParticleTracer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPParticleTracer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPParticleTracer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPParticleTracer *op = static_cast<vtkPParticleTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPParticleTracer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPParticleTracer::NewInstance());

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
PyvtkPParticleTracer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPParticleTracer *tempr = vtkPParticleTracer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPParticleTracer_Methods[] = {
  {(char*)"GetClassName", PyvtkPParticleTracer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPParticleTracer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPParticleTracer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPParticleTracer\nC++: vtkPParticleTracer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPParticleTracer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPParticleTracer\nC++: vtkPParticleTracer *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPParticleTracer_StaticNew()
{
  return vtkPParticleTracer::New();
}

PyObject *PyVTKClass_vtkPParticleTracerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPParticleTracer_StaticNew,
    PyvtkPParticleTracer_Methods,
    "vtkPParticleTracer", modulename,
    NULL, NULL,
    PyvtkPParticleTracer_Doc(),
    PyVTKClass_vtkPParticleTracerBaseNew(modulename));
  return cls;
}

const char **PyvtkPParticleTracer_Doc()
{
  static const char *docstring[] = {
    "vtkPParticleTracer - A Parallel Particle tracer for unsteady vector\nfields\n\n",
    "Superclass: vtkPParticleTracerBase\n\n",
    "vtkPParticleTracer is a filter that integrates a vector field to\ngenerate\n\nSee Also:\n\nvtkPParticleTracerBase has the details of the algorithms\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPParticleTracer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPParticleTracerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPParticleTracer", o) != 0)
    {
    Py_DECREF(o);
    }

}

