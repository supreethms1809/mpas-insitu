// python wrapper for vtkMPICompositeManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMPICompositeManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMPICompositeManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMPICompositeManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositeRenderManagerNew
extern "C" { PyObject *PyVTKClass_vtkCompositeRenderManagerNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeRenderManagerNew
#endif

static const char **PyvtkMPICompositeManager_Doc();

#ifndef DECLARED_PyvtkMPICompositeManager_Tags_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkMPICompositeManager_Tags_Type;
#define DECLARED_PyvtkMPICompositeManager_Tags_Type
#endif

PyTypeObject PyvtkMPICompositeManager_Tags_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Tags", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkMPICompositeManager_Tags_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkMPICompositeManager_Tags_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkMPICompositeManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICompositeManager *op = static_cast<vtkMPICompositeManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMPICompositeManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICompositeManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICompositeManager *op = static_cast<vtkMPICompositeManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPICompositeManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICompositeManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICompositeManager *op = static_cast<vtkMPICompositeManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMPICompositeManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPICompositeManager::NewInstance());

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
PyvtkMPICompositeManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMPICompositeManager *tempr = vtkMPICompositeManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICompositeManager_InitializeRMIs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeRMIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICompositeManager *op = static_cast<vtkMPICompositeManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializeRMIs();
      }
    else
      {
      op->vtkMPICompositeManager::InitializeRMIs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPICompositeManager_GetZBufferValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZBufferValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICompositeManager *op = static_cast<vtkMPICompositeManager *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    float tempr = (ap.IsBound() ?
      op->GetZBufferValue(temp0, temp1) :
      op->vtkMPICompositeManager::GetZBufferValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICompositeManager_GatherZBufferValueRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherZBufferValueRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICompositeManager *op = static_cast<vtkMPICompositeManager *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->GatherZBufferValueRMI(temp0, temp1);
      }
    else
      {
      op->vtkMPICompositeManager::GatherZBufferValueRMI(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPICompositeManager_StartRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICompositeManager *op = static_cast<vtkMPICompositeManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartRender();
      }
    else
      {
      op->vtkMPICompositeManager::StartRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPICompositeManager_ChooseBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChooseBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICompositeManager *op = static_cast<vtkMPICompositeManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->ChooseBuffer() :
      op->vtkMPICompositeManager::ChooseBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMPICompositeManager_Methods[] = {
  {(char*)"GetClassName", PyvtkMPICompositeManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMPICompositeManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMPICompositeManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMPICompositeManager\nC++: vtkMPICompositeManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMPICompositeManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMPICompositeManager\nC++: vtkMPICompositeManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"InitializeRMIs", PyvtkMPICompositeManager_InitializeRMIs, METH_VARARGS,
   (char*)"V.InitializeRMIs()\nC++: virtual void InitializeRMIs()\n\nIf the user wants to handle the event loop, then they must call\nthis method to initialize the RMIs.\n"},
  {(char*)"GetZBufferValue", PyvtkMPICompositeManager_GetZBufferValue, METH_VARARGS,
   (char*)"V.GetZBufferValue(int, int) -> float\nC++: float GetZBufferValue(int x, int y)\n\nGet the z buffer value at a pixel.  GatherZBufferValue is an\ninternal method. Called only on root node.\n"},
  {(char*)"GatherZBufferValueRMI", PyvtkMPICompositeManager_GatherZBufferValueRMI, METH_VARARGS,
   (char*)"V.GatherZBufferValueRMI(int, int)\nC++: void GatherZBufferValueRMI(int x, int y)\n\nInternal method: called only on non-Root nodes.\n"},
  {(char*)"StartRender", PyvtkMPICompositeManager_StartRender, METH_VARARGS,
   (char*)"V.StartRender()\nC++: virtual void StartRender()\n\nOverridden to set the Image Size when ParallelRendering is off.\n"},
  {(char*)"ChooseBuffer", PyvtkMPICompositeManager_ChooseBuffer, METH_VARARGS,
   (char*)"V.ChooseBuffer() -> int\nC++: virtual int ChooseBuffer()\n\nSelect buffer to read from / render into. Overridden to choose\nthe back buffer only when the buffers haven;t been swapped yet.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMPICompositeManager_StaticNew()
{
  return vtkMPICompositeManager::New();
}

PyObject *PyVTKClass_vtkMPICompositeManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMPICompositeManager_StaticNew,
    PyvtkMPICompositeManager_Methods,
    "vtkMPICompositeManager", modulename,
    NULL, NULL,
    PyvtkMPICompositeManager_Doc(),
    PyVTKClass_vtkCompositeRenderManagerNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkMPICompositeManager_Tags_Type);
    PyvtkMPICompositeManager_Tags_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkMPICompositeManager_Tags_Type;
    if (o && PyDict_SetItemString(d, (char *)"Tags", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkMPICompositeManager::Tags cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "GATHER_Z_RMI_TAG", vtkMPICompositeManager::GATHER_Z_RMI_TAG },
          { "Z_TAG", vtkMPICompositeManager::Z_TAG },
        };

      o = PyvtkMPICompositeManager_Tags_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkMPICompositeManager_Doc()
{
  static const char *docstring[] = {
    "vtkMPICompositeManager - Composites when running in MPI mode.\n\n",
    "Superclass: vtkCompositeRenderManager\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMPICompositeManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMPICompositeManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMPICompositeManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

