// python wrapper for vtkPNrrdReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPNrrdReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPNrrdReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPNrrdReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkNrrdReaderNew
extern "C" { PyObject *PyVTKClass_vtkNrrdReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkNrrdReaderNew
#endif

static const char **PyvtkPNrrdReader_Doc();


static PyObject *
PyvtkPNrrdReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNrrdReader *op = static_cast<vtkPNrrdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPNrrdReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNrrdReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNrrdReader *op = static_cast<vtkPNrrdReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPNrrdReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNrrdReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNrrdReader *op = static_cast<vtkPNrrdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPNrrdReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPNrrdReader::NewInstance());

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
PyvtkPNrrdReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPNrrdReader *tempr = vtkPNrrdReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNrrdReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNrrdReader *op = static_cast<vtkPNrrdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPNrrdReader::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNrrdReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNrrdReader *op = static_cast<vtkPNrrdReader *>(vp);

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
      op->vtkPNrrdReader::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPNrrdReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPNrrdReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPNrrdReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPNrrdReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPNrrdReader\nC++: vtkPNrrdReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPNrrdReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPNrrdReader\nC++: vtkPNrrdReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetController", PyvtkPNrrdReader_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/set the multi process controller to use for coordinated\nreads.  By default, set to the global controller.\n"},
  {(char*)"SetController", PyvtkPNrrdReader_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/set the multi process controller to use for coordinated\nreads.  By default, set to the global controller.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPNrrdReader_StaticNew()
{
  return vtkPNrrdReader::New();
}

PyObject *PyVTKClass_vtkPNrrdReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPNrrdReader_StaticNew,
    PyvtkPNrrdReader_Methods,
    "vtkPNrrdReader", modulename,
    NULL, NULL,
    PyvtkPNrrdReader_Doc(),
    PyVTKClass_vtkNrrdReaderNew(modulename));
  return cls;
}

const char **PyvtkPNrrdReader_Doc()
{
  static const char *docstring[] = {
    "vtkPNrrdReader - Read nrrd files efficiently from parallel file\nsystems (and reasonably well elsewhere).\n\n",
    "Superclass: vtkNrrdReader\n\n",
    "vtkPNrrdReader is a subclass of vtkNrrdReader that will read Nrrd\nformat header information of the image before reading the data.  This\nmeans that the reader will automatically set information like file\ndimensions.\n\nBugs:\n\nThere are several limitations on what type of nrrd files we can read.\n This reader only supports nrrd files in raw format.  Other encodings\nlike ascii and hex will result in err",
    "ors.  When reading in detached\nheaders, this only supports reading one file that is detached.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPNrrdReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPNrrdReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPNrrdReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

