// python wrapper for vtkPExtractRectilinearGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPExtractRectilinearGrid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPExtractRectilinearGrid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPExtractRectilinearGridNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtractRectilinearGridNew
extern "C" { PyObject *PyVTKClass_vtkExtractRectilinearGridNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractRectilinearGridNew
#endif

static const char **PyvtkPExtractRectilinearGrid_Doc();


static PyObject *
PyvtkPExtractRectilinearGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractRectilinearGrid *op = static_cast<vtkPExtractRectilinearGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPExtractRectilinearGrid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractRectilinearGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractRectilinearGrid *op = static_cast<vtkPExtractRectilinearGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPExtractRectilinearGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractRectilinearGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractRectilinearGrid *op = static_cast<vtkPExtractRectilinearGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPExtractRectilinearGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPExtractRectilinearGrid::NewInstance());

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
PyvtkPExtractRectilinearGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPExtractRectilinearGrid *tempr = vtkPExtractRectilinearGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPExtractRectilinearGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkPExtractRectilinearGrid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPExtractRectilinearGrid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPExtractRectilinearGrid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPExtractRectilinearGrid\nC++: vtkPExtractRectilinearGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPExtractRectilinearGrid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPExtractRectilinearGrid\nC++: vtkPExtractRectilinearGrid *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPExtractRectilinearGrid_StaticNew()
{
  return vtkPExtractRectilinearGrid::New();
}

PyObject *PyVTKClass_vtkPExtractRectilinearGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPExtractRectilinearGrid_StaticNew,
    PyvtkPExtractRectilinearGrid_Methods,
    "vtkPExtractRectilinearGrid", modulename,
    NULL, NULL,
    PyvtkPExtractRectilinearGrid_Doc(),
    PyVTKClass_vtkExtractRectilinearGridNew(modulename));
  return cls;
}

const char **PyvtkPExtractRectilinearGrid_Doc()
{
  static const char *docstring[] = {
    "vtkPExtractRectilinearGrid - Extract VOI and/or sub-sample a\ndistributed\n\n",
    "Superclass: vtkExtractRectilinearGrid\n\n",
    "vtkPExtractRectilinearGrid inherits from vtkExtractVOI & provides\nadditional\n functionality when dealing with a distributed dataset. Specifically,\nwhen\n sub-sampling a dataset, a gap may be introduced between partitions.\nThis\n filter handles such cases correctly by growing the grid to the right\nto\n close the gap.\n\nSee Also:\n\n\n vtkExtractRectilinearGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPExtractRectilinearGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPExtractRectilinearGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPExtractRectilinearGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

