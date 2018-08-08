// python wrapper for vtkPExtractGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPExtractGrid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPExtractGrid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPExtractGridNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtractGridNew
extern "C" { PyObject *PyVTKClass_vtkExtractGridNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractGridNew
#endif

static const char **PyvtkPExtractGrid_Doc();


static PyObject *
PyvtkPExtractGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractGrid *op = static_cast<vtkPExtractGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPExtractGrid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractGrid *op = static_cast<vtkPExtractGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPExtractGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractGrid *op = static_cast<vtkPExtractGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPExtractGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPExtractGrid::NewInstance());

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
PyvtkPExtractGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPExtractGrid *tempr = vtkPExtractGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPExtractGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkPExtractGrid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPExtractGrid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPExtractGrid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPExtractGrid\nC++: vtkPExtractGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPExtractGrid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPExtractGrid\nC++: vtkPExtractGrid *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPExtractGrid_StaticNew()
{
  return vtkPExtractGrid::New();
}

PyObject *PyVTKClass_vtkPExtractGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPExtractGrid_StaticNew,
    PyvtkPExtractGrid_Methods,
    "vtkPExtractGrid", modulename,
    NULL, NULL,
    PyvtkPExtractGrid_Doc(),
    PyVTKClass_vtkExtractGridNew(modulename));
  return cls;
}

const char **PyvtkPExtractGrid_Doc()
{
  static const char *docstring[] = {
    "vtkPExtractGrid - Extract VOI and/or sub-sample a distributed\n\n",
    "Superclass: vtkExtractGrid\n\n",
    "vtkPExtractGrid inherits from vtkExtractGrid and provides additional\n functionality when dealing with a distributed dataset. Specifically,\nwhen\n sub-sampling a dataset, a gap may be introduced between partitions.\nThis\n filter handles such cases correctly by growing the grid to the right\nto\n close the gap.\n\nSee Also:\n\n\n vtkExtractGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPExtractGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPExtractGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPExtractGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

