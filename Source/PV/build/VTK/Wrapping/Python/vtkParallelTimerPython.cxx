// python wrapper for vtkParallelTimer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkParallelTimer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkParallelTimer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkParallelTimerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkParallelTimer_Doc();


static PyObject *
PyvtkParallelTimer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkParallelTimer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelTimer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelTimer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelTimer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParallelTimer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelTimer::NewInstance());

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
PyvtkParallelTimer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkParallelTimer *tempr = vtkParallelTimer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelTimer_SetWriterRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriterRank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriterRank(temp0);
      }
    else
      {
      op->vtkParallelTimer::SetWriterRank(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelTimer_GetWriterRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriterRank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriterRank() :
      op->vtkParallelTimer::GetWriterRank());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelTimer_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkParallelTimer::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelTimer_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  std::string temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkParallelTimer::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelTimer_StartEvent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->StartEvent(temp0);
      }
    else
      {
      op->vtkParallelTimer::StartEvent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelTimer_StartEvent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->StartEvent(temp0, temp1);
      }
    else
      {
      op->vtkParallelTimer::StartEvent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelTimer_StartEvent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkParallelTimer_StartEvent_s1(self, args);
    case 2:
      return PyvtkParallelTimer_StartEvent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "StartEvent");
  return NULL;
}



static PyObject *
PyvtkParallelTimer_EndEvent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->EndEvent(temp0);
      }
    else
      {
      op->vtkParallelTimer::EndEvent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelTimer_EndEvent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->EndEvent(temp0, temp1);
      }
    else
      {
      op->vtkParallelTimer::EndEvent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelTimer_EndEvent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkParallelTimer_EndEvent_s1(self, args);
    case 2:
      return PyvtkParallelTimer_EndEvent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EndEvent");
  return NULL;
}



