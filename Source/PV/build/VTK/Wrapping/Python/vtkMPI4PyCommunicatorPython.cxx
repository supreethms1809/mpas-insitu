// python wrapper for vtkMPI4PyCommunicator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMPI4PyCommunicator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMPI4PyCommunicator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMPI4PyCommunicatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMPI4PyCommunicator_Doc();


static PyObject *
PyvtkMPI4PyCommunicator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPI4PyCommunicator *op = static_cast<vtkMPI4PyCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMPI4PyCommunicator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPI4PyCommunicator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPI4PyCommunicator *op = static_cast<vtkMPI4PyCommunicator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPI4PyCommunicator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPI4PyCommunicator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPI4PyCommunicator *op = static_cast<vtkMPI4PyCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMPI4PyCommunicator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPI4PyCommunicator::NewInstance());

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
PyvtkMPI4PyCommunicator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMPI4PyCommunicator *tempr = vtkMPI4PyCommunicator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPI4PyCommunicator_ConvertToPython(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertToPython");

  vtkMPICommunicator *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPICommunicator"))
    {
    PyObject *tempr = vtkMPI4PyCommunicator::ConvertToPython(temp0);

    if (!ap.ErrorOccurred())
      {
      result = tempr;
      }
    }

  return result;
}


static PyObject *
PyvtkMPI4PyCommunicator_ConvertToVTK(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertToVTK");

  PyObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetPythonObject(temp0))
    {
    vtkMPICommunicator *tempr = vtkMPI4PyCommunicator::ConvertToVTK(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMPI4PyCommunicator_Methods[] = {
  {(char*)"GetClassName", PyvtkMPI4PyCommunicator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMPI4PyCommunicator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMPI4PyCommunicator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMPI4PyCommunicator\nC++: vtkMPI4PyCommunicator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMPI4PyCommunicator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMPI4PyCommunicator\nC++: vtkMPI4PyCommunicator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ConvertToPython", PyvtkMPI4PyCommunicator_ConvertToPython, METH_VARARGS | METH_STATIC,
   (char*)"V.ConvertToPython(vtkMPICommunicator) ->\nC++: static PyObject *ConvertToPython(vtkMPICommunicator *comm)\n\nConvert a VTK communicator into an mpi4py communicator.\n"},
  {(char*)"ConvertToVTK", PyvtkMPI4PyCommunicator_ConvertToVTK, METH_VARARGS | METH_STATIC,
   (char*)"V.ConvertToVTK() -> vtkMPICommunicator\nC++: static vtkMPICommunicator *ConvertToVTK(PyObject *comm)\n\nConvert an mpi4py communicator into a VTK communicator.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMPI4PyCommunicator_StaticNew()
{
  return vtkMPI4PyCommunicator::New();
}

PyObject *PyVTKClass_vtkMPI4PyCommunicatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMPI4PyCommunicator_StaticNew,
    PyvtkMPI4PyCommunicator_Methods,
    "vtkMPI4PyCommunicator", modulename,
    NULL, NULL,
    PyvtkMPI4PyCommunicator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMPI4PyCommunicator_Doc()
{
  static const char *docstring[] = {
    "vtkMPI4PyCommunicator - Class for bridging MPI4Py with\nvtkMPICommunicator.\n\n",
    "Superclass: vtkObject\n\n",
    "This class can be used to convert between VTK and MPI4Py\ncommunicators.\n\nSee Also:\n\nvtkMPICommunicator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMPI4PyCommunicator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMPI4PyCommunicatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMPI4PyCommunicator", o) != 0)
    {
    Py_DECREF(o);
    }

}

