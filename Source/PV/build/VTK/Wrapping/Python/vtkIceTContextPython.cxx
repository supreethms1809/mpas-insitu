// python wrapper for vtkIceTContext
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkIceTContext.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkIceTContext(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkIceTContextNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkIceTContext_Doc();


static PyObject *
PyvtkIceTContext_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTContext *op = static_cast<vtkIceTContext *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkIceTContext::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTContext_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTContext *op = static_cast<vtkIceTContext *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIceTContext::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTContext_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTContext *op = static_cast<vtkIceTContext *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIceTContext *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIceTContext::NewInstance());

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
PyvtkIceTContext_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkIceTContext *tempr = vtkIceTContext::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTContext_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTContext *op = static_cast<vtkIceTContext *>(vp);

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
      op->vtkIceTContext::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTContext_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTContext *op = static_cast<vtkIceTContext *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkIceTContext::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTContext_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTContext *op = static_cast<vtkIceTContext *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MakeCurrent();
      }
    else
      {
      op->vtkIceTContext::MakeCurrent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTContext_GetUseOpenGL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOpenGL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTContext *op = static_cast<vtkIceTContext *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseOpenGL() :
      op->vtkIceTContext::GetUseOpenGL());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIceTContext_SetUseOpenGL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOpenGL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTContext *op = static_cast<vtkIceTContext *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOpenGL(temp0);
      }
    else
      {
      op->vtkIceTContext::SetUseOpenGL(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTContext_UseOpenGLOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOpenGLOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTContext *op = static_cast<vtkIceTContext *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOpenGLOn();
      }
    else
      {
      op->vtkIceTContext::UseOpenGLOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTContext_UseOpenGLOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOpenGLOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTContext *op = static_cast<vtkIceTContext *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOpenGLOff();
      }
    else
      {
      op->vtkIceTContext::UseOpenGLOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTContext_CopyState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTContext *op = static_cast<vtkIceTContext *>(vp);

  vtkIceTContext *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIceTContext"))
    {
    if (ap.IsBound())
      {
      op->CopyState(temp0);
      }
    else
      {
      op->vtkIceTContext::CopyState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIceTContext_IsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIceTContext *op = static_cast<vtkIceTContext *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsValid() :
      op->vtkIceTContext::IsValid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkIceTContext_Methods[] = {
  {(char*)"GetClassName", PyvtkIceTContext_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIceTContext_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIceTContext_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkIceTContext\nC++: vtkIceTContext *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIceTContext_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIceTContext\nC++: vtkIceTContext *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkIceTContext_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(\n    vtkMultiProcessController *controller)\n\nAssociate the context with the given controller.  Currently, this\nmust be a vtkMPIController.  The context is not valid until a\ncontroller is set.\n"},
  {(char*)"GetController", PyvtkIceTContext_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nAssociate the context with the given controller.  Currently, this\nmust be a vtkMPIController.  The context is not valid until a\ncontroller is set.\n"},
  {(char*)"MakeCurrent", PyvtkIceTContext_MakeCurrent, METH_VARARGS,
   (char*)"V.MakeCurrent()\nC++: virtual void MakeCurrent()\n\nMake this context the current one.\n"},
  {(char*)"GetUseOpenGL", PyvtkIceTContext_GetUseOpenGL, METH_VARARGS,
   (char*)"V.GetUseOpenGL() -> int\nC++: int GetUseOpenGL()\n\nTurn this on to enable the OpenGL layer in IceT.  By default this\nis off. Unless you explicitly plan to use the OpenGL layer, it\nshould probably remain off to ensure that you don't accidentally\nuse a feature you did not intend to use.\n"},
  {(char*)"SetUseOpenGL", PyvtkIceTContext_SetUseOpenGL, METH_VARARGS,
   (char*)"V.SetUseOpenGL(int)\nC++: virtual void SetUseOpenGL(int flag)\n\nTurn this on to enable the OpenGL layer in IceT.  By default this\nis off. Unless you explicitly plan to use the OpenGL layer, it\nshould probably remain off to ensure that you don't accidentally\nuse a feature you did not intend to use.\n"},
  {(char*)"UseOpenGLOn", PyvtkIceTContext_UseOpenGLOn, METH_VARARGS,
   (char*)"V.UseOpenGLOn()\nC++: void UseOpenGLOn()\n\nTurn this on to enable the OpenGL layer in IceT.  By default this\nis off. Unless you explicitly plan to use the OpenGL layer, it\nshould probably remain off to ensure that you don't accidentally\nuse a feature you did not intend to use.\n"},
  {(char*)"UseOpenGLOff", PyvtkIceTContext_UseOpenGLOff, METH_VARARGS,
   (char*)"V.UseOpenGLOff()\nC++: void UseOpenGLOff()\n\nTurn this on to enable the OpenGL layer in IceT.  By default this\nis off. Unless you explicitly plan to use the OpenGL layer, it\nshould probably remain off to ensure that you don't accidentally\nuse a feature you did not intend to use.\n"},
  {(char*)"CopyState", PyvtkIceTContext_CopyState, METH_VARARGS,
   (char*)"V.CopyState(vtkIceTContext)\nC++: virtual void CopyState(vtkIceTContext *src)\n\nCopy the state from the given context to this context.\n"},
  {(char*)"IsValid", PyvtkIceTContext_IsValid, METH_VARARGS,
   (char*)"V.IsValid() -> int\nC++: virtual int IsValid()\n\nReturns true if the current state is valid.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIceTContext_StaticNew()
{
  return vtkIceTContext::New();
}

PyObject *PyVTKClass_vtkIceTContextNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIceTContext_StaticNew,
    PyvtkIceTContext_Methods,
    "vtkIceTContext", modulename,
    NULL, NULL,
    PyvtkIceTContext_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkIceTContext_Doc()
{
  static const char *docstring[] = {
    "vtkIceTContext\n\n",
    "Superclass: vtkObject\n\n",
    "This is a helper class for vtkIceTRenderManager and\nvtkOpenGLIceTRenderer. Most users will never need this class.\n\nThis class was conceived to pass IceT contexts between\nvtkIceTRenderManager and vtkOpenGLIceTRenderer without having to\ninclude the IceT header file in either class.  Along the way, some\nfunctionality was added.\n\nBugs:\n\nIf you set the communicator to NULL and then to a valid value, th",
    "e\nIceT state will be lost.\n\nSee Also:\n\nvtkIceTRenderManager\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIceTContext(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIceTContextNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIceTContext", o) != 0)
    {
    Py_DECREF(o);
    }

}

