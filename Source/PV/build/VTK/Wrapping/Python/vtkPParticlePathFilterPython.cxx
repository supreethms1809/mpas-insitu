// python wrapper for vtkPParticlePathFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPParticlePathFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPParticlePathFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPParticlePathFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPParticleTracerBaseNew
extern "C" { PyObject *PyVTKClass_vtkPParticleTracerBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkPParticleTracerBaseNew
#endif

static const char **PyvtkPParticlePathFilter_Doc();


static PyObject *
PyvtkPParticlePathFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPParticlePathFilter *op = static_cast<vtkPParticlePathFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPParticlePathFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPParticlePathFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPParticlePathFilter *op = static_cast<vtkPParticlePathFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPParticlePathFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPParticlePathFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPParticlePathFilter *op = static_cast<vtkPParticlePathFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPParticlePathFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPParticlePathFilter::NewInstance());

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
PyvtkPParticlePathFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPParticlePathFilter *tempr = vtkPParticlePathFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPParticlePathFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPParticlePathFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPParticlePathFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPParticlePathFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPParticlePathFilter\nC++: vtkPParticlePathFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPParticlePathFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPParticlePathFilter\nC++: vtkPParticlePathFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPParticlePathFilter_StaticNew()
{
  return vtkPParticlePathFilter::New();
}

PyObject *PyVTKClass_vtkPParticlePathFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPParticlePathFilter_StaticNew,
    PyvtkPParticlePathFilter_Methods,
    "vtkPParticlePathFilter", modulename,
    NULL, NULL,
    PyvtkPParticlePathFilter_Doc(),
    PyVTKClass_vtkPParticleTracerBaseNew(modulename));
  return cls;
}

const char **PyvtkPParticlePathFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPParticlePathFilter - A Parallel Particle tracer for unsteady\nvector fields\n\n",
    "Superclass: vtkPParticleTracerBase\n\n",
    "vtkPParticlePathFilter is a filter that integrates a vector field to\ngenerate\n\nSee Also:\n\nvtkPParticlePathFilterBase has the details of the algorithms\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPParticlePathFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPParticlePathFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPParticlePathFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

