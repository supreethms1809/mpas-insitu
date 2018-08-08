// python wrapper for vtkIceTCompositePass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSynchronizedRenderers.h"
#include "vtkIceTCompositePass.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkIceTCompositePass(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkIceTCompositePassNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkIceTCompositePass_Doc();


static PyObject *
PyvtkIceTCompositePass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkIceTCompositePass::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIceTCompositePass::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIceTCompositePass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIceTCompositePass::NewInstance());

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
PyvtkIceTCompositePass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkIceTCompositePass *tempr = vtkIceTCompositePass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkIceTCompositePass::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkIceTCompositePass::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

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
      op->vtkIceTCompositePass::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_SetRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  vtkRenderPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
    {
    if (ap.IsBound())
      {
      op->SetRenderPass(temp0);
      }
    else
      {
      op->vtkIceTCompositePass::SetRenderPass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_GetRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetRenderPass() :
      op->vtkIceTCompositePass::GetRenderPass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_SetTileDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTileDimensions(temp0, temp1);
      }
    else
      {
      op->vtkIceTCompositePass::SetTileDimensions(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkIceTCompositePass_SetTileDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTileDimensions(temp0);
      }
    else
      {
      op->vtkIceTCompositePass::SetTileDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkIceTCompositePass_SetTileDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkIceTCompositePass_SetTileDimensions_s1(self, args);
    case 1:
      return PyvtkIceTCompositePass_SetTileDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTileDimensions");
  return NULL;
}



static PyObject *
PyvtkIceTCompositePass_GetTileDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTileDimensions() :
      op->vtkIceTCompositePass::GetTileDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_SetTileMullions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTileMullions(temp0, temp1);
      }
    else
      {
      op->vtkIceTCompositePass::SetTileMullions(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkIceTCompositePass_SetTileMullions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTileMullions(temp0);
      }
    else
      {
      op->vtkIceTCompositePass::SetTileMullions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkIceTCompositePass_SetTileMullions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkIceTCompositePass_SetTileMullions_s1(self, args);
    case 1:
      return PyvtkIceTCompositePass_SetTileMullions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTileMullions");
  return NULL;
}



static PyObject *
PyvtkIceTCompositePass_GetTileMullions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTileMullions() :
      op->vtkIceTCompositePass::GetTileMullions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_SetDataReplicatedOnAllProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataReplicatedOnAllProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataReplicatedOnAllProcesses(temp0);
      }
    else
      {
      op->vtkIceTCompositePass::SetDataReplicatedOnAllProcesses(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_GetDataReplicatedOnAllProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataReplicatedOnAllProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDataReplicatedOnAllProcesses() :
      op->vtkIceTCompositePass::GetDataReplicatedOnAllProcesses());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_DataReplicatedOnAllProcessesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataReplicatedOnAllProcessesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DataReplicatedOnAllProcessesOn();
      }
    else
      {
      op->vtkIceTCompositePass::DataReplicatedOnAllProcessesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_DataReplicatedOnAllProcessesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataReplicatedOnAllProcessesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DataReplicatedOnAllProcessesOff();
      }
    else
      {
      op->vtkIceTCompositePass::DataReplicatedOnAllProcessesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_SetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageReductionFactor(temp0);
      }
    else
      {
      op->vtkIceTCompositePass::SetImageReductionFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_GetImageReductionFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageReductionFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageReductionFactorMinValue() :
      op->vtkIceTCompositePass::GetImageReductionFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_GetImageReductionFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageReductionFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageReductionFactorMaxValue() :
      op->vtkIceTCompositePass::GetImageReductionFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_GetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageReductionFactor() :
      op->vtkIceTCompositePass::GetImageReductionFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_GetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPKdTree *tempr = (ap.IsBound() ?
      op->GetKdTree() :
      op->vtkIceTCompositePass::GetKdTree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_SetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  vtkPKdTree *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPKdTree"))
    {
    if (ap.IsBound())
      {
      op->SetKdTree(temp0);
      }
    else
      {
      op->vtkIceTCompositePass::SetKdTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_GetRenderEmptyImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderEmptyImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRenderEmptyImages() :
      op->vtkIceTCompositePass::GetRenderEmptyImages());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_SetRenderEmptyImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderEmptyImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderEmptyImages(temp0);
      }
    else
      {
      op->vtkIceTCompositePass::SetRenderEmptyImages(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_RenderEmptyImagesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderEmptyImagesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderEmptyImagesOn();
      }
    else
      {
      op->vtkIceTCompositePass::RenderEmptyImagesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_RenderEmptyImagesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderEmptyImagesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderEmptyImagesOff();
      }
    else
      {
      op->vtkIceTCompositePass::RenderEmptyImagesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_GetUseOrderedCompositing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOrderedCompositing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseOrderedCompositing() :
      op->vtkIceTCompositePass::GetUseOrderedCompositing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_SetUseOrderedCompositing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOrderedCompositing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOrderedCompositing(temp0);
      }
    else
      {
      op->vtkIceTCompositePass::SetUseOrderedCompositing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_UseOrderedCompositingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOrderedCompositingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOrderedCompositingOn();
      }
    else
      {
      op->vtkIceTCompositePass::UseOrderedCompositingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_UseOrderedCompositingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOrderedCompositingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOrderedCompositingOff();
      }
    else
      {
      op->vtkIceTCompositePass::UseOrderedCompositingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_GetDepthOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDepthOnly() :
      op->vtkIceTCompositePass::GetDepthOnly());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_SetDepthOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepthOnly(temp0);
      }
    else
      {
      op->vtkIceTCompositePass::SetDepthOnly(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_GetFixBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetFixBackground() :
      op->vtkIceTCompositePass::GetFixBackground());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_SetFixBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFixBackground(temp0);
      }
    else
      {
      op->vtkIceTCompositePass::SetFixBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_GetLastRenderedDepths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRenderedDepths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetLastRenderedDepths() :
      op->vtkIceTCompositePass::GetLastRenderedDepths());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTCompositePass_GetPhysicalViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhysicalViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTCompositePass *op = static_cast<vtkIceTCompositePass *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPhysicalViewport() :
      op->vtkIceTCompositePass::GetPhysicalViewport());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkIceTCompositePass_Methods[] = {
  {(char*)"GetClassName", PyvtkIceTCompositePass_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIceTCompositePass_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIceTCompositePass_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkIceTCompositePass\nC++: vtkIceTCompositePass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIceTCompositePass_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIceTCompositePass\nC++: vtkIceTCompositePass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkIceTCompositePass_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w)\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {(char*)"GetController", PyvtkIceTCompositePass_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nController If it is NULL, nothing will be rendered and a warning\nwill be emitted. Initial value is a NULL pointer.\n"},
  {(char*)"SetController", PyvtkIceTCompositePass_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(\n    vtkMultiProcessController *controller)\n\nController If it is NULL, nothing will be rendered and a warning\nwill be emitted. Initial value is a NULL pointer.\n"},
  {(char*)"SetRenderPass", PyvtkIceTCompositePass_SetRenderPass, METH_VARARGS,
   (char*)"V.SetRenderPass(vtkRenderPass)\nC++: void SetRenderPass(vtkRenderPass *)\n\nGet/Set the render pass used to do the actual rendering. The\nresult of this delete pass is what gets composited using IceT.\nInitial value is a NULL pointer.\n"},
  {(char*)"GetRenderPass", PyvtkIceTCompositePass_GetRenderPass, METH_VARARGS,
   (char*)"V.GetRenderPass() -> vtkRenderPass\nC++: vtkRenderPass *GetRenderPass()\n\nGet/Set the render pass used to do the actual rendering. The\nresult of this delete pass is what gets composited using IceT.\nInitial value is a NULL pointer.\n"},
  {(char*)"SetTileDimensions", PyvtkIceTCompositePass_SetTileDimensions, METH_VARARGS,
   (char*)"V.SetTileDimensions(int, int)\nC++: void SetTileDimensions(int, int)\nV.SetTileDimensions((int, int))\nC++: void SetTileDimensions(int a[2])\n\n"},
  {(char*)"GetTileDimensions", PyvtkIceTCompositePass_GetTileDimensions, METH_VARARGS,
   (char*)"V.GetTileDimensions() -> (int, int)\nC++: int *GetTileDimensions()\n\n"},
  {(char*)"SetTileMullions", PyvtkIceTCompositePass_SetTileMullions, METH_VARARGS,
   (char*)"V.SetTileMullions(int, int)\nC++: void SetTileMullions(int, int)\nV.SetTileMullions((int, int))\nC++: void SetTileMullions(int a[2])\n\n"},
  {(char*)"GetTileMullions", PyvtkIceTCompositePass_GetTileMullions, METH_VARARGS,
   (char*)"V.GetTileMullions() -> (int, int)\nC++: int *GetTileMullions()\n\n"},
  {(char*)"SetDataReplicatedOnAllProcesses", PyvtkIceTCompositePass_SetDataReplicatedOnAllProcesses, METH_VARARGS,
   (char*)"V.SetDataReplicatedOnAllProcesses(bool)\nC++: void SetDataReplicatedOnAllProcesses(bool a)\n\nSet to true if data is replicated on all processes. This will\nenable IceT to minimize communications since data is available on\nall process. Off by default. Initial value is false.\n"},
  {(char*)"GetDataReplicatedOnAllProcesses", PyvtkIceTCompositePass_GetDataReplicatedOnAllProcesses, METH_VARARGS,
   (char*)"V.GetDataReplicatedOnAllProcesses() -> bool\nC++: bool GetDataReplicatedOnAllProcesses()\n\nSet to true if data is replicated on all processes. This will\nenable IceT to minimize communications since data is available on\nall process. Off by default. Initial value is false.\n"},
  {(char*)"DataReplicatedOnAllProcessesOn", PyvtkIceTCompositePass_DataReplicatedOnAllProcessesOn, METH_VARARGS,
   (char*)"V.DataReplicatedOnAllProcessesOn()\nC++: void DataReplicatedOnAllProcessesOn()\n\nSet to true if data is replicated on all processes. This will\nenable IceT to minimize communications since data is available on\nall process. Off by default. Initial value is false.\n"},
  {(char*)"DataReplicatedOnAllProcessesOff", PyvtkIceTCompositePass_DataReplicatedOnAllProcessesOff, METH_VARARGS,
   (char*)"V.DataReplicatedOnAllProcessesOff()\nC++: void DataReplicatedOnAllProcessesOff()\n\nSet to true if data is replicated on all processes. This will\nenable IceT to minimize communications since data is available on\nall process. Off by default. Initial value is false.\n"},
  {(char*)"SetImageReductionFactor", PyvtkIceTCompositePass_SetImageReductionFactor, METH_VARARGS,
   (char*)"V.SetImageReductionFactor(int)\nC++: void SetImageReductionFactor(int)\n\nSet the image reduction factor. This can be used to speed up\ncompositing. When using vtkIceTCompositePass use this image\nreduction factor rather than that on vtkSynchronizedRenderers\nsince using vtkSynchronizedRenderers::ImageReductionFactor will\nnot work correctly with IceT. Initial value is 1.\n"},
  {(char*)"GetImageReductionFactorMinValue", PyvtkIceTCompositePass_GetImageReductionFactorMinValue, METH_VARARGS,
   (char*)"V.GetImageReductionFactorMinValue() -> int\nC++: int GetImageReductionFactorMinValue()\n\nSet the image reduction factor. This can be used to speed up\ncompositing. When using vtkIceTCompositePass use this image\nreduction factor rather than that on vtkSynchronizedRenderers\nsince using vtkSynchronizedRenderers::ImageReductionFactor will\nnot work correctly with IceT. Initial value is 1.\n"},
  {(char*)"GetImageReductionFactorMaxValue", PyvtkIceTCompositePass_GetImageReductionFactorMaxValue, METH_VARARGS,
   (char*)"V.GetImageReductionFactorMaxValue() -> int\nC++: int GetImageReductionFactorMaxValue()\n\nSet the image reduction factor. This can be used to speed up\ncompositing. When using vtkIceTCompositePass use this image\nreduction factor rather than that on vtkSynchronizedRenderers\nsince using vtkSynchronizedRenderers::ImageReductionFactor will\nnot work correctly with IceT. Initial value is 1.\n"},
  {(char*)"GetImageReductionFactor", PyvtkIceTCompositePass_GetImageReductionFactor, METH_VARARGS,
   (char*)"V.GetImageReductionFactor() -> int\nC++: int GetImageReductionFactor()\n\nSet the image reduction factor. This can be used to speed up\ncompositing. When using vtkIceTCompositePass use this image\nreduction factor rather than that on vtkSynchronizedRenderers\nsince using vtkSynchronizedRenderers::ImageReductionFactor will\nnot work correctly with IceT. Initial value is 1.\n"},
  {(char*)"GetKdTree", PyvtkIceTCompositePass_GetKdTree, METH_VARARGS,
   (char*)"V.GetKdTree() -> vtkPKdTree\nC++: vtkPKdTree *GetKdTree()\n\nkd tree that gives processes ordering. Initial value is a NULL\npointer. This is used only when UseOrderedCompositing is true.\n"},
  {(char*)"SetKdTree", PyvtkIceTCompositePass_SetKdTree, METH_VARARGS,
   (char*)"V.SetKdTree(vtkPKdTree)\nC++: virtual void SetKdTree(vtkPKdTree *kdtree)\n\nkd tree that gives processes ordering. Initial value is a NULL\npointer. This is used only when UseOrderedCompositing is true.\n"},
  {(char*)"GetRenderEmptyImages", PyvtkIceTCompositePass_GetRenderEmptyImages, METH_VARARGS,
   (char*)"V.GetRenderEmptyImages() -> bool\nC++: bool GetRenderEmptyImages()\n\nEnable/disable rendering of empty images. Painters that use MPI\nglobal collective communication need to enable this. Initial\nvalue is false.\n"},
  {(char*)"SetRenderEmptyImages", PyvtkIceTCompositePass_SetRenderEmptyImages, METH_VARARGS,
   (char*)"V.SetRenderEmptyImages(bool)\nC++: void SetRenderEmptyImages(bool a)\n\nEnable/disable rendering of empty images. Painters that use MPI\nglobal collective communication need to enable this. Initial\nvalue is false.\n"},
  {(char*)"RenderEmptyImagesOn", PyvtkIceTCompositePass_RenderEmptyImagesOn, METH_VARARGS,
   (char*)"V.RenderEmptyImagesOn()\nC++: void RenderEmptyImagesOn()\n\nEnable/disable rendering of empty images. Painters that use MPI\nglobal collective communication need to enable this. Initial\nvalue is false.\n"},
  {(char*)"RenderEmptyImagesOff", PyvtkIceTCompositePass_RenderEmptyImagesOff, METH_VARARGS,
   (char*)"V.RenderEmptyImagesOff()\nC++: void RenderEmptyImagesOff()\n\nEnable/disable rendering of empty images. Painters that use MPI\nglobal collective communication need to enable this. Initial\nvalue is false.\n"},
  {(char*)"GetUseOrderedCompositing", PyvtkIceTCompositePass_GetUseOrderedCompositing, METH_VARARGS,
   (char*)"V.GetUseOrderedCompositing() -> bool\nC++: bool GetUseOrderedCompositing()\n\nSet this to true, if compositing must be done in a specific\norder. This is necessary when rendering volumes or translucent\ngeometries. When UseOrderedCompositing is set to true, it is\nexpected that the KdTree is set as well. The KdTree is used to\ndecide the process-order for compositing. Initial value is false.\n"},
  {(char*)"SetUseOrderedCompositing", PyvtkIceTCompositePass_SetUseOrderedCompositing, METH_VARARGS,
   (char*)"V.SetUseOrderedCompositing(bool)\nC++: void SetUseOrderedCompositing(bool a)\n\nSet this to true, if compositing must be done in a specific\norder. This is necessary when rendering volumes or translucent\ngeometries. When UseOrderedCompositing is set to true, it is\nexpected that the KdTree is set as well. The KdTree is used to\ndecide the process-order for compositing. Initial value is false.\n"},
  {(char*)"UseOrderedCompositingOn", PyvtkIceTCompositePass_UseOrderedCompositingOn, METH_VARARGS,
   (char*)"V.UseOrderedCompositingOn()\nC++: void UseOrderedCompositingOn()\n\nSet this to true, if compositing must be done in a specific\norder. This is necessary when rendering volumes or translucent\ngeometries. When UseOrderedCompositing is set to true, it is\nexpected that the KdTree is set as well. The KdTree is used to\ndecide the process-order for compositing. Initial value is false.\n"},
  {(char*)"UseOrderedCompositingOff", PyvtkIceTCompositePass_UseOrderedCompositingOff, METH_VARARGS,
   (char*)"V.UseOrderedCompositingOff()\nC++: void UseOrderedCompositingOff()\n\nSet this to true, if compositing must be done in a specific\norder. This is necessary when rendering volumes or translucent\ngeometries. When UseOrderedCompositing is set to true, it is\nexpected that the KdTree is set as well. The KdTree is used to\ndecide the process-order for compositing. Initial value is false.\n"},
  {(char*)"GetDepthOnly", PyvtkIceTCompositePass_GetDepthOnly, METH_VARARGS,
   (char*)"V.GetDepthOnly() -> bool\nC++: bool GetDepthOnly()\n\nTell to only deal with the depth component and ignore the color\ncomponents. If true, UseOrderedCompositing is ignored. Initial\nvalue is false.\n"},
  {(char*)"SetDepthOnly", PyvtkIceTCompositePass_SetDepthOnly, METH_VARARGS,
   (char*)"V.SetDepthOnly(bool)\nC++: void SetDepthOnly(bool a)\n\nTell to only deal with the depth component and ignore the color\ncomponents. If true, UseOrderedCompositing is ignored. Initial\nvalue is false.\n"},
  {(char*)"GetFixBackground", PyvtkIceTCompositePass_GetFixBackground, METH_VARARGS,
   (char*)"V.GetFixBackground() -> bool\nC++: bool GetFixBackground()\n\nIceT does not deal well with the background, by setting\nFixBackground to true, the pass will take care of displaying the\ncorrect background at the price of some copy operations. Initial\nvalue is false.\n"},
  {(char*)"SetFixBackground", PyvtkIceTCompositePass_SetFixBackground, METH_VARARGS,
   (char*)"V.SetFixBackground(bool)\nC++: void SetFixBackground(bool a)\n\nIceT does not deal well with the background, by setting\nFixBackground to true, the pass will take care of displaying the\ncorrect background at the price of some copy operations. Initial\nvalue is false.\n"},
  {(char*)"GetLastRenderedDepths", PyvtkIceTCompositePass_GetLastRenderedDepths, METH_VARARGS,
   (char*)"V.GetLastRenderedDepths() -> vtkFloatArray\nC++: vtkFloatArray *GetLastRenderedDepths()\n\nProvides access to the last rendered depth-buffer, if any. May\nreturn NULL if depth buffer was not composited and available on\nthe current rank.\n"},
  {(char*)"GetPhysicalViewport", PyvtkIceTCompositePass_GetPhysicalViewport, METH_VARARGS,
   (char*)"V.GetPhysicalViewport() -> (float, float, float, float)\nC++: double *GetPhysicalViewport()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIceTCompositePass_StaticNew()
{
  return vtkIceTCompositePass::New();
}

PyObject *PyVTKClass_vtkIceTCompositePassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIceTCompositePass_StaticNew,
    PyvtkIceTCompositePass_Methods,
    "vtkIceTCompositePass", modulename,
    NULL, NULL,
    PyvtkIceTCompositePass_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkIceTCompositePass_Doc()
{
  static const char *docstring[] = {
    "vtkIceTCompositePass - vtkRenderPass subclass for compositing\n\n",
    "Superclass: vtkRenderPass\n\n",
    "vtkIceTCompositePass is a vtkRenderPass subclass that can be used for\ncompositing images (rgba or depth buffer) across processes using\nIceT. This can be used in lieu of vtkCompositeRGBAPass. The usage of\nthis pass differs slightly from vtkCompositeRGBAPass.\nvtkCompositeRGBAPass composites the active frame buffer, while this\nclass requires that the render pass to render info the frame buffer\nthat n",
    "eeds to be composited should be set as an ivar using\nSetRenderPass().\n\nThis class also provides support for tile-displays. Simply set the\nTileDimensions > [1, 1] and instead of rendering a composited image\non the root node, it will split the view among all tiles and generate\nrenderings on all processes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIceTCompositePass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIceTCompositePassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIceTCompositePass", o) != 0)
    {
    Py_DECREF(o);
    }

}

