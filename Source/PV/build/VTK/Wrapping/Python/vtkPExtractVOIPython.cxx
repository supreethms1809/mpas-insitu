// python wrapper for vtkPExtractVOI
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPExtractVOI.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPExtractVOI(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPExtractVOINew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtractVOINew
extern "C" { PyObject *PyVTKClass_vtkExtractVOINew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractVOINew
#endif

static const char **PyvtkPExtractVOI_Doc();


static PyObject *
PyvtkPExtractVOI_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractVOI *op = static_cast<vtkPExtractVOI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPExtractVOI::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractVOI_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractVOI *op = static_cast<vtkPExtractVOI *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPExtractVOI::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractVOI_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractVOI *op = static_cast<vtkPExtractVOI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPExtractVOI *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPExtractVOI::NewInstance());

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
PyvtkPExtractVOI_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPExtractVOI *tempr = vtkPExtractVOI::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPExtractVOI_Methods[] = {
  {(char*)"GetClassName", PyvtkPExtractVOI_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPExtractVOI_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPExtractVOI_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPExtractVOI\nC++: vtkPExtractVOI *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPExtractVOI_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPExtractVOI\nC++: vtkPExtractVOI *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPExtractVOI_StaticNew()
{
  return vtkPExtractVOI::New();
}

PyObject *PyVTKClass_vtkPExtractVOINew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPExtractVOI_StaticNew,
    PyvtkPExtractVOI_Methods,
    "vtkPExtractVOI", modulename,
    NULL, NULL,
    PyvtkPExtractVOI_Doc(),
    PyVTKClass_vtkExtractVOINew(modulename));
  return cls;
}

const char **PyvtkPExtractVOI_Doc()
{
  static const char *docstring[] = {
    "vtkPExtractGrid - Extract VOI and/or sub-sample a distributed\n\n",
    "Superclass: vtkExtractVOI\n\n",
    "vtkPExtractVOI inherits from vtkExtractVOI and provides additional\n functionality when dealing with a distributed dataset. Specifically,\nwhen\n sub-sampling a dataset, a gap may be introduced between partitions.\nThis\n filter handles such cases correctly by growing the grid to the right\nto\n close the gap.\n\nSee Also:\n\n\n vtkExtractVOI\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPExtractVOI(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPExtractVOINew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPExtractVOI", o) != 0)
    {
    Py_DECREF(o);
    }

}

