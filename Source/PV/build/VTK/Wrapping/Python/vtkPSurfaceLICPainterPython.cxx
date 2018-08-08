// python wrapper for vtkPSurfaceLICPainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPSurfaceLICPainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPSurfaceLICPainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPSurfaceLICPainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSurfaceLICPainterNew
extern "C" { PyObject *PyVTKClass_vtkSurfaceLICPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkSurfaceLICPainterNew
#endif

static const char **PyvtkPSurfaceLICPainter_Doc();


static PyObject *
PyvtkPSurfaceLICPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSurfaceLICPainter *op = static_cast<vtkPSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPSurfaceLICPainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSurfaceLICPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSurfaceLICPainter *op = static_cast<vtkPSurfaceLICPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPSurfaceLICPainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSurfaceLICPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSurfaceLICPainter *op = static_cast<vtkPSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPSurfaceLICPainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPSurfaceLICPainter::NewInstance());

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
PyvtkPSurfaceLICPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPSurfaceLICPainter *tempr = vtkPSurfaceLICPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSurfaceLICPainter_WriteTimerLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteTimerLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSurfaceLICPainter *op = static_cast<vtkPSurfaceLICPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->WriteTimerLog(temp0);
      }
    else
      {
      op->vtkPSurfaceLICPainter::WriteTimerLog(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPSurfaceLICPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkPSurfaceLICPainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPSurfaceLICPainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPSurfaceLICPainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPSurfaceLICPainter\nC++: vtkPSurfaceLICPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPSurfaceLICPainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPSurfaceLICPainter\nC++: vtkPSurfaceLICPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"WriteTimerLog", PyvtkPSurfaceLICPainter_WriteTimerLog, METH_VARARGS,
   (char*)"V.WriteTimerLog(string)\nC++: virtual void WriteTimerLog(const char *fileName)\n\nMethods used for parallel benchmarks. Use cmake to define\nvtkSurfaceLICPainterTIME to enable benchmarks. During each update\ntiming information is stored, it can be written to disk by\ncalling WriteLog.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPSurfaceLICPainter_StaticNew()
{
  return vtkPSurfaceLICPainter::New();
}

PyObject *PyVTKClass_vtkPSurfaceLICPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPSurfaceLICPainter_StaticNew,
    PyvtkPSurfaceLICPainter_Methods,
    "vtkPSurfaceLICPainter", modulename,
    NULL, NULL,
    PyvtkPSurfaceLICPainter_Doc(),
    PyVTKClass_vtkSurfaceLICPainterNew(modulename));
  return cls;
}

const char **PyvtkPSurfaceLICPainter_Doc()
{
  static const char *docstring[] = {
    "vtkPSurfaceLICPainter - parallel parts of the vtkSurfaceLICPainter\n\n",
    "Superclass: vtkSurfaceLICPainter\n\n",
    "Parallel parts of the vtkSurfaceLICPainter, see that class for\ndocumentation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPSurfaceLICPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPSurfaceLICPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPSurfaceLICPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

