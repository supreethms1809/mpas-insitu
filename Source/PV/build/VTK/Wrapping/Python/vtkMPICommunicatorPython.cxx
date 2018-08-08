// python wrapper for vtkMPICommunicator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMPICommunicator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMPICommunicator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMPICommunicatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCommunicatorNew
extern "C" { PyObject *PyVTKClass_vtkCommunicatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCommunicatorNew
#endif

static const char **PyvtkMPICommunicator_Doc();


static PyObject *
PyvtkMPICommunicator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMPICommunicator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPICommunicator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMPICommunicator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPICommunicator::NewInstance());

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
PyvtkMPICommunicator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMPICommunicator *tempr = vtkMPICommunicator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GetWorldCommunicator(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetWorldCommunicator");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkMPICommunicator *tempr = vtkMPICommunicator::GetWorldCommunicator();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  vtkProcessGroup *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcessGroup"))
    {
    int tempr = (ap.IsBound() ?
      op->Initialize(temp0) :
      op->vtkMPICommunicator::Initialize(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_SplitInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  vtkCommunicator *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkCommunicator") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->SplitInitialize(temp0, temp1, temp2) :
      op->vtkMPICommunicator::SplitInitialize(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_SendVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    int tempr = (ap.IsBound() ?
      op->SendVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMPICommunicator::SendVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_ReceiveVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    int tempr = (ap.IsBound() ?
      op->ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMPICommunicator::ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Barrier();
      }
    else
      {
      op->vtkMPICommunicator::Barrier();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_BroadcastVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->BroadcastVoidArray(temp0, temp1, temp2, temp3) :
      op->vtkMPICommunicator::BroadcastVoidArray(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    int tempr = (ap.IsBound() ?
      op->GatherVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMPICommunicator::GatherVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  int temp5;
  int temp6;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkMPICommunicator::GatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_ScatterVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    int tempr = (ap.IsBound() ?
      op->ScatterVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMPICommunicator::ScatterVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_ScatterVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType temp4;
  int temp5;
  int temp6;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkMPICommunicator::ScatterVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

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

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_AllGatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->AllGatherVoidArray(temp0, temp1, temp2, temp3) :
      op->vtkMPICommunicator::AllGatherVoidArray(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_AllGatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMPICommunicator::AllGatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_ReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    int tempr = (ap.IsBound() ?
      op->ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMPICommunicator::ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_AllReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    int tempr = (ap.IsBound() ?
      op->AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMPICommunicator::AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_Iprobe_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  int temp0;
  int temp1;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  int *temp3 = NULL;
  int *save3 = NULL;
  int small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new int[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new int[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->Iprobe(temp0, temp1, temp2, temp3) :
      op->vtkMPICommunicator::Iprobe(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

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

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkMPICommunicator_Iprobe_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  int temp0;
  int temp1;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  int *temp3 = NULL;
  int *save3 = NULL;
  int small3[8];
  int size3 = 0;
  int *temp4 = NULL;
  int *save4 = NULL;
  int small4[8];
  int size4 = 0;
  int *temp5 = NULL;
  int *save5 = NULL;
  int small5[8];
  int size5 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new int[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new int[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new int[2*size4];
      }
    save4 = &temp4[size4];
    size5 = ap.GetArgSize(5);
    temp5 = small5;
    if (size5 > 4)
      {
      temp5 = new int[2*size5];
      }
    save5 = &temp5[size5];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->Iprobe(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMPICommunicator::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}

static PyObject *
PyvtkMPICommunicator_Iprobe_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  int temp0;
  int temp1;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  int *temp3 = NULL;
  int *save3 = NULL;
  int small3[8];
  int size3 = 0;
  unsigned long *temp4 = NULL;
  unsigned long *save4 = NULL;
  unsigned long small4[8];
  int size4 = 0;
  int *temp5 = NULL;
  int *save5 = NULL;
  int small5[8];
  int size5 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new int[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new int[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new unsigned long[2*size4];
      }
    save4 = &temp4[size4];
    size5 = ap.GetArgSize(5);
    temp5 = small5;
    if (size5 > 4)
      {
      temp5 = new int[2*size5];
      }
    save5 = &temp5[size5];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->Iprobe(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMPICommunicator::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}

static PyObject *
PyvtkMPICommunicator_Iprobe_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  int temp0;
  int temp1;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  int *temp3 = NULL;
  int *save3 = NULL;
  int small3[8];
  int size3 = 0;
  char *temp4 = NULL;
  int *temp5 = NULL;
  int *save5 = NULL;
  int small5[8];
  int size5 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new int[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new int[2*size3];
      }
    save3 = &temp3[size3];
    size5 = ap.GetArgSize(5);
    temp5 = small5;
    if (size5 > 4)
      {
      temp5 = new int[2*size5];
      }
    save5 = &temp5[size5];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->Iprobe(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMPICommunicator::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}

static PyObject *
PyvtkMPICommunicator_Iprobe_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  int temp0;
  int temp1;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  int *temp3 = NULL;
  int *save3 = NULL;
  int small3[8];
  int size3 = 0;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
  int *temp5 = NULL;
  int *save5 = NULL;
  int small5[8];
  int size5 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new int[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new int[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new double[2*size4];
      }
    save4 = &temp4[size4];
    size5 = ap.GetArgSize(5);
    temp5 = small5;
    if (size5 > 4)
      {
      temp5 = new int[2*size5];
      }
    save5 = &temp5[size5];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->Iprobe(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMPICommunicator::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}

static PyMethodDef PyvtkMPICommunicator_Iprobe_Methods[] = {
  {NULL, PyvtkMPICommunicator_Iprobe_s2, METH_VARARGS,
   (char*)"@iiOOOO *i *i *i *i"},
  {NULL, PyvtkMPICommunicator_Iprobe_s3, METH_VARARGS,
   (char*)"@iiOOOO *i *i *k *i"},
  {NULL, PyvtkMPICommunicator_Iprobe_s4, METH_VARARGS,
   (char*)"@iiOOzO *i *i *i"},
  {NULL, PyvtkMPICommunicator_Iprobe_s5, METH_VARARGS,
   (char*)"@iiOOOO *i *i *d *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMPICommunicator_Iprobe(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMPICommunicator_Iprobe_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkMPICommunicator_Iprobe_s1(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Iprobe");
  return NULL;
}



static PyObject *
PyvtkMPICommunicator_Allocate(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Allocate");

  size_t temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    char *tempr = vtkMPICommunicator::Allocate(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_Free(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Free");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMPICommunicator::Free(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_SetUseSsend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseSsend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseSsend(temp0);
      }
    else
      {
      op->vtkMPICommunicator::SetUseSsend(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GetUseSsendMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSsendMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseSsendMinValue() :
      op->vtkMPICommunicator::GetUseSsendMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GetUseSsendMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSsendMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseSsendMaxValue() :
      op->vtkMPICommunicator::GetUseSsendMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GetUseSsend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSsend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseSsend() :
      op->vtkMPICommunicator::GetUseSsend());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_UseSsendOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSsendOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseSsendOn();
      }
    else
      {
      op->vtkMPICommunicator::UseSsendOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_UseSsendOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSsendOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseSsendOff();
      }
    else
      {
      op->vtkMPICommunicator::UseSsendOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_CopyFrom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  vtkMPICommunicator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPICommunicator"))
    {
    if (ap.IsBound())
      {
      op->CopyFrom(temp0);
      }
    else
      {
      op->vtkMPICommunicator::CopyFrom(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMPICommunicator_Methods[] = {
  {(char*)"GetClassName", PyvtkMPICommunicator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMPICommunicator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMPICommunicator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMPICommunicator\nC++: vtkMPICommunicator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMPICommunicator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMPICommunicator\nC++: vtkMPICommunicator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetWorldCommunicator", PyvtkMPICommunicator_GetWorldCommunicator, METH_VARARGS | METH_STATIC,
   (char*)"V.GetWorldCommunicator() -> vtkMPICommunicator\nC++: static vtkMPICommunicator *GetWorldCommunicator()\n\nReturns the singleton which behaves as the global communicator\n(MPI_COMM_WORLD)\n"},
  {(char*)"Initialize", PyvtkMPICommunicator_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkProcessGroup) -> int\nC++: int Initialize(vtkProcessGroup *group)\n\nUsed to initialize the communicator (i.e. create the underlying\nMPI_Comm). The group must be associated with a valid\nvtkMPICommunicator.\n"},
  {(char*)"SplitInitialize", PyvtkMPICommunicator_SplitInitialize, METH_VARARGS,
   (char*)"V.SplitInitialize(vtkCommunicator, int, int) -> int\nC++: int SplitInitialize(vtkCommunicator *oldcomm, int color,\n    int key)\n\nUsed to initialize the communicator (i.e. create the underlying\nMPI_Comm) using MPI_Comm_split on the given communicator. Return\nvalues are 1 for success and 0 otherwise.\n"},
  {(char*)"SendVoidArray", PyvtkMPICommunicator_SendVoidArray, METH_VARARGS,
   (char*)"V.SendVoidArray(, int, int, int, int) -> int\nC++: virtual int SendVoidArray(const void *data, vtkIdType length,\n     int type, int remoteProcessId, int tag)\n\nPerforms the actual communication.  You will usually use the\nconvenience Send functions defined in the superclass. Return\nvalues are 1 for success and 0 otherwise.\n"},
  {(char*)"ReceiveVoidArray", PyvtkMPICommunicator_ReceiveVoidArray, METH_VARARGS,
   (char*)"V.ReceiveVoidArray(, int, int, int, int) -> int\nC++: virtual int ReceiveVoidArray(void *data, vtkIdType length,\n    int type, int remoteProcessId, int tag)\n\nPerforms the actual communication.  You will usually use the\nconvenience Send functions defined in the superclass. Return\nvalues are 1 for success and 0 otherwise.\n"},
  {(char*)"Barrier", PyvtkMPICommunicator_Barrier, METH_VARARGS,
   (char*)"V.Barrier()\nC++: virtual void Barrier()\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands. Return values are 1 for success and\n0 otherwise.\n"},
  {(char*)"BroadcastVoidArray", PyvtkMPICommunicator_BroadcastVoidArray, METH_VARARGS,
   (char*)"V.BroadcastVoidArray(, int, int, int) -> int\nC++: virtual int BroadcastVoidArray(void *data, vtkIdType length,\n    int type, int srcProcessId)\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands. Return values are 1 for success and\n0 otherwise.\n"},
  {(char*)"GatherVoidArray", PyvtkMPICommunicator_GatherVoidArray, METH_VARARGS,
   (char*)"V.GatherVoidArray(, , int, int, int) -> int\nC++: virtual int GatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int destProcessId)\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands. Return values are 1 for success and\n0 otherwise.\n"},
  {(char*)"GatherVVoidArray", PyvtkMPICommunicator_GatherVVoidArray, METH_VARARGS,
   (char*)"V.GatherVVoidArray(, , int, [int, ...], [int, ...], int, int)\n    -> int\nC++: virtual int GatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type,\n    int destProcessId)\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands. Return values are 1 for success and\n0 otherwise.\n"},
  {(char*)"ScatterVoidArray", PyvtkMPICommunicator_ScatterVoidArray, METH_VARARGS,
   (char*)"V.ScatterVoidArray(, , int, int, int) -> int\nC++: virtual int ScatterVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int srcProcessId)\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands. Return values are 1 for success and\n0 otherwise.\n"},
  {(char*)"ScatterVVoidArray", PyvtkMPICommunicator_ScatterVVoidArray, METH_VARARGS,
   (char*)"V.ScatterVVoidArray(, , [int, ...], [int, ...], int, int, int)\n    -> int\nC++: virtual int ScatterVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int type, int srcProcessId)\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands. Return values are 1 for success and\n0 otherwise.\n"},
  {(char*)"AllGatherVoidArray", PyvtkMPICommunicator_AllGatherVoidArray, METH_VARARGS,
   (char*)"V.AllGatherVoidArray(, , int, int) -> int\nC++: virtual int AllGatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type)\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands. Return values are 1 for success and\n0 otherwise.\n"},
  {(char*)"AllGatherVVoidArray", PyvtkMPICommunicator_AllGatherVVoidArray, METH_VARARGS,
   (char*)"V.AllGatherVVoidArray(, , int, [int, ...], [int, ...], int) -> int\nC++: virtual int AllGatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type)\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands. Return values are 1 for success and\n0 otherwise.\n"},
  {(char*)"ReduceVoidArray", PyvtkMPICommunicator_ReduceVoidArray, METH_VARARGS,
   (char*)"V.ReduceVoidArray(, , int, int, int, int) -> int\nC++: virtual int ReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation,\n    int destProcessId)\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands. Return values are 1 for success and\n0 otherwise.\n"},
  {(char*)"AllReduceVoidArray", PyvtkMPICommunicator_AllReduceVoidArray, METH_VARARGS,
   (char*)"V.AllReduceVoidArray(, , int, int, int) -> int\nC++: virtual int AllReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation)\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands. Return values are 1 for success and\n0 otherwise.\n"},
  {(char*)"Iprobe", PyvtkMPICommunicator_Iprobe, METH_VARARGS,
   (char*)"V.Iprobe(int, int, [int, ...], [int, ...]) -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource)\nV.Iprobe(int, int, [int, ...], [int, ...], [int, ...], [int, ...])\n     -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     int *type, int *size)\nV.Iprobe(int, int, [int, ...], [int, ...], [int, ...], [int, ...])\n     -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     unsigned long *type, int *size)\nV.Iprobe(int, int, [int, ...], [int, ...], string, [int, ...])\n    -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     const char *type, int *size)\nV.Iprobe(int, int, [int, ...], [int, ...], [float, ...], [int,\n    ...]) -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     double *type, int *size)\n\nNonblocking test for a message.  Inputs are: source -- the source\nrank or ANY_SOURCE; tag -- the tag value.  Outputs are: flag --\nTrue if a message matches; actualSource -- the rank sending the\nmessage (useful if ANY_SOURCE is used) if flag is True and\nactualSource isn't NULL; size -- the length of the message in\nbytes if flag is true (only set if size isn't NULL). The return\nvalue is 1 for success and 0 otherwise.\n"},
  {(char*)"Allocate", PyvtkMPICommunicator_Allocate, METH_VARARGS | METH_STATIC,
   (char*)"V.Allocate(int) -> string\nC++: static char *Allocate(size_t size)\n\n"},
  {(char*)"Free", PyvtkMPICommunicator_Free, METH_VARARGS | METH_STATIC,
   (char*)"V.Free(string)\nC++: static void Free(char *ptr)\n\n"},
  {(char*)"SetUseSsend", PyvtkMPICommunicator_SetUseSsend, METH_VARARGS,
   (char*)"V.SetUseSsend(int)\nC++: void SetUseSsend(int)\n\nWhen set to 1, all MPI_Send calls are replaced by MPI_Ssend\ncalls. Default is 0.\n"},
  {(char*)"GetUseSsendMinValue", PyvtkMPICommunicator_GetUseSsendMinValue, METH_VARARGS,
   (char*)"V.GetUseSsendMinValue() -> int\nC++: int GetUseSsendMinValue()\n\nWhen set to 1, all MPI_Send calls are replaced by MPI_Ssend\ncalls. Default is 0.\n"},
  {(char*)"GetUseSsendMaxValue", PyvtkMPICommunicator_GetUseSsendMaxValue, METH_VARARGS,
   (char*)"V.GetUseSsendMaxValue() -> int\nC++: int GetUseSsendMaxValue()\n\nWhen set to 1, all MPI_Send calls are replaced by MPI_Ssend\ncalls. Default is 0.\n"},
  {(char*)"GetUseSsend", PyvtkMPICommunicator_GetUseSsend, METH_VARARGS,
   (char*)"V.GetUseSsend() -> int\nC++: int GetUseSsend()\n\nWhen set to 1, all MPI_Send calls are replaced by MPI_Ssend\ncalls. Default is 0.\n"},
  {(char*)"UseSsendOn", PyvtkMPICommunicator_UseSsendOn, METH_VARARGS,
   (char*)"V.UseSsendOn()\nC++: void UseSsendOn()\n\nWhen set to 1, all MPI_Send calls are replaced by MPI_Ssend\ncalls. Default is 0.\n"},
  {(char*)"UseSsendOff", PyvtkMPICommunicator_UseSsendOff, METH_VARARGS,
   (char*)"V.UseSsendOff()\nC++: void UseSsendOff()\n\nWhen set to 1, all MPI_Send calls are replaced by MPI_Ssend\ncalls. Default is 0.\n"},
  {(char*)"CopyFrom", PyvtkMPICommunicator_CopyFrom, METH_VARARGS,
   (char*)"V.CopyFrom(vtkMPICommunicator)\nC++: void CopyFrom(vtkMPICommunicator *source)\n\nCopies all the attributes of source, deleting previously stored\ndata. The MPI communicator handle is also copied. Normally, this\nshould not be needed. It is used during the construction of a new\ncommunicator for copying the world communicator, keeping the same\ncontext.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMPICommunicator_StaticNew()
{
  return vtkMPICommunicator::New();
}

PyObject *PyVTKClass_vtkMPICommunicatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMPICommunicator_StaticNew,
    PyvtkMPICommunicator_Methods,
    "vtkMPICommunicator", modulename,
    NULL, NULL,
    PyvtkMPICommunicator_Doc(),
    PyVTKClass_vtkCommunicatorNew(modulename));
  return cls;
}

const char **PyvtkMPICommunicator_Doc()
{
  static const char *docstring[] = {
    "vtkMPICommunicator - Class for creating user defined MPI\ncommunicators.\n\n",
    "Superclass: vtkCommunicator\n\n",
    "This class can be used to create user defined MPI communicators. The\nactual creation (with MPI_Comm_create) occurs in Initialize which\ntakes as arguments a super-communicator and a group of process ids.\nThe new communicator is created by including the processes contained\nin the group. The global communicator (equivalent to MPI_COMM_WORLD)\ncan be obtained using the class method GetWorldCommunicator",
    ". It is\nimportant to note that this communicator should not be used on the\nprocesses not contained in the group. For example, if the group\ncontains processes 0 and 1, controller->SetCommunicator(communicator)\nwould cause an MPI error on any other process.\n\nSee Also:\n\nvtkMPIController vtkProcessGroup\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMPICommunicator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMPICommunicatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMPICommunicator", o) != 0)
    {
    Py_DECREF(o);
    }

}

