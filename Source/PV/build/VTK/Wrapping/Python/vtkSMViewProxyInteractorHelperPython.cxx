// python wrapper for vtkSMViewProxyInteractorHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMViewProxyInteractorHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMViewProxyInteractorHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMViewProxyInteractorHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSMViewProxyInteractorHelper_Doc();


static PyObject *
PyvtkSMViewProxyInteractorHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxyInteractorHelper *op = static_cast<vtkSMViewProxyInteractorHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMViewProxyInteractorHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxyInteractorHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxyInteractorHelper *op = static_cast<vtkSMViewProxyInteractorHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMViewProxyInteractorHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxyInteractorHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxyInteractorHelper *op = static_cast<vtkSMViewProxyInteractorHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMViewProxyInteractorHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMViewProxyInteractorHelper::NewInstance());

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
PyvtkSMViewProxyInteractorHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMViewProxyInteractorHelper *tempr = vtkSMViewProxyInteractorHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxyInteractorHelper_SetViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxyInteractorHelper *op = static_cast<vtkSMViewProxyInteractorHelper *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
    {
    if (ap.IsBound())
      {
      op->SetViewProxy(temp0);
      }
    else
      {
      op->vtkSMViewProxyInteractorHelper::SetViewProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxyInteractorHelper_GetViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxyInteractorHelper *op = static_cast<vtkSMViewProxyInteractorHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->GetViewProxy() :
      op->vtkSMViewProxyInteractorHelper::GetViewProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxyInteractorHelper_SetupInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxyInteractorHelper *op = static_cast<vtkSMViewProxyInteractorHelper *>(vp);

  vtkRenderWindowInteractor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->SetupInteractor(temp0);
      }
    else
      {
      op->vtkSMViewProxyInteractorHelper::SetupInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxyInteractorHelper_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxyInteractorHelper *op = static_cast<vtkSMViewProxyInteractorHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkSMViewProxyInteractorHelper::GetInteractor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxyInteractorHelper_CleanupInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanupInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxyInteractorHelper *op = static_cast<vtkSMViewProxyInteractorHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CleanupInteractor();
      }
    else
      {
      op->vtkSMViewProxyInteractorHelper::CleanupInteractor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMViewProxyInteractorHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkSMViewProxyInteractorHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMViewProxyInteractorHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMViewProxyInteractorHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMViewProxyInteractorHelper\nC++: vtkSMViewProxyInteractorHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMViewProxyInteractorHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMViewProxyInteractorHelper\nC++: vtkSMViewProxyInteractorHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetViewProxy", PyvtkSMViewProxyInteractorHelper_SetViewProxy, METH_VARARGS,
   (char*)"V.SetViewProxy(vtkSMViewProxy)\nC++: void SetViewProxy(vtkSMViewProxy *proxy)\n\nSet the view proxy. This is a weak reference i.e. the view\nproxy's reference count will be unchanged by this call.\n"},
  {(char*)"GetViewProxy", PyvtkSMViewProxyInteractorHelper_GetViewProxy, METH_VARARGS,
   (char*)"V.GetViewProxy() -> vtkSMViewProxy\nC++: vtkSMViewProxy *GetViewProxy()\n\nSet the view proxy. This is a weak reference i.e. the view\nproxy's reference count will be unchanged by this call.\n"},
  {(char*)"SetupInteractor", PyvtkSMViewProxyInteractorHelper_SetupInteractor, METH_VARARGS,
   (char*)"V.SetupInteractor(vtkRenderWindowInteractor)\nC++: void SetupInteractor(vtkRenderWindowInteractor *iren)\n\nSet the interactor to \"help\" the view with. This is a weak\nreference i.e. the interactor's reference count will be unchanged\nby this call.\n"},
  {(char*)"GetInteractor", PyvtkSMViewProxyInteractorHelper_GetInteractor, METH_VARARGS,
   (char*)"V.GetInteractor() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor()\n\nSet the interactor to \"help\" the view with. This is a weak\nreference i.e. the interactor's reference count will be unchanged\nby this call.\n"},
  {(char*)"CleanupInteractor", PyvtkSMViewProxyInteractorHelper_CleanupInteractor, METH_VARARGS,
   (char*)"V.CleanupInteractor()\nC++: void CleanupInteractor()\n\nSet the interactor to \"help\" the view with. This is a weak\nreference i.e. the interactor's reference count will be unchanged\nby this call.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMViewProxyInteractorHelper_StaticNew()
{
  return vtkSMViewProxyInteractorHelper::New();
}

PyObject *PyVTKClass_vtkSMViewProxyInteractorHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMViewProxyInteractorHelper_StaticNew,
    PyvtkSMViewProxyInteractorHelper_Methods,
    "vtkSMViewProxyInteractorHelper", modulename,
    NULL, NULL,
    PyvtkSMViewProxyInteractorHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSMViewProxyInteractorHelper_Doc()
{
  static const char *docstring[] = {
    "vtkSMViewProxyInteractorHelper - helper class that make it easier to\n\n",
    "Superclass: vtkObject\n\n",
    "vtkSMViewProxyInteractorHelper is a helper class designed to make it\neasier to hook up vtkRenderWindowInteractor to call methods on a\nvtkSMViewProxy (or subclass). It's primarily designed to work with\nvtkSMRenderViewProxy (and subclasses), but it should work with other\ntypes of views too.\n\nTo use this helper, the view typically creates a instance for itself\nas register itself (using\nvtkSMViewProxy",
    "InteractorHelper::SetViewProxy) and then calls\nvtkSMViewProxyInteractorHelper::SetupInteractor(). This method will\ninitialize the interactor (potentially changing some ivars on the\ninteractor to avoid automatic rendering, using\nvtkRenderWindowInteractor::EnableRenderOff(), etc.) and setup event\nobserver to monitor interaction.\n\nvtkSMViewProxyInteractorHelper only using\nvtkSMViewProxy::StillRender(",
    ") and vtkSMViewProxy::InteractiveRender()\nAPIs directly. However several properties can be optionally present\non the view proxy to dictate this class' behaviour. These are as\nfollows:\n\n\\li NonInteractiveRenderDelay :- when present provides time in\n    seconds to\ndelay the StillRender() call after user interaction has ended i.e.\nvtkRenderWindowInteractor fires the vtkCommand::EndInteractionEvent.\nI",
    "f missing, or less than 0.01, the view will immediately render.\n\n\\li EnableRenderOnInteraction :- when present provides a flag whether\nthe interactor\nshould trigger the render calls (either StillRender or\nInteractiveRender) as a consequence of interaction. If missing, we\ntreat EnableRender as ON.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMViewProxyInteractorHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMViewProxyInteractorHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMViewProxyInteractorHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

