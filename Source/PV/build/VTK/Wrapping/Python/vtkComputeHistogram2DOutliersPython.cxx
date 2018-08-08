// python wrapper for vtkComputeHistogram2DOutliers
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkComputeHistogram2DOutliers.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkComputeHistogram2DOutliers(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkComputeHistogram2DOutliersNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkSelectionAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
#endif

static const char **PyvtkComputeHistogram2DOutliers_Doc();

#ifndef DECLARED_PyvtkComputeHistogram2DOutliers_InputPorts_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkComputeHistogram2DOutliers_InputPorts_Type;
#define DECLARED_PyvtkComputeHistogram2DOutliers_InputPorts_Type
#endif

PyTypeObject PyvtkComputeHistogram2DOutliers_InputPorts_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"InputPorts", // tp_name
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

PyObject *PyvtkComputeHistogram2DOutliers_InputPorts_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkComputeHistogram2DOutliers_InputPorts_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkComputeHistogram2DOutliers_OutputPorts_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkComputeHistogram2DOutliers_OutputPorts_Type;
#define DECLARED_PyvtkComputeHistogram2DOutliers_OutputPorts_Type
#endif

PyTypeObject PyvtkComputeHistogram2DOutliers_OutputPorts_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"OutputPorts", // tp_name
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

PyObject *PyvtkComputeHistogram2DOutliers_OutputPorts_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkComputeHistogram2DOutliers_OutputPorts_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkComputeHistogram2DOutliers::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkComputeHistogram2DOutliers::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkComputeHistogram2DOutliers *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkComputeHistogram2DOutliers::NewInstance());

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
PyvtkComputeHistogram2DOutliers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkComputeHistogram2DOutliers *tempr = vtkComputeHistogram2DOutliers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_SetPreferredNumberOfOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreferredNumberOfOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreferredNumberOfOutliers(temp0);
      }
    else
      {
      op->vtkComputeHistogram2DOutliers::SetPreferredNumberOfOutliers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_GetPreferredNumberOfOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreferredNumberOfOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPreferredNumberOfOutliers() :
      op->vtkComputeHistogram2DOutliers::GetPreferredNumberOfOutliers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_GetOutputTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetOutputTable() :
      op->vtkComputeHistogram2DOutliers::GetOutputTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_SetInputTableConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputTableConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputTableConnection(temp0);
      }
    else
      {
      op->vtkComputeHistogram2DOutliers::SetInputTableConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_SetInputHistogramImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputHistogramImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputHistogramImageDataConnection(temp0);
      }
    else
      {
      op->vtkComputeHistogram2DOutliers::SetInputHistogramImageDataConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_SetInputHistogramMultiBlockConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputHistogramMultiBlockConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputHistogramMultiBlockConnection(temp0);
      }
    else
      {
      op->vtkComputeHistogram2DOutliers::SetInputHistogramMultiBlockConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkComputeHistogram2DOutliers_Methods[] = {
  {(char*)"GetClassName", PyvtkComputeHistogram2DOutliers_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkComputeHistogram2DOutliers_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkComputeHistogram2DOutliers_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkComputeHistogram2DOutliers\nC++: vtkComputeHistogram2DOutliers *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkComputeHistogram2DOutliers_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkComputeHistogram2DOutliers\nC++: vtkComputeHistogram2DOutliers *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPreferredNumberOfOutliers", PyvtkComputeHistogram2DOutliers_SetPreferredNumberOfOutliers, METH_VARARGS,
   (char*)"V.SetPreferredNumberOfOutliers(int)\nC++: void SetPreferredNumberOfOutliers(int a)\n\n"},
  {(char*)"GetPreferredNumberOfOutliers", PyvtkComputeHistogram2DOutliers_GetPreferredNumberOfOutliers, METH_VARARGS,
   (char*)"V.GetPreferredNumberOfOutliers() -> int\nC++: int GetPreferredNumberOfOutliers()\n\n"},
  {(char*)"GetOutputTable", PyvtkComputeHistogram2DOutliers_GetOutputTable, METH_VARARGS,
   (char*)"V.GetOutputTable() -> vtkTable\nC++: vtkTable *GetOutputTable()\n\n"},
  {(char*)"SetInputTableConnection", PyvtkComputeHistogram2DOutliers_SetInputTableConnection, METH_VARARGS,
   (char*)"V.SetInputTableConnection(vtkAlgorithmOutput)\nC++: void SetInputTableConnection(vtkAlgorithmOutput *cxn)\n\nSet the source table data, from which data will be filtered.\n"},
  {(char*)"SetInputHistogramImageDataConnection", PyvtkComputeHistogram2DOutliers_SetInputHistogramImageDataConnection, METH_VARARGS,
   (char*)"V.SetInputHistogramImageDataConnection(vtkAlgorithmOutput)\nC++: void SetInputHistogramImageDataConnection(\n    vtkAlgorithmOutput *cxn)\n\nSet the input histogram data as a (repeatable) vtkImageData\n"},
  {(char*)"SetInputHistogramMultiBlockConnection", PyvtkComputeHistogram2DOutliers_SetInputHistogramMultiBlockConnection, METH_VARARGS,
   (char*)"V.SetInputHistogramMultiBlockConnection(vtkAlgorithmOutput)\nC++: void SetInputHistogramMultiBlockConnection(\n    vtkAlgorithmOutput *cxn)\n\nSet the input histogram data as a vtkMultiBlockData set\ncontaining multiple vtkImageData objects.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkComputeHistogram2DOutliers_StaticNew()
{
  return vtkComputeHistogram2DOutliers::New();
}

PyObject *PyVTKClass_vtkComputeHistogram2DOutliersNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkComputeHistogram2DOutliers_StaticNew,
    PyvtkComputeHistogram2DOutliers_Methods,
    "vtkComputeHistogram2DOutliers", modulename,
    NULL, NULL,
    PyvtkComputeHistogram2DOutliers_Doc(),
    PyVTKClass_vtkSelectionAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkComputeHistogram2DOutliers_InputPorts_Type);
    PyvtkComputeHistogram2DOutliers_InputPorts_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkComputeHistogram2DOutliers_InputPorts_Type;
    if (o && PyDict_SetItemString(d, (char *)"InputPorts", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkComputeHistogram2DOutliers_OutputPorts_Type);
    PyvtkComputeHistogram2DOutliers_OutputPorts_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkComputeHistogram2DOutliers_OutputPorts_Type;
    if (o && PyDict_SetItemString(d, (char *)"OutputPorts", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkComputeHistogram2DOutliers::InputPorts cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "INPUT_TABLE_DATA", vtkComputeHistogram2DOutliers::INPUT_TABLE_DATA },
          { "INPUT_HISTOGRAMS_IMAGE_DATA", vtkComputeHistogram2DOutliers::INPUT_HISTOGRAMS_IMAGE_DATA },
          { "INPUT_HISTOGRAMS_MULTIBLOCK", vtkComputeHistogram2DOutliers::INPUT_HISTOGRAMS_MULTIBLOCK },
        };

      o = PyvtkComputeHistogram2DOutliers_InputPorts_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkComputeHistogram2DOutliers::OutputPorts cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "OUTPUT_SELECTED_ROWS", vtkComputeHistogram2DOutliers::OUTPUT_SELECTED_ROWS },
          { "OUTPUT_SELECTED_TABLE_DATA", vtkComputeHistogram2DOutliers::OUTPUT_SELECTED_TABLE_DATA },
        };

      o = PyvtkComputeHistogram2DOutliers_OutputPorts_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkComputeHistogram2DOutliers_Doc()
{
  static const char *docstring[] = {
    "vtkComputeHistogram2DOutliers - compute the outliers in a set\n\n",
    "Superclass: vtkSelectionAlgorithm\n\n",
    "This class takes a table and one or more vtkImageData histograms as\ninput\n and computes the outliers in that data.  In general it does so by\n identifying histogram bins that are removed by a median (salt and\npepper)\n filter and below a threshold.  This threshold is automatically\nidentified\n to retrieve a number of outliers close to a user-determined value. \nThis\n value is set by calling SetPreferr",
    "edNumberOfOutliers(int).\n\n\n The image data input can come either as a multiple vtkImageData via\nthe\n repeatable INPUT_HISTOGRAM_IMAGE_DATA port, or as a single\n vtkMultiBlockDataSet containing vtkImageData objects as blocks.  One\n or the other must be set, not both (or neither).\n\n\n The output can be retrieved as a set of row ids in a vtkSelection or\n as a vtkTable containing the actual outlier row",
    " data.\n\nSee Also:\n\n\n vtkExtractHistogram2D vtkPComputeHistogram2DOutliers\n\nThanks:\n\n\n Developed by David Feng at Sandia National Laboratories\n----------------------------------------------------------------------\n    --------\n----------------------------------------------------------------------\n    --------\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkComputeHistogram2DOutliers(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkComputeHistogram2DOutliersNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkComputeHistogram2DOutliers", o) != 0)
    {
    Py_DECREF(o);
    }

}

