// python wrapper for vtkPVCacheKeeperPipeline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVCacheKeeperPipeline.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVCacheKeeperPipeline(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVCacheKeeperPipelineNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositeDataPipelineNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataPipelineNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataPipelineNew
#endif

static const char **PyvtkPVCacheKeeperPipeline_Doc();


static PyObject *
PyvtkPVCacheKeeperPipeline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeperPipeline *op = static_cast<vtkPVCacheKeeperPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVCacheKeeperPipeline::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCacheKeeperPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeperPipeline *op = static_cast<vtkPVCacheKeeperPipeline *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCacheKeeperPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCacheKeeperPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeperPipeline *op = static_cast<vtkPVCacheKeeperPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVCacheKeeperPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCacheKeeperPipeline::NewInstance());

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
PyvtkPVCacheKeeperPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVCacheKeeperPipeline *tempr = vtkPVCacheKeeperPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVCacheKeeperPipeline_Methods[] = {
  {(char*)"GetClassName", PyvtkPVCacheKeeperPipeline_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVCacheKeeperPipeline_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVCacheKeeperPipeline_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVCacheKeeperPipeline\nC++: vtkPVCacheKeeperPipeline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVCacheKeeperPipeline_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVCacheKeeperPipeline\nC++: vtkPVCacheKeeperPipeline *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVCacheKeeperPipeline_StaticNew()
{
  return vtkPVCacheKeeperPipeline::New();
}

PyObject *PyVTKClass_vtkPVCacheKeeperPipelineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVCacheKeeperPipeline_StaticNew,
    PyvtkPVCacheKeeperPipeline_Methods,
    "vtkPVCacheKeeperPipeline", modulename,
    NULL, NULL,
    PyvtkPVCacheKeeperPipeline_Doc(),
    PyVTKClass_vtkCompositeDataPipelineNew(modulename));
  return cls;
}

const char **PyvtkPVCacheKeeperPipeline_Doc()
{
  static const char *docstring[] = {
    "vtkPVCacheKeeperPipeline\n\n",
    "Superclass: vtkCompositeDataPipeline\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVCacheKeeperPipeline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVCacheKeeperPipelineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVCacheKeeperPipeline", o) != 0)
    {
    Py_DECREF(o);
    }

}

