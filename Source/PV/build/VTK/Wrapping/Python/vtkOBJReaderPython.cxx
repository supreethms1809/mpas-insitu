// python wrapper for vtkOBJReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOBJReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOBJReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOBJReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractPolyDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkAbstractPolyDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractPolyDataReaderNew
#endif

static const char **PyvtkOBJReader_Doc();


static PyObject *
PyvtkOBJReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJReader *op = static_cast<vtkOBJReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOBJReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOBJReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJReader *op = static_cast<vtkOBJReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOBJReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOBJReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJReader *op = static_cast<vtkOBJReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOBJReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOBJReader::NewInstance());

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
PyvtkOBJReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOBJReader *tempr = vtkOBJReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOBJReader_Methods[] = {
  {(char*)"GetClassName", PyvtkOBJReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOBJReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOBJReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOBJReader\nC++: vtkOBJReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOBJReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOBJReader\nC++: vtkOBJReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOBJReader_StaticNew()
{
  return vtkOBJReader::New();
}

PyObject *PyVTKClass_vtkOBJReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOBJReader_StaticNew,
    PyvtkOBJReader_Methods,
    "vtkOBJReader", modulename,
    NULL, NULL,
    PyvtkOBJReader_Doc(),
    PyVTKClass_vtkAbstractPolyDataReaderNew(modulename));
  return cls;
}

const char **PyvtkOBJReader_Doc()
{
  static const char *docstring[] = {
    "vtkOBJReader - read Wavefront .obj files\n\n",
    "Superclass: vtkAbstractPolyDataReader\n\n",
    "vtkOBJReader is a source object that reads Wavefront .obj files. The\noutput of this source object is polygonal data.\n\nSee Also:\n\nvtkOBJImporter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOBJReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOBJReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOBJReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

