// python wrapper for vtkMPIController
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMPIController.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMPIController(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMPIControllerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiProcessControllerNew
extern "C" { PyObject *PyVTKClass_vtkMultiProcessControllerNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiProcessControllerNew
#endif

static const char **PyvtkMPIController_Doc();


static PyObject *
PyvtkMPIController_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMPIController::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPIController::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMPIController *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPIController::NewInstance());

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
PyvtkMPIController_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMPIController *tempr = vtkMPIController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkMPIController::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_Finalize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finalize();
      }
    else
      {
      op->vtkMPIController::Finalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMPIController_Finalize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Finalize(temp0);
      }
    else
      {
      op->vtkMPIController::Finalize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMPIController_Finalize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMPIController_Finalize_s1(self, args);
    case 1:
      return PyvtkMPIController_Finalize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Finalize");
  return NULL;
}



static PyObject *
PyvtkMPIController_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleMethodExecute();
      }
    else
      {
      op->vtkMPIController::SingleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultipleMethodExecute();
      }
    else
      {
      op->vtkMPIController::MultipleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_CreateOutputWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateOutputWindow();
      }
    else
      {
      op->vtkMPIController::CreateOutputWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_ErrorString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ErrorString");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    char *tempr = vtkMPIController::ErrorString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_SetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  vtkMPICommunicator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPICommunicator"))
    {
    if (ap.IsBound())
      {
      op->SetCommunicator(temp0);
      }
    else
      {
      op->vtkMPIController::SetCommunicator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_CreateSubController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateSubController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  vtkProcessGroup *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcessGroup"))
    {
    vtkMPIController *tempr = (ap.IsBound() ?
      op->CreateSubController(temp0) :
      op->vtkMPIController::CreateSubController(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_PartitionController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PartitionController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkMPIController *tempr = (ap.IsBound() ?
      op->PartitionController(temp0, temp1) :
      op->vtkMPIController::PartitionController(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_Iprobe_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

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
      op->vtkMPIController::Iprobe(temp0, temp1, temp2, temp3));

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
PyvtkMPIController_Iprobe_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

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
      op->vtkMPIController::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkMPIController_Iprobe_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

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
      op->vtkMPIController::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkMPIController_Iprobe_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

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
      op->vtkMPIController::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkMPIController_Iprobe_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iprobe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

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
      op->vtkMPIController::Iprobe(temp0, temp1, temp2, temp3, temp4, temp5));

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

static PyMethodDef PyvtkMPIController_Iprobe_Methods[] = {
  {NULL, PyvtkMPIController_Iprobe_s2, METH_VARARGS,
   (char*)"@iiOOOO *i *i *i *i"},
  {NULL, PyvtkMPIController_Iprobe_s3, METH_VARARGS,
   (char*)"@iiOOOO *i *i *k *i"},
  {NULL, PyvtkMPIController_Iprobe_s4, METH_VARARGS,
   (char*)"@iiOOzO *i *i *i"},
  {NULL, PyvtkMPIController_Iprobe_s5, METH_VARARGS,
   (char*)"@iiOOOO *i *i *d *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMPIController_Iprobe(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMPIController_Iprobe_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkMPIController_Iprobe_s1(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Iprobe");
  return NULL;
}



static PyObject *
PyvtkMPIController_GetProcessorName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProcessorName");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const char *tempr = vtkMPIController::GetProcessorName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_SetUseSsendForRMI(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUseSsendForRMI");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMPIController::SetUseSsendForRMI(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_GetUseSsendForRMI(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUseSsendForRMI");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkMPIController::GetUseSsendForRMI();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMPIController_Methods[] = {
  {(char*)"GetClassName", PyvtkMPIController_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMPIController_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMPIController_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMPIController\nC++: vtkMPIController *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMPIController_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMPIController\nC++: vtkMPIController *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkMPIController_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nSame as Initialize(0, 0, 1). Mainly for calling from wrapped\nlanguages.\n"},
  {(char*)"Finalize", PyvtkMPIController_Finalize, METH_VARARGS,
   (char*)"V.Finalize()\nC++: virtual void Finalize()\nV.Finalize(int)\nC++: virtual void Finalize(int finalizedExternally)\n\nThis method is for cleaning up and has to be called before the\nend of the program if MPI was initialized with Initialize()\n"},
  {(char*)"SingleMethodExecute", PyvtkMPIController_SingleMethodExecute, METH_VARARGS,
   (char*)"V.SingleMethodExecute()\nC++: virtual void SingleMethodExecute()\n\nExecute the SingleMethod (as define by SetSingleMethod) using\nthis->NumberOfProcesses processes.\n"},
  {(char*)"MultipleMethodExecute", PyvtkMPIController_MultipleMethodExecute, METH_VARARGS,
   (char*)"V.MultipleMethodExecute()\nC++: virtual void MultipleMethodExecute()\n\nExecute the MultipleMethods (as define by calling\nSetMultipleMethod for each of the required\nthis->NumberOfProcesses methods) using this->NumberOfProcesses\nprocesses.\n"},
  {(char*)"CreateOutputWindow", PyvtkMPIController_CreateOutputWindow, METH_VARARGS,
   (char*)"V.CreateOutputWindow()\nC++: virtual void CreateOutputWindow()\n\nThis method can be used to tell the controller to create a\nspecial output window in which all messages are preceded by the\nprocess id.\n"},
  {(char*)"ErrorString", PyvtkMPIController_ErrorString, METH_VARARGS | METH_STATIC,
   (char*)"V.ErrorString(int) -> string\nC++: static char *ErrorString(int err)\n\nGiven an MPI error code, return a string which contains an error\nmessage. This string has to be freed by the user.\n"},
  {(char*)"SetCommunicator", PyvtkMPIController_SetCommunicator, METH_VARARGS,
   (char*)"V.SetCommunicator(vtkMPICommunicator)\nC++: void SetCommunicator(vtkMPICommunicator *comm)\n\nMPIController uses this communicator in all sends and receives.\nBy default, MPI_COMM_WORLD is used. THIS SHOULD ONLY BE CALLED ON\nTHE PROCESSES INCLUDED IN THE COMMUNICATOR. FOR EXAMPLE, IF THE\nCOMMUNICATOR CONTAINS PROCESSES 0 AND 1, INVOKING THIS METHOD ON\nANY OTHER PROCESS WILL CAUSE AN MPI ERROR AND POSSIBLY LEAD TO A\nCRASH.\n"},
  {(char*)"CreateSubController", PyvtkMPIController_CreateSubController, METH_VARARGS,
   (char*)"V.CreateSubController(vtkProcessGroup) -> vtkMPIController\nC++: virtual vtkMPIController *CreateSubController(\n    vtkProcessGroup *group)\n\n"},
  {(char*)"PartitionController", PyvtkMPIController_PartitionController, METH_VARARGS,
   (char*)"V.PartitionController(int, int) -> vtkMPIController\nC++: virtual vtkMPIController *PartitionController(int localColor,\n     int localKey)\n\n"},
  {(char*)"Iprobe", PyvtkMPIController_Iprobe, METH_VARARGS,
   (char*)"V.Iprobe(int, int, [int, ...], [int, ...]) -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource)\nV.Iprobe(int, int, [int, ...], [int, ...], [int, ...], [int, ...])\n     -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     int *type, int *size)\nV.Iprobe(int, int, [int, ...], [int, ...], [int, ...], [int, ...])\n     -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     unsigned long *type, int *size)\nV.Iprobe(int, int, [int, ...], [int, ...], string, [int, ...])\n    -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     const char *type, int *size)\nV.Iprobe(int, int, [int, ...], [int, ...], [float, ...], [int,\n    ...]) -> int\nC++: int Iprobe(int source, int tag, int *flag, int *actualSource,\n     double *type, int *size)\n\nNonblocking test for a message.  Inputs are: source -- the source\nrank or ANY_SOURCE; tag -- the tag value.  Outputs are: flag --\nTrue if a message matches; actualSource -- the rank sending the\nmessage (useful if ANY_SOURCE is used) if flag is True and\nactualSource isn't NULL; size -- the length of the message in\nbytes if flag is true (only set if size isn't NULL). The return\nvalue is 1 for success and 0 otherwise. Note: These methods\ndelegate to the communicator\n"},
  {(char*)"GetProcessorName", PyvtkMPIController_GetProcessorName, METH_VARARGS | METH_STATIC,
   (char*)"V.GetProcessorName() -> string\nC++: static const char *GetProcessorName()\n\nReturn true iff *one or more* of the communicator request objects\nis complete. The indices of the completed requests, w.r.t. the\nrequests array, are given in the completed user-supplied\nvtkIntArray.\n"},
  {(char*)"SetUseSsendForRMI", PyvtkMPIController_SetUseSsendForRMI, METH_VARARGS | METH_STATIC,
   (char*)"V.SetUseSsendForRMI(int)\nC++: static void SetUseSsendForRMI(int use_send)\n\nWhen set to 1, TriggerRMI uses Ssend() instead of Send() calls.\nOff (0) by default.\n"},
  {(char*)"GetUseSsendForRMI", PyvtkMPIController_GetUseSsendForRMI, METH_VARARGS | METH_STATIC,
   (char*)"V.GetUseSsendForRMI() -> int\nC++: static int GetUseSsendForRMI()\n\nWhen set to 1, TriggerRMI uses Ssend() instead of Send() calls.\nOff (0) by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMPIController_StaticNew()
{
  return vtkMPIController::New();
}

PyObject *PyVTKClass_vtkMPIControllerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMPIController_StaticNew,
    PyvtkMPIController_Methods,
    "vtkMPIController", modulename,
    NULL, NULL,
    PyvtkMPIController_Doc(),
    PyVTKClass_vtkMultiProcessControllerNew(modulename));
  return cls;
}

const char **PyvtkMPIController_Doc()
{
  static const char *docstring[] = {
    "vtkMPIController - Process communication using MPI\n\n",
    "Superclass: vtkMultiProcessController\n\n",
    "vtkMPIController is a concrete class which implements the abstract\nmulti-process control methods defined in vtkMultiProcessController\nusing MPI (Message Passing Interface) cf. Using MPI / Portable\nParallel Programming with the Message-Passing Interface, Gropp et al,\nMIT Press. It also provide functionality specific to MPI and not\npresent in vtkMultiProcessController. Before any MPI communication\nc",
    "an occur Initialize() must be called by all processes. It is\nrequired to be called once, controllers created after this need not\ncall Initialize(). At the end of the program Finalize() must be\ncalled by all processes.\n\nThe use of user-defined communicators are supported with the\nCreateSubController method.  Note that a duplicate of the user\ndefined communicator is used for internal communications ",
    "(RMIs). \nThis communicator has the same properties as the user one except that\nit has a new context which prevents the two communicators from\ninterfering with each other.\n\nSee Also:\n\nvtkOutputPort vtkInputPort  vtkMultiProcessController\nvtkMPICommunicator vtkProcessGroup\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMPIController(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMPIControllerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMPIController", o) != 0)
    {
    Py_DECREF(o);
    }

}

