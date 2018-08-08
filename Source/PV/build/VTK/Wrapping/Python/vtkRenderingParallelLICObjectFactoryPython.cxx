// python wrapper for vtkRenderingParallelLICObjectFactory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRenderingParallelLICObjectFactory.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRenderingParallelLICObjectFactory(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRenderingParallelLICObjectFactoryNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectFactoryNew
extern "C" { PyObject *PyVTKClass_vtkObjectFactoryNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectFactoryNew
#endif

static const char **PyvtkRenderingParallelLICObjectFactory_Doc();


static PyObject *
PyvtkRenderingParallelLICObjectFactory_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderingParallelLICObjectFactory *op = static_cast<vtkRenderingParallelLICObjectFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRenderingParallelLICObjectFactory::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderingParallelLICObjectFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderingParallelLICObjectFactory *op = static_cast<vtkRenderingParallelLICObjectFactory *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderingParallelLICObjectFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderingParallelLICObjectFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderingParallelLICObjectFactory *op = static_cast<vtkRenderingParallelLICObjectFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderingParallelLICObjectFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderingParallelLICObjectFactory::NewInstance());

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
PyvtkRenderingParallelLICObjectFactory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRenderingParallelLICObjectFactory *tempr = vtkRenderingParallelLICObjectFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderingParallelLICObjectFactory_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderingParallelLICObjectFactory *op = static_cast<vtkRenderingParallelLICObjectFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkRenderingParallelLICObjectFactory::GetDescription());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderingParallelLICObjectFactory_GetVTKSourceVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKSourceVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderingParallelLICObjectFactory *op = static_cast<vtkRenderingParallelLICObjectFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetVTKSourceVersion() :
      op->vtkRenderingParallelLICObjectFactory::GetVTKSourceVersion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderingParallelLICObjectFactory_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderingParallelLICObjectFactory_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderingParallelLICObjectFactory_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderingParallelLICObjectFactory_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRenderingParallelLICObjectFactory\nC++: vtkRenderingParallelLICObjectFactory *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderingParallelLICObjectFactory_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderingParallelLICObjectFactory\nC++: vtkRenderingParallelLICObjectFactory *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"GetDescription", PyvtkRenderingParallelLICObjectFactory_GetDescription, METH_VARARGS,
   (char*)"V.GetDescription() -> string\nC++: const char *GetDescription()\n\n"},
  {(char*)"GetVTKSourceVersion", PyvtkRenderingParallelLICObjectFactory_GetVTKSourceVersion, METH_VARARGS,
   (char*)"V.GetVTKSourceVersion() -> string\nC++: const char *GetVTKSourceVersion()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderingParallelLICObjectFactory_StaticNew()
{
  return vtkRenderingParallelLICObjectFactory::New();
}

PyObject *PyVTKClass_vtkRenderingParallelLICObjectFactoryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderingParallelLICObjectFactory_StaticNew,
    PyvtkRenderingParallelLICObjectFactory_Methods,
    "vtkRenderingParallelLICObjectFactory", modulename,
    NULL, NULL,
    PyvtkRenderingParallelLICObjectFactory_Doc(),
    PyVTKClass_vtkObjectFactoryNew(modulename));
  return cls;
}

const char **PyvtkRenderingParallelLICObjectFactory_Doc()
{
  static const char *docstring[] = {
    "vtkRenderingParallelLICObjectFactory - no description provided.\n\n",
    "Superclass: vtkObjectFactory\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderingParallelLICObjectFactory(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderingParallelLICObjectFactoryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderingParallelLICObjectFactory", o) != 0)
    {
    Py_DECREF(o);
    }

}

