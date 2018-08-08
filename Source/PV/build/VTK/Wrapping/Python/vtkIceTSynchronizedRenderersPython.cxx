// python wrapper for vtkIceTSynchronizedRenderers
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkIceTSynchronizedRenderers.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkIceTSynchronizedRenderers(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkIceTSynchronizedRenderersNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSynchronizedRenderersNew
extern "C" { PyObject *PyVTKClass_vtkSynchronizedRenderersNew(const char *); }
#define DECLARED_PyVTKClass_vtkSynchronizedRenderersNew
#endif

static const char **PyvtkIceTSynchronizedRenderers_Doc();


static PyObject *
PyvtkIceTSynchronizedRenderers_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkIceTSynchronizedRenderers::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIceTSynchronizedRenderers::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIceTSynchronizedRenderers *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIceTSynchronizedRenderers::NewInstance());

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
PyvtkIceTSynchronizedRenderers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkIceTSynchronizedRenderers *tempr = vtkIceTSynchronizedRenderers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_SetIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIdentifier(temp0);
      }
    else
      {
      op->vtkIceTSynchronizedRenderers::SetIdentifier(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_GetIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetIdentifier() :
      op->vtkIceTSynchronizedRenderers::GetIdentifier());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkIceTSynchronizedRenderers::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_SetTileDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

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
      op->vtkIceTSynchronizedRenderers::SetTileDimensions(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_SetTileMullions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

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
      op->vtkIceTSynchronizedRenderers::SetTileMullions(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_SetDataReplicatedOnAllProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataReplicatedOnAllProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

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
      op->vtkIceTSynchronizedRenderers::SetDataReplicatedOnAllProcesses(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_SetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

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
      op->vtkIceTSynchronizedRenderers::SetKdTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_SetUseOrderedCompositing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOrderedCompositing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

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
      op->vtkIceTSynchronizedRenderers::SetUseOrderedCompositing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_SetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

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
      op->vtkIceTSynchronizedRenderers::SetImageReductionFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_GetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageReductionFactor() :
      op->vtkIceTSynchronizedRenderers::GetImageReductionFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_SetParallelController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetParallelController(temp0);
      }
    else
      {
      op->vtkIceTSynchronizedRenderers::SetParallelController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_SetImageProcessingPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageProcessingPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

  vtkImageProcessingPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageProcessingPass"))
    {
    if (ap.IsBound())
      {
      op->SetImageProcessingPass(temp0);
      }
    else
      {
      op->vtkIceTSynchronizedRenderers::SetImageProcessingPass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_GetImageProcessingPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageProcessingPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageProcessingPass *tempr = (ap.IsBound() ?
      op->GetImageProcessingPass() :
      op->vtkIceTSynchronizedRenderers::GetImageProcessingPass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_SetUseDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDepthBuffer(temp0);
      }
    else
      {
      op->vtkIceTSynchronizedRenderers::SetUseDepthBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_SetRenderEmptyImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderEmptyImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

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
      op->vtkIceTSynchronizedRenderers::SetRenderEmptyImages(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_SetRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

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
      op->vtkIceTSynchronizedRenderers::SetRenderPass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_GetRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetRenderPass() :
      op->vtkIceTSynchronizedRenderers::GetRenderPass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTSynchronizedRenderers_GetIceTCompositePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIceTCompositePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTSynchronizedRenderers *op = static_cast<vtkIceTSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIceTCompositePass *tempr = (ap.IsBound() ?
      op->GetIceTCompositePass() :
      op->vtkIceTSynchronizedRenderers::GetIceTCompositePass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkIceTSynchronizedRenderers_Methods[] = {
  {(char*)"GetClassName", PyvtkIceTSynchronizedRenderers_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIceTSynchronizedRenderers_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIceTSynchronizedRenderers_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkIceTSynchronizedRenderers\nC++: vtkIceTSynchronizedRenderers *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIceTSynchronizedRenderers_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIceTSynchronizedRenderers\nC++: vtkIceTSynchronizedRenderers *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetIdentifier", PyvtkIceTSynchronizedRenderers_SetIdentifier, METH_VARARGS,
   (char*)"V.SetIdentifier(int)\nC++: void SetIdentifier(unsigned int a)\n\nIdentifier used to indentify the view to the\nvtkTileDisplayHelper.\n"},
  {(char*)"GetIdentifier", PyvtkIceTSynchronizedRenderers_GetIdentifier, METH_VARARGS,
   (char*)"V.GetIdentifier() -> int\nC++: unsigned int GetIdentifier()\n\nIdentifier used to indentify the view to the\nvtkTileDisplayHelper.\n"},
  {(char*)"SetRenderer", PyvtkIceTSynchronizedRenderers_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *)\n\nSet the renderer to be synchronized by this instance. A\nvtkSynchronizedRenderers instance can be used to synchronize\nexactly 1 renderer on each processes. You can create multiple\ninstances on vtkSynchronizedRenderers to synchronize multiple\nrenderers.\n"},
  {(char*)"SetTileDimensions", PyvtkIceTSynchronizedRenderers_SetTileDimensions, METH_VARARGS,
   (char*)"V.SetTileDimensions(int, int)\nC++: void SetTileDimensions(int x, int y)\n\nSet the tile dimensions. Default is (1, 1). If any of the\ndimensions is > 1 then tile display mode is assumed.\n"},
  {(char*)"SetTileMullions", PyvtkIceTSynchronizedRenderers_SetTileMullions, METH_VARARGS,
   (char*)"V.SetTileMullions(int, int)\nC++: void SetTileMullions(int x, int y)\n\nSet the tile mullions. The mullions are measured in pixels. Use\nnegative numbers for overlap.\n"},
  {(char*)"SetDataReplicatedOnAllProcesses", PyvtkIceTSynchronizedRenderers_SetDataReplicatedOnAllProcesses, METH_VARARGS,
   (char*)"V.SetDataReplicatedOnAllProcesses(bool)\nC++: void SetDataReplicatedOnAllProcesses(bool val)\n\nSet to true if data is replicated on all processes. This will\nenable IceT to minimize communications since data is available on\nall process. Off by default.\n"},
  {(char*)"SetKdTree", PyvtkIceTSynchronizedRenderers_SetKdTree, METH_VARARGS,
   (char*)"V.SetKdTree(vtkPKdTree)\nC++: void SetKdTree(vtkPKdTree *kdtree)\n\nkd tree that gives processes ordering. Initial value is a NULL\npointer. This is used only when UseOrderedCompositing is true.\n"},
  {(char*)"SetUseOrderedCompositing", PyvtkIceTSynchronizedRenderers_SetUseOrderedCompositing, METH_VARARGS,
   (char*)"V.SetUseOrderedCompositing(bool)\nC++: void SetUseOrderedCompositing(bool uoc)\n\nSet this to true, if compositing must be done in a specific\norder. This is necessary when rendering volumes or translucent\ngeometries. When UseOrderedCompositing is set to true, it is\nexpected that the KdTree is set as well. The KdTree is used to\ndecide the process-order for compositing.\n"},
  {(char*)"SetImageReductionFactor", PyvtkIceTSynchronizedRenderers_SetImageReductionFactor, METH_VARARGS,
   (char*)"V.SetImageReductionFactor(int)\nC++: virtual void SetImageReductionFactor(int val)\n\nSet the image reduction factor. Overrides superclass\nimplementation.\n"},
  {(char*)"GetImageReductionFactor", PyvtkIceTSynchronizedRenderers_GetImageReductionFactor, METH_VARARGS,
   (char*)"V.GetImageReductionFactor() -> int\nC++: virtual int GetImageReductionFactor()\n\nSet the image reduction factor. Overrides superclass\nimplementation.\n"},
  {(char*)"SetParallelController", PyvtkIceTSynchronizedRenderers_SetParallelController, METH_VARARGS,
   (char*)"V.SetParallelController(vtkMultiProcessController)\nC++: virtual void SetParallelController(\n    vtkMultiProcessController *cont)\n\nSet the parallel message communicator. This is used to\ncommunicate among processes.\n"},
  {(char*)"SetImageProcessingPass", PyvtkIceTSynchronizedRenderers_SetImageProcessingPass, METH_VARARGS,
   (char*)"V.SetImageProcessingPass(vtkImageProcessingPass)\nC++: void SetImageProcessingPass(vtkImageProcessingPass *)\n\nGet/Set an image processing pass to process the rendered images.\n"},
  {(char*)"GetImageProcessingPass", PyvtkIceTSynchronizedRenderers_GetImageProcessingPass, METH_VARARGS,
   (char*)"V.GetImageProcessingPass() -> vtkImageProcessingPass\nC++: vtkImageProcessingPass *GetImageProcessingPass()\n\nGet/Set an image processing pass to process the rendered images.\n"},
  {(char*)"SetUseDepthBuffer", PyvtkIceTSynchronizedRenderers_SetUseDepthBuffer, METH_VARARGS,
   (char*)"V.SetUseDepthBuffer(bool)\nC++: void SetUseDepthBuffer(bool)\n\nActivates or de-activated the use of Depth Buffer\n"},
  {(char*)"SetRenderEmptyImages", PyvtkIceTSynchronizedRenderers_SetRenderEmptyImages, METH_VARARGS,
   (char*)"V.SetRenderEmptyImages(bool)\nC++: void SetRenderEmptyImages(bool)\n\nEnable/Disable empty images optimization. Render empty images is\ndisabled by default. It may be needed if a painter needs to make\nMPI global collective communication.\n"},
  {(char*)"SetRenderPass", PyvtkIceTSynchronizedRenderers_SetRenderPass, METH_VARARGS,
   (char*)"V.SetRenderPass(vtkRenderPass)\nC++: void SetRenderPass(vtkRenderPass *)\n\nGet/Set geometry rendering pass. This pass is used to render the\ngeometry. If none specified then default rendering pipeline is\nused. This is typically the render-pass pipeline after the\nCameraPass. The CameraPass is setup by ParaView specially since\nParaView needs some customizations for multiviews/icet etc.\n"},
  {(char*)"GetRenderPass", PyvtkIceTSynchronizedRenderers_GetRenderPass, METH_VARARGS,
   (char*)"V.GetRenderPass() -> vtkRenderPass\nC++: vtkRenderPass *GetRenderPass()\n\nGet/Set geometry rendering pass. This pass is used to render the\ngeometry. If none specified then default rendering pipeline is\nused. This is typically the render-pass pipeline after the\nCameraPass. The CameraPass is setup by ParaView specially since\nParaView needs some customizations for multiviews/icet etc.\n"},
  {(char*)"GetIceTCompositePass", PyvtkIceTSynchronizedRenderers_GetIceTCompositePass, METH_VARARGS,
   (char*)"V.GetIceTCompositePass() -> vtkIceTCompositePass\nC++: vtkIceTCompositePass *GetIceTCompositePass()\n\nProvides access to the internal vtkIceTCompositePass. Only use\nthis if you know what you're doing.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIceTSynchronizedRenderers_StaticNew()
{
  return vtkIceTSynchronizedRenderers::New();
}

PyObject *PyVTKClass_vtkIceTSynchronizedRenderersNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIceTSynchronizedRenderers_StaticNew,
    PyvtkIceTSynchronizedRenderers_Methods,
    "vtkIceTSynchronizedRenderers", modulename,
    NULL, NULL,
    PyvtkIceTSynchronizedRenderers_Doc(),
    PyVTKClass_vtkSynchronizedRenderersNew(modulename));
  return cls;
}

const char **PyvtkIceTSynchronizedRenderers_Doc()
{
  static const char *docstring[] = {
    "vtkIceTSynchronizedRenderers - vtkSynchronizedRenderers subclass that\n\n",
    "Superclass: vtkSynchronizedRenderers\n\n",
    "vtkIceTSynchronizedRenderers uses IceT (the Image Compositing Engine\nfor Tiles) for parallel rendering and compositing. This class simply\nuses vtkIceTCompositePass internally, even though this class is\ndesigned to be used with traditional renderers and not those using\nrender-passes. Note that this class internally does indeed leverage\nthe RenderPass mechanism to intercept render calls from a\nvtkRe",
    "nderer. In other words, if you are using render passes, you\nshould not use this class. Your render passes will  be overridden.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIceTSynchronizedRenderers(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIceTSynchronizedRenderersNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIceTSynchronizedRenderers", o) != 0)
    {
    Py_DECREF(o);
    }

}

