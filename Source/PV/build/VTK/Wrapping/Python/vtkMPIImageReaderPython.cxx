// python wrapper for vtkMPIImageReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMPIImageReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMPIImageReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMPIImageReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageReaderNew
extern "C" { PyObject *PyVTKClass_vtkImageReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageReaderNew
#endif

static const char **PyvtkMPIImageReader_Doc();


static PyObject *
PyvtkMPIImageReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIImageReader *op = static_cast<vtkMPIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMPIImageReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIImageReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIImageReader *op = static_cast<vtkMPIImageReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPIImageReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIImageReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIImageReader *op = static_cast<vtkMPIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMPIImageReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPIImageReader::NewInstance());

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
PyvtkMPIImageReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMPIImageReader *tempr = vtkMPIImageReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIImageReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIImageReader *op = static_cast<vtkMPIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkMPIImageReader::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIImageReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIImageReader *op = static_cast<vtkMPIImageReader *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkMPIImageReader::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMPIImageReader_Methods[] = {
  {(char*)"GetClassName", PyvtkMPIImageReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMPIImageReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMPIImageReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMPIImageReader\nC++: vtkMPIImageReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMPIImageReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMPIImageReader\nC++: vtkMPIImageReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetController", PyvtkMPIImageReader_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/set the multi process controller to use for coordinated\nreads.  By default, set to the global controller.\n"},
  {(char*)"SetController", PyvtkMPIImageReader_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/set the multi process controller to use for coordinated\nreads.  By default, set to the global controller.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMPIImageReader_StaticNew()
{
  return vtkMPIImageReader::New();
}

PyObject *PyVTKClass_vtkMPIImageReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMPIImageReader_StaticNew,
    PyvtkMPIImageReader_Methods,
    "vtkMPIImageReader", modulename,
    NULL, NULL,
    PyvtkMPIImageReader_Doc(),
    PyVTKClass_vtkImageReaderNew(modulename));
  return cls;
}

const char **PyvtkMPIImageReader_Doc()
{
  static const char *docstring[] = {
    "vtkMPIImageReader Superclass of parallel binary image file readers.\n\n",
    "Superclass: vtkImageReader\n\n",
    "vtkMPIImageReader provides the mechanism to read a brick of bytes (or\nshorts, or ints, or floats, or doubles, ...) from a file or series of\nfiles.  You can use it to read raw image data from files.  You may\nalso be able to subclass this to read simple file formats.\n\nWhat distinguishes this class from vtkImageReader and vtkImageReader2\nis that it performs synchronized parallel I/O using the MPIIO l",
    "ayer. \nThis can make a huge difference in file read times, especially when\nreading in parallel from a parallel file system.\n\nDespite the name of this class, vtkMPIImageReader will work even if\nMPI is not available.  If MPI is not available or MPIIO is not\navailable or the given Controller is not a vtkMPIController (or\nNULL), then this class will silently work exactly like its\nsuperclass.  The poin",
    "t is that you can safely use this class in\napplications that may or may not be compiled with MPI (or may or may\nnot actually be run with MPI).\n\nSee Also:\n\nvtkMultiProcessController, vtkImageReader, vtkImageReader2\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMPIImageReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMPIImageReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMPIImageReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

