// python wrapper for vtkMultiTimeStepAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMultiTimeStepAlgorithm.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMultiTimeStepAlgorithm(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMultiTimeStepAlgorithmNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkMultiTimeStepAlgorithm_Doc();


static PyObject *
PyvtkMultiTimeStepAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiTimeStepAlgorithm *op = static_cast<vtkMultiTimeStepAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMultiTimeStepAlgorithm::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiTimeStepAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiTimeStepAlgorithm *op = static_cast<vtkMultiTimeStepAlgorithm *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiTimeStepAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiTimeStepAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiTimeStepAlgorithm *op = static_cast<vtkMultiTimeStepAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiTimeStepAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiTimeStepAlgorithm::NewInstance());

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
PyvtkMultiTimeStepAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMultiTimeStepAlgorithm *tempr = vtkMultiTimeStepAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiTimeStepAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkMultiTimeStepAlgorithm_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMultiTimeStepAlgorithm_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMultiTimeStepAlgorithm_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMultiTimeStepAlgorithm\nC++: vtkMultiTimeStepAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMultiTimeStepAlgorithm_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMultiTimeStepAlgorithm\nC++: vtkMultiTimeStepAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMultiTimeStepAlgorithm_StaticNew()
{
  return vtkMultiTimeStepAlgorithm::New();
}

PyObject *PyVTKClass_vtkMultiTimeStepAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMultiTimeStepAlgorithm_StaticNew,
    PyvtkMultiTimeStepAlgorithm_Methods,
    "vtkMultiTimeStepAlgorithm", modulename,
    NULL, NULL,
    PyvtkMultiTimeStepAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMultiTimeStepAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkMultiTimeStepAlgorithm - Superclass for algorithms that would like\nto\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "This class can be inherited by any algorithm that wishes to make\nmultiple time requests upstream. The child class uses\nUPDATE_TIME_STEPS to make the time requests and use set of\ntime-stamped data objects are stored in time order in a\nvtkMultiBlockDataSet object.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMultiTimeStepAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMultiTimeStepAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMultiTimeStepAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}
