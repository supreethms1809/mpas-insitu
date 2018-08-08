// python wrapper for vtkGraphReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGraphReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGraphReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGraphReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkGraphReader_Doc();


static PyObject *
PyvtkGraphReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphReader *op = static_cast<vtkGraphReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGraphReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphReader *op = static_cast<vtkGraphReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphReader *op = static_cast<vtkGraphReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraphReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphReader::NewInstance());

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
PyvtkGraphReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGraphReader *tempr = vtkGraphReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphReader *op = static_cast<vtkGraphReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkGraphReader::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGraphReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphReader *op = static_cast<vtkGraphReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkGraphReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGraphReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkGraphReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkGraphReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkGraphReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphReader *op = static_cast<vtkGraphReader *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkGraphReader::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphReader_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGraphReader\nC++: vtkGraphReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphReader\nC++: vtkGraphReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkGraphReader_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkGraph\nC++: vtkGraph *GetOutput()\nV.GetOutput(int) -> vtkGraph\nC++: vtkGraph *GetOutput(int idx)\n\nGet the output of this reader.\n"},
  {(char*)"SetOutput", PyvtkGraphReader_SetOutput, METH_VARARGS,
   (char*)"V.SetOutput(vtkGraph)\nC++: void SetOutput(vtkGraph *output)\n\nGet the output of this reader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphReader_StaticNew()
{
  return vtkGraphReader::New();
}

PyObject *PyVTKClass_vtkGraphReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphReader_StaticNew,
    PyvtkGraphReader_Methods,
    "vtkGraphReader", modulename,
    NULL, NULL,
    PyvtkGraphReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkGraphReader_Doc()
{
  static const char *docstring[] = {
    "vtkGraphReader - read vtkGraph data file\n\n",
    "Superclass: vtkDataReader\n\n",
    "vtkGraphReader is a source object that reads ASCII or binary vtkGraph\ndata files in vtk format. (see text for format details). The output\nof this reader is a single vtkGraph data object. The superclass of\nthis class, vtkDataReader, provides many methods for controlling the\nreading of the data file, see vtkDataReader for more information.\n\nCaveats:\n\nBinary files written on one system may not be rea",
    "dable on other\nsystems.\n\nSee Also:\n\nvtkGraph vtkDataReader vtkGraphWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphReader", o) != 0)
    {
    Py_DECREF(o);
    }

}
