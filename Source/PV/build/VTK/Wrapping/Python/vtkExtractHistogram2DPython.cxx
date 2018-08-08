// python wrapper for vtkExtractHistogram2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractHistogram2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractHistogram2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractHistogram2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
#endif

static const char **PyvtkExtractHistogram2D_Doc();

#ifndef DECLARED_PyvtkExtractHistogram2D_OutputIndices_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkExtractHistogram2D_OutputIndices_Type;
#define DECLARED_PyvtkExtractHistogram2D_OutputIndices_Type
#endif

PyTypeObject PyvtkExtractHistogram2D_OutputIndices_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"OutputIndices", // tp_name
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

PyObject *PyvtkExtractHistogram2D_OutputIndices_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkExtractHistogram2D_OutputIndices_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkExtractHistogram2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractHistogram2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractHistogram2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractHistogram2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractHistogram2D::NewInstance());

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
PyvtkExtractHistogram2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractHistogram2D *tempr = vtkExtractHistogram2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetNumberOfBins_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfBins(temp0, temp1);
      }
    else
      {
      op->vtkExtractHistogram2D::SetNumberOfBins(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetNumberOfBins_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfBins(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::SetNumberOfBins(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetNumberOfBins(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkExtractHistogram2D_SetNumberOfBins_s1(self, args);
    case 1:
      return PyvtkExtractHistogram2D_SetNumberOfBins_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfBins");
  return NULL;
}



static PyObject *
PyvtkExtractHistogram2D_GetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetNumberOfBins() :
      op->vtkExtractHistogram2D::GetNumberOfBins());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetComponentsToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentsToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetComponentsToProcess(temp0, temp1);
      }
    else
      {
      op->vtkExtractHistogram2D::SetComponentsToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetComponentsToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentsToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetComponentsToProcess(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::SetComponentsToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetComponentsToProcess(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkExtractHistogram2D_SetComponentsToProcess_s1(self, args);
    case 1:
      return PyvtkExtractHistogram2D_SetComponentsToProcess_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetComponentsToProcess");
  return NULL;
}



static PyObject *
PyvtkExtractHistogram2D_GetComponentsToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentsToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetComponentsToProcess() :
      op->vtkExtractHistogram2D::GetComponentsToProcess());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetCustomHistogramExtents_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetCustomHistogramExtents(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkExtractHistogram2D::SetCustomHistogramExtents(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetCustomHistogramExtents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCustomHistogramExtents(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::SetCustomHistogramExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetCustomHistogramExtents(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkExtractHistogram2D_SetCustomHistogramExtents_s1(self, args);
    case 1:
      return PyvtkExtractHistogram2D_SetCustomHistogramExtents_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomHistogramExtents");
  return NULL;
}



static PyObject *
PyvtkExtractHistogram2D_GetCustomHistogramExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCustomHistogramExtents() :
      op->vtkExtractHistogram2D::GetCustomHistogramExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetUseCustomHistogramExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseCustomHistogramExtents(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::SetUseCustomHistogramExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetUseCustomHistogramExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseCustomHistogramExtents() :
      op->vtkExtractHistogram2D::GetUseCustomHistogramExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_UseCustomHistogramExtentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomHistogramExtentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCustomHistogramExtentsOn();
      }
    else
      {
      op->vtkExtractHistogram2D::UseCustomHistogramExtentsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_UseCustomHistogramExtentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomHistogramExtentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCustomHistogramExtentsOff();
      }
    else
      {
      op->vtkExtractHistogram2D::UseCustomHistogramExtentsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarType(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::SetScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkExtractHistogram2D::SetScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkExtractHistogram2D::SetScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkExtractHistogram2D::SetScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkExtractHistogram2D::SetScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToFloat();
      }
    else
      {
      op->vtkExtractHistogram2D::SetScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToDouble();
      }
    else
      {
      op->vtkExtractHistogram2D::SetScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarType() :
      op->vtkExtractHistogram2D::GetScalarType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetMaximumBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumBinCount() :
      op->vtkExtractHistogram2D::GetMaximumBinCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetBinRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  double temp2[4];
  double save2[4];
  const int size2 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetBinRange(temp0, temp1, temp2) :
      op->vtkExtractHistogram2D::GetBinRange(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_GetBinRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  vtkIdType temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetBinRange(temp0, temp1) :
      op->vtkExtractHistogram2D::GetBinRange(temp0, temp1));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_GetBinRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkExtractHistogram2D_GetBinRange_s1(self, args);
    case 2:
      return PyvtkExtractHistogram2D_GetBinRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBinRange");
  return NULL;
}



static PyObject *
PyvtkExtractHistogram2D_GetBinWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBinWidth(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::GetBinWidth(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetOutputHistogramImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputHistogramImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutputHistogramImage() :
      op->vtkExtractHistogram2D::GetOutputHistogramImage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetHistogramExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetHistogramExtents() :
      op->vtkExtractHistogram2D::GetHistogramExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetSwapColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSwapColumns(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::SetSwapColumns(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetSwapColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSwapColumns() :
      op->vtkExtractHistogram2D::GetSwapColumns());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SwapColumnsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapColumnsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapColumnsOn();
      }
    else
      {
      op->vtkExtractHistogram2D::SwapColumnsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SwapColumnsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapColumnsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapColumnsOff();
      }
    else
      {
      op->vtkExtractHistogram2D::SwapColumnsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetRowMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRowMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetRowMask(temp0);
      }
    else
      {
      op->vtkExtractHistogram2D::SetRowMask(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetRowMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetRowMask() :
      op->vtkExtractHistogram2D::GetRowMask());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  vtkDataObjectCollection *temp0 = NULL;
  vtkMultiBlockDataSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectCollection") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet"))
    {
    if (ap.IsBound())
      {
      op->Aggregate(temp0, temp1);
      }
    else
      {
      op->vtkExtractHistogram2D::Aggregate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractHistogram2D_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractHistogram2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractHistogram2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractHistogram2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractHistogram2D\nC++: vtkExtractHistogram2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractHistogram2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractHistogram2D\nC++: vtkExtractHistogram2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfBins", PyvtkExtractHistogram2D_SetNumberOfBins, METH_VARARGS,
   (char*)"V.SetNumberOfBins(int, int)\nC++: void SetNumberOfBins(int, int)\nV.SetNumberOfBins((int, int))\nC++: void SetNumberOfBins(int a[2])\n\n"},
  {(char*)"GetNumberOfBins", PyvtkExtractHistogram2D_GetNumberOfBins, METH_VARARGS,
   (char*)"V.GetNumberOfBins() -> (int, int)\nC++: int *GetNumberOfBins()\n\n"},
  {(char*)"SetComponentsToProcess", PyvtkExtractHistogram2D_SetComponentsToProcess, METH_VARARGS,
   (char*)"V.SetComponentsToProcess(int, int)\nC++: void SetComponentsToProcess(int, int)\nV.SetComponentsToProcess((int, int))\nC++: void SetComponentsToProcess(int a[2])\n\n"},
  {(char*)"GetComponentsToProcess", PyvtkExtractHistogram2D_GetComponentsToProcess, METH_VARARGS,
   (char*)"V.GetComponentsToProcess() -> (int, int)\nC++: int *GetComponentsToProcess()\n\n"},
  {(char*)"SetCustomHistogramExtents", PyvtkExtractHistogram2D_SetCustomHistogramExtents, METH_VARARGS,
   (char*)"V.SetCustomHistogramExtents(float, float, float, float)\nC++: void SetCustomHistogramExtents(double, double, double,\n    double)\nV.SetCustomHistogramExtents((float, float, float, float))\nC++: void SetCustomHistogramExtents(double a[4])\n\n"},
  {(char*)"GetCustomHistogramExtents", PyvtkExtractHistogram2D_GetCustomHistogramExtents, METH_VARARGS,
   (char*)"V.GetCustomHistogramExtents() -> (float, float, float, float)\nC++: double *GetCustomHistogramExtents()\n\n"},
  {(char*)"SetUseCustomHistogramExtents", PyvtkExtractHistogram2D_SetUseCustomHistogramExtents, METH_VARARGS,
   (char*)"V.SetUseCustomHistogramExtents(int)\nC++: void SetUseCustomHistogramExtents(int a)\n\nUse the extents in CustomHistogramExtents when computing the\nhistogram, rather than the simple range of the input columns.\n"},
  {(char*)"GetUseCustomHistogramExtents", PyvtkExtractHistogram2D_GetUseCustomHistogramExtents, METH_VARARGS,
   (char*)"V.GetUseCustomHistogramExtents() -> int\nC++: int GetUseCustomHistogramExtents()\n\nUse the extents in CustomHistogramExtents when computing the\nhistogram, rather than the simple range of the input columns.\n"},
  {(char*)"UseCustomHistogramExtentsOn", PyvtkExtractHistogram2D_UseCustomHistogramExtentsOn, METH_VARARGS,
   (char*)"V.UseCustomHistogramExtentsOn()\nC++: void UseCustomHistogramExtentsOn()\n\nUse the extents in CustomHistogramExtents when computing the\nhistogram, rather than the simple range of the input columns.\n"},
  {(char*)"UseCustomHistogramExtentsOff", PyvtkExtractHistogram2D_UseCustomHistogramExtentsOff, METH_VARARGS,
   (char*)"V.UseCustomHistogramExtentsOff()\nC++: void UseCustomHistogramExtentsOff()\n\nUse the extents in CustomHistogramExtents when computing the\nhistogram, rather than the simple range of the input columns.\n"},
  {(char*)"SetScalarType", PyvtkExtractHistogram2D_SetScalarType, METH_VARARGS,
   (char*)"V.SetScalarType(int)\nC++: void SetScalarType(int a)\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"SetScalarTypeToUnsignedInt", PyvtkExtractHistogram2D_SetScalarTypeToUnsignedInt, METH_VARARGS,
   (char*)"V.SetScalarTypeToUnsignedInt()\nC++: void SetScalarTypeToUnsignedInt()\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"SetScalarTypeToUnsignedLong", PyvtkExtractHistogram2D_SetScalarTypeToUnsignedLong, METH_VARARGS,
   (char*)"V.SetScalarTypeToUnsignedLong()\nC++: void SetScalarTypeToUnsignedLong()\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"SetScalarTypeToUnsignedShort", PyvtkExtractHistogram2D_SetScalarTypeToUnsignedShort, METH_VARARGS,
   (char*)"V.SetScalarTypeToUnsignedShort()\nC++: void SetScalarTypeToUnsignedShort()\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"SetScalarTypeToUnsignedChar", PyvtkExtractHistogram2D_SetScalarTypeToUnsignedChar, METH_VARARGS,
   (char*)"V.SetScalarTypeToUnsignedChar()\nC++: void SetScalarTypeToUnsignedChar()\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"SetScalarTypeToFloat", PyvtkExtractHistogram2D_SetScalarTypeToFloat, METH_VARARGS,
   (char*)"V.SetScalarTypeToFloat()\nC++: void SetScalarTypeToFloat()\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"SetScalarTypeToDouble", PyvtkExtractHistogram2D_SetScalarTypeToDouble, METH_VARARGS,
   (char*)"V.SetScalarTypeToDouble()\nC++: void SetScalarTypeToDouble()\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"GetScalarType", PyvtkExtractHistogram2D_GetScalarType, METH_VARARGS,
   (char*)"V.GetScalarType() -> int\nC++: int GetScalarType()\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {(char*)"GetMaximumBinCount", PyvtkExtractHistogram2D_GetMaximumBinCount, METH_VARARGS,
   (char*)"V.GetMaximumBinCount() -> float\nC++: double GetMaximumBinCount()\n\nAccess the count of the histogram bin containing the largest\nnumber of input rows.\n"},
  {(char*)"GetBinRange", PyvtkExtractHistogram2D_GetBinRange, METH_VARARGS,
   (char*)"V.GetBinRange(int, int, [float, float, float, float]) -> int\nC++: int GetBinRange(vtkIdType binX, vtkIdType binY,\n    double range[4])\nV.GetBinRange(int, [float, float, float, float]) -> int\nC++: int GetBinRange(vtkIdType bin, double range[4])\n\nCompute the range of the bin located at position (binX,binY) in\nthe 2D histogram.\n"},
  {(char*)"GetBinWidth", PyvtkExtractHistogram2D_GetBinWidth, METH_VARARGS,
   (char*)"V.GetBinWidth([float, float])\nC++: void GetBinWidth(double bw[2])\n\nGet the width of all of the bins. Also stored in the spacing ivar\nof the histogram image output.\n"},
  {(char*)"GetOutputHistogramImage", PyvtkExtractHistogram2D_GetOutputHistogramImage, METH_VARARGS,
   (char*)"V.GetOutputHistogramImage() -> vtkImageData\nC++: vtkImageData *GetOutputHistogramImage()\n\nGets the data object at the histogram image output port and casts\nit to a vtkImageData.\n"},
  {(char*)"GetHistogramExtents", PyvtkExtractHistogram2D_GetHistogramExtents, METH_VARARGS,
   (char*)"V.GetHistogramExtents() -> (float, ...)\nC++: double *GetHistogramExtents()\n\nGet the histogram extents currently in use, either computed or\nset by the user.\n"},
  {(char*)"SetSwapColumns", PyvtkExtractHistogram2D_SetSwapColumns, METH_VARARGS,
   (char*)"V.SetSwapColumns(int)\nC++: void SetSwapColumns(int a)\n\n"},
  {(char*)"GetSwapColumns", PyvtkExtractHistogram2D_GetSwapColumns, METH_VARARGS,
   (char*)"V.GetSwapColumns() -> int\nC++: int GetSwapColumns()\n\n"},
  {(char*)"SwapColumnsOn", PyvtkExtractHistogram2D_SwapColumnsOn, METH_VARARGS,
   (char*)"V.SwapColumnsOn()\nC++: void SwapColumnsOn()\n\n"},
  {(char*)"SwapColumnsOff", PyvtkExtractHistogram2D_SwapColumnsOff, METH_VARARGS,
   (char*)"V.SwapColumnsOff()\nC++: void SwapColumnsOff()\n\n"},
  {(char*)"SetRowMask", PyvtkExtractHistogram2D_SetRowMask, METH_VARARGS,
   (char*)"V.SetRowMask(vtkDataArray)\nC++: virtual void SetRowMask(vtkDataArray *)\n\nGet/Set an optional mask that can ignore rows of the table\n"},
  {(char*)"GetRowMask", PyvtkExtractHistogram2D_GetRowMask, METH_VARARGS,
   (char*)"V.GetRowMask() -> vtkDataArray\nC++: vtkDataArray *GetRowMask()\n\nGet/Set an optional mask that can ignore rows of the table\n"},
  {(char*)"Aggregate", PyvtkExtractHistogram2D_Aggregate, METH_VARARGS,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model. Not\nused.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractHistogram2D_StaticNew()
{
  return vtkExtractHistogram2D::New();
}

PyObject *PyVTKClass_vtkExtractHistogram2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractHistogram2D_StaticNew,
    PyvtkExtractHistogram2D_Methods,
    "vtkExtractHistogram2D", modulename,
    NULL, NULL,
    PyvtkExtractHistogram2D_Doc(),
    PyVTKClass_vtkStatisticsAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkExtractHistogram2D_OutputIndices_Type);
    PyvtkExtractHistogram2D_OutputIndices_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkExtractHistogram2D_OutputIndices_Type;
    if (o && PyDict_SetItemString(d, (char *)"OutputIndices", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyvtkExtractHistogram2D_OutputIndices_FromEnum(vtkExtractHistogram2D::HISTOGRAM_IMAGE);
    if (o)
      {
      PyDict_SetItemString(d, (char *)"HISTOGRAM_IMAGE", o);
      Py_DECREF(o);
      }
    }

  return cls;
}

const char **PyvtkExtractHistogram2D_Doc()
{
  static const char *docstring[] = {
    "vtkExtractHistogram2D - compute a 2D histogram between two columns\n\n",
    "Superclass: vtkStatisticsAlgorithm\n\n",
    "This class computes a 2D histogram between two columns of an input\n vtkTable. Just as with a 1D histogram, a 2D histogram breaks\n up the input domain into bins, and each pair of values (row in\n the table) fits into a single bin and increments a row counter\n for that bin.\n\n\n To use this class, set the input with a table and call\nAddColumnPair(nameX,nameY),\n where nameX and nameY are the names of th",
    "e two columns to be used.\n\n\n In addition to the number of bins (in X and Y), the domain of\n the histogram can be customized by toggling the\nUseCustomHistogramExtents\n flag and setting the CustomHistogramExtents variable to the\n desired value.\n\nSee Also:\n\n\n vtkPExtractHistogram2D\n\nThanks:\n\n\n Developed by David Feng and Philippe Pebay at Sandia National\nLaboratories\n---------------------------------",
    "-------------------------------------\n    --------\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractHistogram2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractHistogram2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractHistogram2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

