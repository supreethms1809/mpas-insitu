// python wrapper for vtkDistributedDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkDistributedDataFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDistributedDataFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDistributedDataFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkDistributedDataFilter_Doc();

#ifndef DECLARED_PyvtkDistributedDataFilter_BoundaryModes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkDistributedDataFilter_BoundaryModes_Type;
#define DECLARED_PyvtkDistributedDataFilter_BoundaryModes_Type
#endif

PyTypeObject PyvtkDistributedDataFilter_BoundaryModes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"BoundaryModes", // tp_name
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

PyObject *PyvtkDistributedDataFilter_BoundaryModes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDistributedDataFilter_BoundaryModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkDistributedDataFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

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
      op->vtkDistributedDataFilter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkDistributedDataFilter::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetKdtree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKdtree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPKdTree *tempr = (ap.IsBound() ?
      op->GetKdtree() :
      op->vtkDistributedDataFilter::GetKdtree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_RetainKdtreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RetainKdtreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RetainKdtreeOn();
      }
    else
      {
      op->vtkDistributedDataFilter::RetainKdtreeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_RetainKdtreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RetainKdtreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RetainKdtreeOff();
      }
    else
      {
      op->vtkDistributedDataFilter::RetainKdtreeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetRetainKdtree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRetainKdtree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRetainKdtree() :
      op->vtkDistributedDataFilter::GetRetainKdtree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetRetainKdtree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRetainKdtree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRetainKdtree(temp0);
      }
    else
      {
      op->vtkDistributedDataFilter::SetRetainKdtree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_IncludeAllIntersectingCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeAllIntersectingCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeAllIntersectingCellsOn();
      }
    else
      {
      op->vtkDistributedDataFilter::IncludeAllIntersectingCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_IncludeAllIntersectingCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeAllIntersectingCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeAllIntersectingCellsOff();
      }
    else
      {
      op->vtkDistributedDataFilter::IncludeAllIntersectingCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetIncludeAllIntersectingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeAllIntersectingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIncludeAllIntersectingCells() :
      op->vtkDistributedDataFilter::GetIncludeAllIntersectingCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetIncludeAllIntersectingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeAllIntersectingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIncludeAllIntersectingCells(temp0);
      }
    else
      {
      op->vtkDistributedDataFilter::SetIncludeAllIntersectingCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_ClipCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClipCellsOn();
      }
    else
      {
      op->vtkDistributedDataFilter::ClipCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_ClipCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClipCellsOff();
      }
    else
      {
      op->vtkDistributedDataFilter::ClipCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetClipCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClipCells() :
      op->vtkDistributedDataFilter::GetClipCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetClipCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClipCells(temp0);
      }
    else
      {
      op->vtkDistributedDataFilter::SetClipCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetBoundaryMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBoundaryMode(temp0);
      }
    else
      {
      op->vtkDistributedDataFilter::SetBoundaryMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetBoundaryModeToAssignToOneRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryModeToAssignToOneRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBoundaryModeToAssignToOneRegion();
      }
    else
      {
      op->vtkDistributedDataFilter::SetBoundaryModeToAssignToOneRegion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetBoundaryModeToAssignToAllIntersectingRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryModeToAssignToAllIntersectingRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBoundaryModeToAssignToAllIntersectingRegions();
      }
    else
      {
      op->vtkDistributedDataFilter::SetBoundaryModeToAssignToAllIntersectingRegions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetBoundaryModeToSplitBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryModeToSplitBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBoundaryModeToSplitBoundaryCells();
      }
    else
      {
      op->vtkDistributedDataFilter::SetBoundaryModeToSplitBoundaryCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetBoundaryMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBoundaryMode() :
      op->vtkDistributedDataFilter::GetBoundaryMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_UseMinimalMemoryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMinimalMemoryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseMinimalMemoryOn();
      }
    else
      {
      op->vtkDistributedDataFilter::UseMinimalMemoryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_UseMinimalMemoryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMinimalMemoryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseMinimalMemoryOff();
      }
    else
      {
      op->vtkDistributedDataFilter::UseMinimalMemoryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetUseMinimalMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMinimalMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseMinimalMemory() :
      op->vtkDistributedDataFilter::GetUseMinimalMemory());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetUseMinimalMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMinimalMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseMinimalMemory(temp0);
      }
    else
      {
      op->vtkDistributedDataFilter::SetUseMinimalMemory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_TimingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TimingOn();
      }
    else
      {
      op->vtkDistributedDataFilter::TimingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_TimingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TimingOff();
      }
    else
      {
      op->vtkDistributedDataFilter::TimingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetTiming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTiming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTiming(temp0);
      }
    else
      {
      op->vtkDistributedDataFilter::SetTiming(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetTiming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTiming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTiming() :
      op->vtkDistributedDataFilter::GetTiming());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBSPCuts *tempr = (ap.IsBound() ?
      op->GetCuts() :
      op->vtkDistributedDataFilter::GetCuts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  vtkBSPCuts *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBSPCuts"))
    {
    if (ap.IsBound())
      {
      op->SetCuts(temp0);
      }
    else
      {
      op->vtkDistributedDataFilter::SetCuts(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetUserRegionAssignments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserRegionAssignments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetUserRegionAssignments(temp0, temp1);
      }
    else
      {
      op->vtkDistributedDataFilter::SetUserRegionAssignments(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyMethodDef PyvtkDistributedDataFilter_Methods[] = {
  {(char*)"SetController", PyvtkDistributedDataFilter_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/Get the communicator object\n"},
  {(char*)"GetController", PyvtkDistributedDataFilter_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get the communicator object\n"},
  {(char*)"GetKdtree", PyvtkDistributedDataFilter_GetKdtree, METH_VARARGS,
   (char*)"V.GetKdtree() -> vtkPKdTree\nC++: vtkPKdTree *GetKdtree()\n\nGet a pointer to the parallel k-d tree object.  Required for\nchanging\n  default behavior for region assignment, changing default depth\nof tree,\n  or other tree building default parameters.  See vtkPKdTree and\n  vtkKdTree for more information about these options.\n  NOTE: Changing the tree returned by this method does NOT change\n  the d3 filter. Make sure to call Modified() on the d3 object if\n  you want it to re-execute.\n"},
  {(char*)"RetainKdtreeOn", PyvtkDistributedDataFilter_RetainKdtreeOn, METH_VARARGS,
   (char*)"V.RetainKdtreeOn()\nC++: void RetainKdtreeOn()\n\nWhen this filter executes, it creates a vtkPKdTree (K-d tree)\n   data structure in parallel which divides the total distributed\n   data set into spatial regions.  The K-d tree object also\ncreates\n   tables describing which processes have data for which\n   regions.  Only then does this filter redistribute\n   the data according to the region assignment scheme.  By\ndefault,\n   the K-d tree structure and it's associated tables are deleted\n   after the filter executes.  If you anticipate changing only\nthe\n   region assignment scheme (input is unchanged) and explicitly\n   re-executing, then RetainKdTreeOn, and the K-d tree structure\nand\n   tables will be saved.  Then, when you re-execute, this filter\nwill\n   skip the k-d tree build phase and go straight to\nredistributing\n   the data according to region assignment.  See vtkPKdTree for\n   more information about region assignment.\n"},
  {(char*)"RetainKdtreeOff", PyvtkDistributedDataFilter_RetainKdtreeOff, METH_VARARGS,
   (char*)"V.RetainKdtreeOff()\nC++: void RetainKdtreeOff()\n\nWhen this filter executes, it creates a vtkPKdTree (K-d tree)\n   data structure in parallel which divides the total distributed\n   data set into spatial regions.  The K-d tree object also\ncreates\n   tables describing which processes have data for which\n   regions.  Only then does this filter redistribute\n   the data according to the region assignment scheme.  By\ndefault,\n   the K-d tree structure and it's associated tables are deleted\n   after the filter executes.  If you anticipate changing only\nthe\n   region assignment scheme (input is unchanged) and explicitly\n   re-executing, then RetainKdTreeOn, and the K-d tree structure\nand\n   tables will be saved.  Then, when you re-execute, this filter\nwill\n   skip the k-d tree build phase and go straight to\nredistributing\n   the data according to region assignment.  See vtkPKdTree for\n   more information about region assignment.\n"},
  {(char*)"GetRetainKdtree", PyvtkDistributedDataFilter_GetRetainKdtree, METH_VARARGS,
   (char*)"V.GetRetainKdtree() -> int\nC++: int GetRetainKdtree()\n\nWhen this filter executes, it creates a vtkPKdTree (K-d tree)\n   data structure in parallel which divides the total distributed\n   data set into spatial regions.  The K-d tree object also\ncreates\n   tables describing which processes have data for which\n   regions.  Only then does this filter redistribute\n   the data according to the region assignment scheme.  By\ndefault,\n   the K-d tree structure and it's associated tables are deleted\n   after the filter executes.  If you anticipate changing only\nthe\n   region assignment scheme (input is unchanged) and explicitly\n   re-executing, then RetainKdTreeOn, and the K-d tree structure\nand\n   tables will be saved.  Then, when you re-execute, this filter\nwill\n   skip the k-d tree build phase and go straight to\nredistributing\n   the data according to region assignment.  See vtkPKdTree for\n   more information about region assignment.\n"},
  {(char*)"SetRetainKdtree", PyvtkDistributedDataFilter_SetRetainKdtree, METH_VARARGS,
   (char*)"V.SetRetainKdtree(int)\nC++: void SetRetainKdtree(int a)\n\nWhen this filter executes, it creates a vtkPKdTree (K-d tree)\n   data structure in parallel which divides the total distributed\n   data set into spatial regions.  The K-d tree object also\ncreates\n   tables describing which processes have data for which\n   regions.  Only then does this filter redistribute\n   the data according to the region assignment scheme.  By\ndefault,\n   the K-d tree structure and it's associated tables are deleted\n   after the filter executes.  If you anticipate changing only\nthe\n   region assignment scheme (input is unchanged) and explicitly\n   re-executing, then RetainKdTreeOn, and the K-d tree structure\nand\n   tables will be saved.  Then, when you re-execute, this filter\nwill\n   skip the k-d tree build phase and go straight to\nredistributing\n   the data according to region assignment.  See vtkPKdTree for\n   more information about region assignment.\n"},
  {(char*)"IncludeAllIntersectingCellsOn", PyvtkDistributedDataFilter_IncludeAllIntersectingCellsOn, METH_VARARGS,
   (char*)"V.IncludeAllIntersectingCellsOn()\nC++: void IncludeAllIntersectingCellsOn()\n\nEach cell in the data set is associated with one of the\n  spatial regions of the k-d tree decomposition.  In particular,\n  the cell belongs to the region that it's centroid lies in.\n  When the new vtkUnstructuredGrid is created, by default it\n  is composed of the cells associated with the region(s)\n  assigned to this process.  If you also want it to contain\n  cells that intersect these regions, but have their centroid\n  elsewhere, then set this variable on.  By default it is off.\n"},
  {(char*)"IncludeAllIntersectingCellsOff", PyvtkDistributedDataFilter_IncludeAllIntersectingCellsOff, METH_VARARGS,
   (char*)"V.IncludeAllIntersectingCellsOff()\nC++: void IncludeAllIntersectingCellsOff()\n\nEach cell in the data set is associated with one of the\n  spatial regions of the k-d tree decomposition.  In particular,\n  the cell belongs to the region that it's centroid lies in.\n  When the new vtkUnstructuredGrid is created, by default it\n  is composed of the cells associated with the region(s)\n  assigned to this process.  If you also want it to contain\n  cells that intersect these regions, but have their centroid\n  elsewhere, then set this variable on.  By default it is off.\n"},
  {(char*)"GetIncludeAllIntersectingCells", PyvtkDistributedDataFilter_GetIncludeAllIntersectingCells, METH_VARARGS,
   (char*)"V.GetIncludeAllIntersectingCells() -> int\nC++: int GetIncludeAllIntersectingCells()\n\nEach cell in the data set is associated with one of the\n  spatial regions of the k-d tree decomposition.  In particular,\n  the cell belongs to the region that it's centroid lies in.\n  When the new vtkUnstructuredGrid is created, by default it\n  is composed of the cells associated with the region(s)\n  assigned to this process.  If you also want it to contain\n  cells that intersect these regions, but have their centroid\n  elsewhere, then set this variable on.  By default it is off.\n"},
  {(char*)"SetIncludeAllIntersectingCells", PyvtkDistributedDataFilter_SetIncludeAllIntersectingCells, METH_VARARGS,
   (char*)"V.SetIncludeAllIntersectingCells(int)\nC++: void SetIncludeAllIntersectingCells(int a)\n\nEach cell in the data set is associated with one of the\n  spatial regions of the k-d tree decomposition.  In particular,\n  the cell belongs to the region that it's centroid lies in.\n  When the new vtkUnstructuredGrid is created, by default it\n  is composed of the cells associated with the region(s)\n  assigned to this process.  If you also want it to contain\n  cells that intersect these regions, but have their centroid\n  elsewhere, then set this variable on.  By default it is off.\n"},
  {(char*)"ClipCellsOn", PyvtkDistributedDataFilter_ClipCellsOn, METH_VARARGS,
   (char*)"V.ClipCellsOn()\nC++: void ClipCellsOn()\n\nSet this variable if you want the cells of the output\n  vtkUnstructuredGrid to be clipped to the spatial region\n  boundaries.  By default this is off.\n"},
  {(char*)"ClipCellsOff", PyvtkDistributedDataFilter_ClipCellsOff, METH_VARARGS,
   (char*)"V.ClipCellsOff()\nC++: void ClipCellsOff()\n\nSet this variable if you want the cells of the output\n  vtkUnstructuredGrid to be clipped to the spatial region\n  boundaries.  By default this is off.\n"},
  {(char*)"GetClipCells", PyvtkDistributedDataFilter_GetClipCells, METH_VARARGS,
   (char*)"V.GetClipCells() -> int\nC++: int GetClipCells()\n\nSet this variable if you want the cells of the output\n  vtkUnstructuredGrid to be clipped to the spatial region\n  boundaries.  By default this is off.\n"},
  {(char*)"SetClipCells", PyvtkDistributedDataFilter_SetClipCells, METH_VARARGS,
   (char*)"V.SetClipCells(int)\nC++: void SetClipCells(int a)\n\nSet this variable if you want the cells of the output\n  vtkUnstructuredGrid to be clipped to the spatial region\n  boundaries.  By default this is off.\n"},
  {(char*)"SetBoundaryMode", PyvtkDistributedDataFilter_SetBoundaryMode, METH_VARARGS,
   (char*)"V.SetBoundaryMode(int)\nC++: void SetBoundaryMode(int mode)\n\nHandling of ClipCells and IncludeAllIntersectingCells.\n"},
  {(char*)"SetBoundaryModeToAssignToOneRegion", PyvtkDistributedDataFilter_SetBoundaryModeToAssignToOneRegion, METH_VARARGS,
   (char*)"V.SetBoundaryModeToAssignToOneRegion()\nC++: void SetBoundaryModeToAssignToOneRegion()\n\nHandling of ClipCells and IncludeAllIntersectingCells.\n"},
  {(char*)"SetBoundaryModeToAssignToAllIntersectingRegions", PyvtkDistributedDataFilter_SetBoundaryModeToAssignToAllIntersectingRegions, METH_VARARGS,
   (char*)"V.SetBoundaryModeToAssignToAllIntersectingRegions()\nC++: void SetBoundaryModeToAssignToAllIntersectingRegions()\n\nHandling of ClipCells and IncludeAllIntersectingCells.\n"},
  {(char*)"SetBoundaryModeToSplitBoundaryCells", PyvtkDistributedDataFilter_SetBoundaryModeToSplitBoundaryCells, METH_VARARGS,
   (char*)"V.SetBoundaryModeToSplitBoundaryCells()\nC++: void SetBoundaryModeToSplitBoundaryCells()\n\nHandling of ClipCells and IncludeAllIntersectingCells.\n"},
  {(char*)"GetBoundaryMode", PyvtkDistributedDataFilter_GetBoundaryMode, METH_VARARGS,
   (char*)"V.GetBoundaryMode() -> int\nC++: int GetBoundaryMode()\n\nHandling of ClipCells and IncludeAllIntersectingCells.\n"},
  {(char*)"UseMinimalMemoryOn", PyvtkDistributedDataFilter_UseMinimalMemoryOn, METH_VARARGS,
   (char*)"V.UseMinimalMemoryOn()\nC++: void UseMinimalMemoryOn()\n\nThis class does a great deal of all-to-all communication\n when exchanging portions of data sets and building new sub\n grids.\n By default it will do fast communication.  It can instead\n use communication routines that use the least possible\n amount of memory, but these are slower.  Set this option\n ON to choose these latter routines.\n"},
  {(char*)"UseMinimalMemoryOff", PyvtkDistributedDataFilter_UseMinimalMemoryOff, METH_VARARGS,
   (char*)"V.UseMinimalMemoryOff()\nC++: void UseMinimalMemoryOff()\n\nThis class does a great deal of all-to-all communication\n when exchanging portions of data sets and building new sub\n grids.\n By default it will do fast communication.  It can instead\n use communication routines that use the least possible\n amount of memory, but these are slower.  Set this option\n ON to choose these latter routines.\n"},
  {(char*)"GetUseMinimalMemory", PyvtkDistributedDataFilter_GetUseMinimalMemory, METH_VARARGS,
   (char*)"V.GetUseMinimalMemory() -> int\nC++: int GetUseMinimalMemory()\n\nThis class does a great deal of all-to-all communication\n when exchanging portions of data sets and building new sub\n grids.\n By default it will do fast communication.  It can instead\n use communication routines that use the least possible\n amount of memory, but these are slower.  Set this option\n ON to choose these latter routines.\n"},
  {(char*)"SetUseMinimalMemory", PyvtkDistributedDataFilter_SetUseMinimalMemory, METH_VARARGS,
   (char*)"V.SetUseMinimalMemory(int)\nC++: void SetUseMinimalMemory(int a)\n\nThis class does a great deal of all-to-all communication\n when exchanging portions of data sets and building new sub\n grids.\n By default it will do fast communication.  It can instead\n use communication routines that use the least possible\n amount of memory, but these are slower.  Set this option\n ON to choose these latter routines.\n"},
  {(char*)"TimingOn", PyvtkDistributedDataFilter_TimingOn, METH_VARARGS,
   (char*)"V.TimingOn()\nC++: void TimingOn()\n\nTurn on collection of timing data\n"},
  {(char*)"TimingOff", PyvtkDistributedDataFilter_TimingOff, METH_VARARGS,
   (char*)"V.TimingOff()\nC++: void TimingOff()\n\nTurn on collection of timing data\n"},
  {(char*)"SetTiming", PyvtkDistributedDataFilter_SetTiming, METH_VARARGS,
   (char*)"V.SetTiming(int)\nC++: void SetTiming(int a)\n\nTurn on collection of timing data\n"},
  {(char*)"GetTiming", PyvtkDistributedDataFilter_GetTiming, METH_VARARGS,
   (char*)"V.GetTiming() -> int\nC++: int GetTiming()\n\nTurn on collection of timing data\n"},
  {(char*)"GetCuts", PyvtkDistributedDataFilter_GetCuts, METH_VARARGS,
   (char*)"V.GetCuts() -> vtkBSPCuts\nC++: vtkBSPCuts *GetCuts()\n\nYou can set the k-d tree decomposition, rather than have D3\ncompute it.  This allows you to divide a dataset using the\ndecomposition computed for another dataset.  Obtain a description\nof the k-d tree cuts this way:\n\n\n   vtkBSPCuts *cuts = D3Object1->GetCuts()\n\nAnd set it this way:\n\n\n   D3Object2->SetCuts(cuts)\n"},
  {(char*)"SetCuts", PyvtkDistributedDataFilter_SetCuts, METH_VARARGS,
   (char*)"V.SetCuts(vtkBSPCuts)\nC++: void SetCuts(vtkBSPCuts *cuts)\n\nYou can set the k-d tree decomposition, rather than have D3\ncompute it.  This allows you to divide a dataset using the\ndecomposition computed for another dataset.  Obtain a description\nof the k-d tree cuts this way:\n\n\n   vtkBSPCuts *cuts = D3Object1->GetCuts()\n\nAnd set it this way:\n\n\n   D3Object2->SetCuts(cuts)\n"},
  {(char*)"SetUserRegionAssignments", PyvtkDistributedDataFilter_SetUserRegionAssignments, METH_VARARGS,
   (char*)"V.SetUserRegionAssignments((int, ...), int)\nC++: void SetUserRegionAssignments(const int *map, int numRegions)\n\nvtkBSPCuts doesn't have information about process assignments for\nthe cuts. Typically D3 filter simply reassigns the processes for\neach cut. However, that may not always work, sometimes the\nprocesses have be pre-assigned and we want to preserve that\npartitioning. In that case, one sets the region assignments\nexplicitly. Look at vtkPKdTree::AssignRegions for details about\nthe arguments. Calling SetUserRegionAssignments(NULL, 0) will\nrevert to default behavior i.e. letting the KdTree come up with\nthe assignments.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDistributedDataFilter_StaticNew()
{
  return vtkDistributedDataFilter::New();
}

PyObject *PyVTKClass_vtkDistributedDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDistributedDataFilter_StaticNew,
    PyvtkDistributedDataFilter_Methods,
    "vtkDistributedDataFilter", modulename,
    NULL, NULL,
    PyvtkDistributedDataFilter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkDistributedDataFilter_BoundaryModes_Type);
    PyvtkDistributedDataFilter_BoundaryModes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkDistributedDataFilter_BoundaryModes_Type;
    if (o && PyDict_SetItemString(d, (char *)"BoundaryModes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkDistributedDataFilter::BoundaryModes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "ASSIGN_TO_ONE_REGION", vtkDistributedDataFilter::ASSIGN_TO_ONE_REGION },
          { "ASSIGN_TO_ALL_INTERSECTING_REGIONS", vtkDistributedDataFilter::ASSIGN_TO_ALL_INTERSECTING_REGIONS },
          { "SPLIT_BOUNDARY_CELLS", vtkDistributedDataFilter::SPLIT_BOUNDARY_CELLS },
        };

      o = PyvtkDistributedDataFilter_BoundaryModes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkDistributedDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkDistributedDataFilter - Distribute data among processors\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "This filter redistributes data among processors in a parallel\napplication into spatially contiguous vtkUnstructuredGrids. The\nexecution model anticipated is that all processes read in part of a\nlarge vtkDataSet. Each process sets the input of filter to be that\nDataSet. When executed, this filter builds in parallel a k-d tree,\ndecomposing the space occupied by the distributed DataSet into\nspatial r",
    "egions.  It assigns each spatial region to a processor.  The\ndata is then redistributed and the output is a single\nvtkUnstructuredGrid containing the cells in the process' assigned\nregions.\n\nThis filter is sometimes called \"D3\" for \"distributed data\ndecomposition\".\n\nEnhancement: You can set the k-d tree decomposition, rather than have\nD3 compute it.  This allows you to divide a dataset using the\nd",
    "ecomposition computed for another dataset.  Obtain a description of\nthe k-d tree cuts this way:\n\n\n   vtkBSPCuts *cuts = D3Object1->GetCuts()\n\nAnd set it this way:\n\n\n   D3Object2->SetCuts(cuts)\n\n\n   It is desirable to have a field array of global node IDs\n   for two reasons:\n\n1. When merging together sub grids that were distributed across\n   processors, global node IDs can be used to remove duplica",
    "te points\nand significantly reduce the size of the resulting output grid.  If\n   no such array is available, D3 will use a tolerance to merge\n   points, which is much slower.\n\n2. If ghost cells have been requested, D3 requires a global node ID\n   array in order to request and transfer ghost cells in parallel\n   among the processors.  If there is no global node ID array, D3\n   will in parallel crea",
    "te a global node ID array, and the time to do\nthis can be significant.\n\n\n   If you know the name of a global node ID array in the input\n   dataset, set that name with this method.  If you leave\n   it unset, D3 will search the input data set for certain\n   common names of global node ID arrays.  If none is found,\n   and ghost cells have been requested, D3 will create a\n   temporary global node ID a",
    "rray before acquiring ghost cells.\n  It is also desirable to have global element IDs.  However,\n  if they don't exist D3 can create them relatively quickly.\n  Set the name of the global element ID array if you have it.\n  If it is not set, D3 will search for it using common names.\n  If still not found, D3 will create a temporary array of\n  global element IDs.\n\nCaveats:\n\nThe Execute() method must be",
    " called by all processes in the parallel\napplication, or it will hang.  If you are not certain that your\npipeline will execute identically on all processors, you may want to\nuse this filter in an explicit execution mode.\n\nSee Also:\n\nvtkKdTree vtkPKdTree vtkBSPCuts\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDistributedDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDistributedDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDistributedDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

