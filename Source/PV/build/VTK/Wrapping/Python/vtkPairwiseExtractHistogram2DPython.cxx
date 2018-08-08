// python wrapper for vtkPairwiseExtractHistogram2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPairwiseExtractHistogram2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPairwiseExtractHistogram2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPairwiseExtractHistogram2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
#endif

static const char **PyvtkPairwiseExtractHistogram2D_Doc();

#ifndef DECLARED_PyvtkPairwiseExtractHistogram2D_OutputIndices_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPairwiseExtractHistogram2D_OutputIndices_Type;
#define DECLARED_PyvtkPairwiseExtractHistogram2D_OutputIndices_Type
#endif

PyTypeObject PyvtkPairwiseExtractHistogram2D_OutputIndices_Type = {
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

PyObject *PyvtkPairwiseExtractHistogram2D_OutputIndices_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPairwiseExtractHistogram2D_OutputIndices_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPairwiseExtractHistogram2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPairwiseExtractHistogram2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPairwiseExtractHistogram2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPairwiseExtractHistogram2D::NewInstance());

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
PyvtkPairwiseExtractHistogram2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPairwiseExtractHistogram2D *tempr = vtkPairwiseExtractHistogram2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetNumberOfBins_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      op->vtkPairwiseExtractHistogram2D::SetNumberOfBins(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_SetNumberOfBins_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      op->vtkPairwiseExtractHistogram2D::SetNumberOfBins(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_SetNumberOfBins(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPairwiseExtractHistogram2D_SetNumberOfBins_s1(self, args);
    case 1:
      return PyvtkPairwiseExtractHistogram2D_SetNumberOfBins_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfBins");
  return NULL;
}



static PyObject *
PyvtkPairwiseExtractHistogram2D_GetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetNumberOfBins() :
      op->vtkPairwiseExtractHistogram2D::GetNumberOfBins());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetCustomColumnRangeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomColumnRangeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCustomColumnRangeIndex(temp0);
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetCustomColumnRangeIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetCustomColumnRangeByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomColumnRangeByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCustomColumnRangeByIndex(temp0, temp1);
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetCustomColumnRangeByIndex(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomColumnRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetCustomColumnRange(temp0, temp1);
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetCustomColumnRange(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomColumnRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetCustomColumnRange(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetCustomColumnRange(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange_s1(self, args);
    case 3:
      return PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomColumnRange");
  return NULL;
}



static PyObject *
PyvtkPairwiseExtractHistogram2D_SetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      op->vtkPairwiseExtractHistogram2D::SetScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarType() :
      op->vtkPairwiseExtractHistogram2D::GetScalarType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumBinCount(temp0) :
      op->vtkPairwiseExtractHistogram2D::GetMaximumBinCount(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumBinCount() :
      op->vtkPairwiseExtractHistogram2D::GetMaximumBinCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount_s1(self, args);
    case 0:
      return PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetMaximumBinCount");
  return NULL;
}



static PyObject *
PyvtkPairwiseExtractHistogram2D_GetBinRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  double temp3[4];
  double save3[4];
  const int size3 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->GetBinRange(temp0, temp1, temp2, temp3) :
      op->vtkPairwiseExtractHistogram2D::GetBinRange(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_GetBinRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
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
      op->vtkPairwiseExtractHistogram2D::GetBinRange(temp0, temp1, temp2));

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
PyvtkPairwiseExtractHistogram2D_GetBinRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPairwiseExtractHistogram2D_GetBinRange_s1(self, args);
    case 3:
      return PyvtkPairwiseExtractHistogram2D_GetBinRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBinRange");
  return NULL;
}



static PyObject *
PyvtkPairwiseExtractHistogram2D_GetBinWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetBinWidth(temp0, temp1);
      }
    else
      {
      op->vtkPairwiseExtractHistogram2D::GetBinWidth(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetHistogramExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetHistogramExtents(temp0) :
      op->vtkPairwiseExtractHistogram2D::GetHistogramExtents(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetOutputHistogramImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputHistogramImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutputHistogramImage(temp0) :
      op->vtkPairwiseExtractHistogram2D::GetOutputHistogramImage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetHistogramFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistogramFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkExtractHistogram2D *tempr = (ap.IsBound() ?
      op->GetHistogramFilter(temp0) :
      op->vtkPairwiseExtractHistogram2D::GetHistogramFilter(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      op->vtkPairwiseExtractHistogram2D::Aggregate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPairwiseExtractHistogram2D_Methods[] = {
  {(char*)"GetClassName", PyvtkPairwiseExtractHistogram2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPairwiseExtractHistogram2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPairwiseExtractHistogram2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPairwiseExtractHistogram2D\nC++: vtkPairwiseExtractHistogram2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPairwiseExtractHistogram2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPairwiseExtractHistogram2D\nC++: vtkPairwiseExtractHistogram2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfBins", PyvtkPairwiseExtractHistogram2D_SetNumberOfBins, METH_VARARGS,
   (char*)"V.SetNumberOfBins(int, int)\nC++: void SetNumberOfBins(int, int)\nV.SetNumberOfBins((int, int))\nC++: void SetNumberOfBins(int a[2])\n\n"},
  {(char*)"GetNumberOfBins", PyvtkPairwiseExtractHistogram2D_GetNumberOfBins, METH_VARARGS,
   (char*)"V.GetNumberOfBins() -> (int, int)\nC++: int *GetNumberOfBins()\n\n"},
  {(char*)"SetCustomColumnRangeIndex", PyvtkPairwiseExtractHistogram2D_SetCustomColumnRangeIndex, METH_VARARGS,
   (char*)"V.SetCustomColumnRangeIndex(int)\nC++: void SetCustomColumnRangeIndex(int a)\n\nStrange method for setting an index to be used for setting custom\ncolumn range. This was (probably) necessary to get this class to\ninteract with the ParaView client/server message passing\ninterface.\n"},
  {(char*)"SetCustomColumnRangeByIndex", PyvtkPairwiseExtractHistogram2D_SetCustomColumnRangeByIndex, METH_VARARGS,
   (char*)"V.SetCustomColumnRangeByIndex(float, float)\nC++: void SetCustomColumnRangeByIndex(double, double)\n\nStrange method for setting an index to be used for setting custom\ncolumn range. This was (probably) necessary to get this class to\ninteract with the ParaView client/server message passing\ninterface.\n"},
  {(char*)"SetCustomColumnRange", PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange, METH_VARARGS,
   (char*)"V.SetCustomColumnRange(int, [float, float])\nC++: void SetCustomColumnRange(int col, double range[2])\nV.SetCustomColumnRange(int, float, float)\nC++: void SetCustomColumnRange(int col, double rmin, double rmax)\n\nMore standard way to set the custom range for a particular\ncolumn. This makes sure that only the affected histograms know\nthat they need to be updated.\n"},
  {(char*)"SetScalarType", PyvtkPairwiseExtractHistogram2D_SetScalarType, METH_VARARGS,
   (char*)"V.SetScalarType(int)\nC++: void SetScalarType(int a)\n\nSet the scalar type for each of the computed histograms.\n"},
  {(char*)"SetScalarTypeToUnsignedInt", PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedInt, METH_VARARGS,
   (char*)"V.SetScalarTypeToUnsignedInt()\nC++: void SetScalarTypeToUnsignedInt()\n\nSet the scalar type for each of the computed histograms.\n"},
  {(char*)"SetScalarTypeToUnsignedLong", PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedLong, METH_VARARGS,
   (char*)"V.SetScalarTypeToUnsignedLong()\nC++: void SetScalarTypeToUnsignedLong()\n\nSet the scalar type for each of the computed histograms.\n"},
  {(char*)"SetScalarTypeToUnsignedShort", PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedShort, METH_VARARGS,
   (char*)"V.SetScalarTypeToUnsignedShort()\nC++: void SetScalarTypeToUnsignedShort()\n\nSet the scalar type for each of the computed histograms.\n"},
  {(char*)"SetScalarTypeToUnsignedChar", PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedChar, METH_VARARGS,
   (char*)"V.SetScalarTypeToUnsignedChar()\nC++: void SetScalarTypeToUnsignedChar()\n\nSet the scalar type for each of the computed histograms.\n"},
  {(char*)"GetScalarType", PyvtkPairwiseExtractHistogram2D_GetScalarType, METH_VARARGS,
   (char*)"V.GetScalarType() -> int\nC++: int GetScalarType()\n\nSet the scalar type for each of the computed histograms.\n"},
  {(char*)"GetMaximumBinCount", PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount, METH_VARARGS,
   (char*)"V.GetMaximumBinCount(int) -> float\nC++: double GetMaximumBinCount(int idx)\nV.GetMaximumBinCount() -> float\nC++: double GetMaximumBinCount()\n\nGet the maximum bin count for a single histogram\n"},
  {(char*)"GetBinRange", PyvtkPairwiseExtractHistogram2D_GetBinRange, METH_VARARGS,
   (char*)"V.GetBinRange(int, int, int, [float, float, float, float]) -> int\nC++: int GetBinRange(int idx, vtkIdType binX, vtkIdType binY,\n    double range[4])\nV.GetBinRange(int, int, [float, float, float, float]) -> int\nC++: int GetBinRange(int idx, vtkIdType bin, double range[4])\n\nCompute the range of the bin located at position (binX,binY) in\nthe 2D histogram at idx.\n"},
  {(char*)"GetBinWidth", PyvtkPairwiseExtractHistogram2D_GetBinWidth, METH_VARARGS,
   (char*)"V.GetBinWidth(int, [float, float])\nC++: void GetBinWidth(int idx, double bw[2])\n\nGet the width of all of the bins. Also stored in the spacing ivar\nof the histogram image output at idx.\n"},
  {(char*)"GetHistogramExtents", PyvtkPairwiseExtractHistogram2D_GetHistogramExtents, METH_VARARGS,
   (char*)"V.GetHistogramExtents(int) -> (float, ...)\nC++: double *GetHistogramExtents(int idx)\n\nGet the histogram extents currently in use, either computed or\nset by the user for the idx'th histogram.\n"},
  {(char*)"GetOutputHistogramImage", PyvtkPairwiseExtractHistogram2D_GetOutputHistogramImage, METH_VARARGS,
   (char*)"V.GetOutputHistogramImage(int) -> vtkImageData\nC++: vtkImageData *GetOutputHistogramImage(int idx)\n\nGet the vtkImageData output of the idx'th histogram filter\n"},
  {(char*)"GetHistogramFilter", PyvtkPairwiseExtractHistogram2D_GetHistogramFilter, METH_VARARGS,
   (char*)"V.GetHistogramFilter(int) -> vtkExtractHistogram2D\nC++: vtkExtractHistogram2D *GetHistogramFilter(int idx)\n\nGet a pointer to the idx'th histogram filter.\n"},
  {(char*)"Aggregate", PyvtkPairwiseExtractHistogram2D_Aggregate, METH_VARARGS,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model.  Not\nused\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPairwiseExtractHistogram2D_StaticNew()
{
  return vtkPairwiseExtractHistogram2D::New();
}

PyObject *PyVTKClass_vtkPairwiseExtractHistogram2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPairwiseExtractHistogram2D_StaticNew,
    PyvtkPairwiseExtractHistogram2D_Methods,
    "vtkPairwiseExtractHistogram2D", modulename,
    NULL, NULL,
    PyvtkPairwiseExtractHistogram2D_Doc(),
    PyVTKClass_vtkStatisticsAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPairwiseExtractHistogram2D_OutputIndices_Type);
    PyvtkPairwiseExtractHistogram2D_OutputIndices_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPairwiseExtractHistogram2D_OutputIndices_Type;
    if (o && PyDict_SetItemString(d, (char *)"OutputIndices", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyvtkPairwiseExtractHistogram2D_OutputIndices_FromEnum(vtkPairwiseExtractHistogram2D::HISTOGRAM_IMAGE);
    if (o)
      {
      PyDict_SetItemString(d, (char *)"HISTOGRAM_IMAGE", o);
      Py_DECREF(o);
      }
    }

  return cls;
}

const char **PyvtkPairwiseExtractHistogram2D_Doc()
{
  static const char *docstring[] = {
    "vtkPairwiseExtractHistogram2D - compute a 2D histogram between\n\n",
    "Superclass: vtkStatisticsAlgorithm\n\n",
    "This class computes a 2D histogram between all adjacent pairs of\ncolumns\n of an input vtkTable. Internally it creates multiple\nvtkExtractHistogram2D\n instances (one for each pair of adjacent table columns).  It also\n manages updating histogram computations intelligently, only\nrecomputing\n those histograms for whom a relevant property has been altered.\n\n\n Note that there are two different outputs f",
    "rom this filter.  One is\na\n table for which each column contains a flattened 2D histogram array.\n The other is a vtkMultiBlockDataSet for which each block is a\n vtkImageData representation of the 2D histogram.\n\nSee Also:\n\n\n vtkExtractHistogram2D vtkPPairwiseExtractHistogram2D\n\nThanks:\n\n\n Developed by David Feng and Philippe Pebay at Sandia National\nLaboratories\n------------------------------------",
    "----------------------------------\n    --------\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPairwiseExtractHistogram2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPairwiseExtractHistogram2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPairwiseExtractHistogram2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