static PyObject *
PyvtkParallelTimer_EndEventSynch_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndEventSynch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->EndEventSynch(temp0);
      }
    else
      {
      op->vtkParallelTimer::EndEventSynch(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelTimer_EndEventSynch_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndEventSynch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->EndEventSynch(temp0, temp1);
      }
    else
      {
      op->vtkParallelTimer::EndEventSynch(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelTimer_EndEventSynch(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkParallelTimer_EndEventSynch_s1(self, args);
    case 2:
      return PyvtkParallelTimer_EndEventSynch_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EndEventSynch");
  return NULL;
}



static PyObject *
PyvtkParallelTimer_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkParallelTimer::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelTimer_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkParallelTimer::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelTimer_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkParallelTimer::Write());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelTimer_GetGlobalInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalInstance");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkParallelTimer *tempr = vtkParallelTimer::GetGlobalInstance();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelTimer_DeleteGlobalInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeleteGlobalInstance");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkParallelTimer::DeleteGlobalInstance();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelTimer_SetWriteOnClose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteOnClose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteOnClose(temp0);
      }
    else
      {
      op->vtkParallelTimer::SetWriteOnClose(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelTimer_GetWriteOnClose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteOnClose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriteOnClose() :
      op->vtkParallelTimer::GetWriteOnClose());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelTimer_SetGlobalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlobalLevel(temp0);
      }
    else
      {
      op->vtkParallelTimer::SetGlobalLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelTimer_GetGlobalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTimer *op = static_cast<vtkParallelTimer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGlobalLevel() :
      op->vtkParallelTimer::GetGlobalLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkParallelTimer_Methods[] = {
  {(char*)"GetClassName", PyvtkParallelTimer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParallelTimer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParallelTimer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkParallelTimer\nC++: vtkParallelTimer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParallelTimer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParallelTimer\nC++: vtkParallelTimer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWriterRank", PyvtkParallelTimer_SetWriterRank, METH_VARARGS,
   (char*)"V.SetWriterRank(int)\nC++: void SetWriterRank(int a)\n\nSet the rank who writes.\n"},
  {(char*)"GetWriterRank", PyvtkParallelTimer_GetWriterRank, METH_VARARGS,
   (char*)"V.GetWriterRank() -> int\nC++: int GetWriterRank()\n\nSet the rank who writes.\n"},
  {(char*)"GetFileName", PyvtkParallelTimer_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet the filename that is used during write when the object is\nused as a singleton. If nothing is set the default is\nROOT_RANKS_PID.log\n"},
  {(char*)"SetFileName", PyvtkParallelTimer_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(const std::string &fileName)\n\nSet the filename that is used during write when the object is\nused as a singleton. If nothing is set the default is\nROOT_RANKS_PID.log\n"},
  {(char*)"StartEvent", PyvtkParallelTimer_StartEvent, METH_VARARGS,
   (char*)"V.StartEvent(string)\nC++: void StartEvent(const char *event)\nV.StartEvent(int, string)\nC++: void StartEvent(int rank, const char *event)\n\nThe log works as an event stack. EventStart pushes the event\nidentifier and its start time onto the stack. EventEnd pops the\nmost recent event time and identifier computes the ellapsed time\nand adds an entry to the log recording the event, it's start and\nend times, and its ellapsed time. EndEventSynch includes a\nbarrier before the measurement.\n"},
  {(char*)"EndEvent", PyvtkParallelTimer_EndEvent, METH_VARARGS,
   (char*)"V.EndEvent(string)\nC++: void EndEvent(const char *event)\nV.EndEvent(int, string)\nC++: void EndEvent(int rank, const char *event)\n\nThe log works as an event stack. EventStart pushes the event\nidentifier and its start time onto the stack. EventEnd pops the\nmost recent event time and identifier computes the ellapsed time\nand adds an entry to the log recording the event, it's start and\nend times, and its ellapsed time. EndEventSynch includes a\nbarrier before the measurement.\n"},
  {(char*)"EndEventSynch", PyvtkParallelTimer_EndEventSynch, METH_VARARGS,
   (char*)"V.EndEventSynch(string)\nC++: void EndEventSynch(const char *event)\nV.EndEventSynch(int, string)\nC++: void EndEventSynch(int rank, const char *event)\n\nThe log works as an event stack. EventStart pushes the event\nidentifier and its start time onto the stack. EventEnd pops the\nmost recent event time and identifier computes the ellapsed time\nand adds an entry to the log recording the event, it's start and\nend times, and its ellapsed time. EndEventSynch includes a\nbarrier before the measurement.\n"},
  {(char*)"Clear", PyvtkParallelTimer_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nClear the log.\n"},
  {(char*)"Update", PyvtkParallelTimer_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: void Update()\n\nWhen an object is finished writing data to the log object it must\ncall Update to send the data to the writer rank. This ensures\nthat all data is transfered to the root before MPI_Finalize is\ncalled while allowing the write to occur after Mpi_finalize.\nNote: This is a collective call.\n"},
  {(char*)"Write", PyvtkParallelTimer_Write, METH_VARARGS,
   (char*)"V.Write() -> int\nC++: int Write()\n\nWrite the log contents to a file.\n"},
  {(char*)"GetGlobalInstance", PyvtkParallelTimer_GetGlobalInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.GetGlobalInstance() -> vtkParallelTimer\nC++: static vtkParallelTimer *GetGlobalInstance()\n\nThe log class implements the singleton patern so that it may be\nshared accross class boundaries. If the log instance doesn't\nexist then one is created. It will be automatically destroyed at\nexit by the signleton destructor. It can be destroyed explicitly\nby calling DeleteGlobalInstance.\n"},
  {(char*)"DeleteGlobalInstance", PyvtkParallelTimer_DeleteGlobalInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.DeleteGlobalInstance()\nC++: static void DeleteGlobalInstance()\n\nExplicitly delete the singleton.\n"},
  {(char*)"SetWriteOnClose", PyvtkParallelTimer_SetWriteOnClose, METH_VARARGS,
   (char*)"V.SetWriteOnClose(int)\nC++: void SetWriteOnClose(int a)\n\nIf enabled and used as a singleton the log will write it's\ncontents to disk during program termination.\n"},
  {(char*)"GetWriteOnClose", PyvtkParallelTimer_GetWriteOnClose, METH_VARARGS,
   (char*)"V.GetWriteOnClose() -> int\nC++: int GetWriteOnClose()\n\nIf enabled and used as a singleton the log will write it's\ncontents to disk during program termination.\n"},
  {(char*)"SetGlobalLevel", PyvtkParallelTimer_SetGlobalLevel, METH_VARARGS,
   (char*)"V.SetGlobalLevel(int)\nC++: void SetGlobalLevel(int a)\n\nSet/Get the global log level. Applications can set this to the\ndesired level so that all pipeline objects will log data.\n"},
  {(char*)"GetGlobalLevel", PyvtkParallelTimer_GetGlobalLevel, METH_VARARGS,
   (char*)"V.GetGlobalLevel() -> int\nC++: int GetGlobalLevel()\n\nSet/Get the global log level. Applications can set this to the\ndesired level so that all pipeline objects will log data.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParallelTimer_StaticNew()
{
  return vtkParallelTimer::New();
}

PyObject *PyVTKClass_vtkParallelTimerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParallelTimer_StaticNew,
    PyvtkParallelTimer_Methods,
    "vtkParallelTimer", modulename,
    NULL, NULL,
    PyvtkParallelTimer_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkParallelTimer_Doc()
{
  static const char *docstring[] = {
    "vtkParallelTimer -- Distributed log for timing parallel algorithms\n\n",
    "Superclass: vtkObject\n\n",
    "Provides ditributed log functionality. When the file is\n written each process data is collected by rank 0 who\n writes the data to a single file in rank order.\n\n\n The log works as an event stack. EventStart pushes the\n event identifier and its start time onto the stack. EventEnd\n pops the most recent event time and identifier computes the\n ellapsed time and adds an entry to the log recording the\n e",
    "vent, it's start and end times, and its ellapsed time.\n EndEventSynch includes a barrier before the measurement.\n\n\n The log class implements the singleton patern so that it\n may be shared accross class boundaries. If the log instance\n doesn't exist then one is created. It will be automatically\n destroyed at exit by the signleton destructor. It can be\n destroyed explicitly by calling DeleteGlobalIn",
    "stance.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParallelTimer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParallelTimerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParallelTimer", o) != 0)
    {
    Py_DECREF(o);
    }

}

