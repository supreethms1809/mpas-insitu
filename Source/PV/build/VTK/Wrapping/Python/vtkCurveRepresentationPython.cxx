// python wrapper for vtkCurveRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCurveRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCurveRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCurveRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkCurveRepresentation_Doc();

#ifndef DECLARED_PyvtkCurveRepresentation__InteractionState_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkCurveRepresentation__InteractionState_Type;
#define DECLARED_PyvtkCurveRepresentation__InteractionState_Type
#endif

PyTypeObject PyvtkCurveRepresentation__InteractionState_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"_InteractionState", // tp_name
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

PyObject *PyvtkCurveRepresentation__InteractionState_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCurveRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkCurveRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCurveRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCurveRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCurveRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCurveRepresentation::NewInstance());

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
PyvtkCurveRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCurveRepresentation *tempr = vtkCurveRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionState(temp0);
      }
    else
      {
      op->vtkCurveRepresentation::SetInteractionState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_SetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectToPlane(temp0);
      }
    else
      {
      op->vtkCurveRepresentation::SetProjectToPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_GetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectToPlane() :
      op->vtkCurveRepresentation::GetProjectToPlane());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_ProjectToPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProjectToPlaneOn();
      }
    else
      {
      op->vtkCurveRepresentation::ProjectToPlaneOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_ProjectToPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProjectToPlaneOff();
      }
    else
      {
      op->vtkCurveRepresentation::ProjectToPlaneOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_SetPlaneSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  vtkPlaneSource *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneSource"))
    {
    if (ap.IsBound())
      {
      op->SetPlaneSource(temp0);
      }
    else
      {
      op->vtkCurveRepresentation::SetPlaneSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_SetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormal(temp0);
      }
    else
      {
      op->vtkCurveRepresentation::SetProjectionNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_GetProjectionNormalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMinValue() :
      op->vtkCurveRepresentation::GetProjectionNormalMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_GetProjectionNormalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMaxValue() :
      op->vtkCurveRepresentation::GetProjectionNormalMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_GetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormal() :
      op->vtkCurveRepresentation::GetProjectionNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_SetProjectionNormalToXAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToXAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToXAxes();
      }
    else
      {
      op->vtkCurveRepresentation::SetProjectionNormalToXAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_SetProjectionNormalToYAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToYAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToYAxes();
      }
    else
      {
      op->vtkCurveRepresentation::SetProjectionNormalToYAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_SetProjectionNormalToZAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToZAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToZAxes();
      }
    else
      {
      op->vtkCurveRepresentation::SetProjectionNormalToZAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_SetProjectionNormalToOblique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToOblique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToOblique();
      }
    else
      {
      op->vtkCurveRepresentation::SetProjectionNormalToOblique();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_SetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionPosition(temp0);
      }
    else
      {
      op->vtkCurveRepresentation::SetProjectionPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_GetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetProjectionPosition() :
      op->vtkCurveRepresentation::GetProjectionPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    op->GetPolyData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkCurveRepresentation::GetHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkCurveRepresentation::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLineProperty() :
      op->vtkCurveRepresentation::GetLineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedLineProperty() :
      op->vtkCurveRepresentation::GetSelectedLineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_SetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetNumberOfHandles(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_GetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfHandles() :
      op->vtkCurveRepresentation::GetNumberOfHandles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_SetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  int temp0;
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
      op->SetHandlePosition(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkCurveRepresentation::SetHandlePosition(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCurveRepresentation_SetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetHandlePosition(temp0, temp1);
      }
    else
      {
      op->vtkCurveRepresentation::SetHandlePosition(temp0, temp1);
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
PyvtkCurveRepresentation_SetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkCurveRepresentation_SetHandlePosition_s1(self, args);
    case 2:
      return PyvtkCurveRepresentation_SetHandlePosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetHandlePosition");
  return NULL;
}



static PyObject *
PyvtkCurveRepresentation_GetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetHandlePosition(temp0, temp1);
      }
    else
      {
      op->vtkCurveRepresentation::GetHandlePosition(temp0, temp1);
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
PyvtkCurveRepresentation_GetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetHandlePosition(temp0) :
      op->vtkCurveRepresentation::GetHandlePosition(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCurveRepresentation_GetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCurveRepresentation_GetHandlePosition_s1(self, args);
    case 1:
      return PyvtkCurveRepresentation_GetHandlePosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetHandlePosition");
  return NULL;
}



static PyObject *
PyvtkCurveRepresentation_GetHandlePositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkDoubleArray *tempr = op->GetHandlePositions();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_SetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClosed(temp0);
      }
    else
      {
      op->vtkCurveRepresentation::SetClosed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_GetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClosed() :
      op->vtkCurveRepresentation::GetClosed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_ClosedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedOn();
      }
    else
      {
      op->vtkCurveRepresentation::ClosedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_ClosedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedOff();
      }
    else
      {
      op->vtkCurveRepresentation::ClosedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_IsClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsClosed() :
      op->vtkCurveRepresentation::IsClosed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_GetSummedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    double tempr = op->GetSummedLength();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_InitializeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    op->InitializeHandles(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->BuildRepresentation();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkCurveRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

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
      op->StartWidgetInteraction(temp0);
      }
    else
      {
      op->vtkCurveRepresentation::StartWidgetInteraction(temp0);
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
PyvtkCurveRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

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
      op->WidgetInteraction(temp0);
      }
    else
      {
      op->vtkCurveRepresentation::WidgetInteraction(temp0);
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
PyvtkCurveRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

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
      op->EndWidgetInteraction(temp0);
      }
    else
      {
      op->vtkCurveRepresentation::EndWidgetInteraction(temp0);
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
PyvtkCurveRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkCurveRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

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
      op->vtkCurveRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCurveRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCurveRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCurveRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCurveRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurveRepresentation_SetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveRepresentation *op = static_cast<vtkCurveRepresentation *>(vp);

  double temp0;
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
      op->SetLineColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCurveRepresentation::SetLineColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCurveRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkCurveRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCurveRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCurveRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCurveRepresentation\nC++: vtkCurveRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCurveRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCurveRepresentation\nC++: vtkCurveRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInteractionState", PyvtkCurveRepresentation_SetInteractionState, METH_VARARGS,
   (char*)"V.SetInteractionState(int)\nC++: void SetInteractionState(int a)\n\nSet the interaction state\n"},
  {(char*)"SetProjectToPlane", PyvtkCurveRepresentation_SetProjectToPlane, METH_VARARGS,
   (char*)"V.SetProjectToPlane(int)\nC++: void SetProjectToPlane(int a)\n\nForce the widget to be projected onto one of the orthogonal\nplanes.  Remember that when the InteractionState changes, a\nModifiedEvent is invoked.  This can be used to snap the curve to\nthe plane if it is originally not aligned.  The normal in\nSetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and\n3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"GetProjectToPlane", PyvtkCurveRepresentation_GetProjectToPlane, METH_VARARGS,
   (char*)"V.GetProjectToPlane() -> int\nC++: int GetProjectToPlane()\n\nForce the widget to be projected onto one of the orthogonal\nplanes.  Remember that when the InteractionState changes, a\nModifiedEvent is invoked.  This can be used to snap the curve to\nthe plane if it is originally not aligned.  The normal in\nSetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and\n3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"ProjectToPlaneOn", PyvtkCurveRepresentation_ProjectToPlaneOn, METH_VARARGS,
   (char*)"V.ProjectToPlaneOn()\nC++: void ProjectToPlaneOn()\n\nForce the widget to be projected onto one of the orthogonal\nplanes.  Remember that when the InteractionState changes, a\nModifiedEvent is invoked.  This can be used to snap the curve to\nthe plane if it is originally not aligned.  The normal in\nSetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and\n3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"ProjectToPlaneOff", PyvtkCurveRepresentation_ProjectToPlaneOff, METH_VARARGS,
   (char*)"V.ProjectToPlaneOff()\nC++: void ProjectToPlaneOff()\n\nForce the widget to be projected onto one of the orthogonal\nplanes.  Remember that when the InteractionState changes, a\nModifiedEvent is invoked.  This can be used to snap the curve to\nthe plane if it is originally not aligned.  The normal in\nSetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and\n3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"SetPlaneSource", PyvtkCurveRepresentation_SetPlaneSource, METH_VARARGS,
   (char*)"V.SetPlaneSource(vtkPlaneSource)\nC++: void SetPlaneSource(vtkPlaneSource *plane)\n\nSet up a reference to a vtkPlaneSource that could be from another\nwidget object, e.g. a vtkPolyDataSourceWidget.\n"},
  {(char*)"SetProjectionNormal", PyvtkCurveRepresentation_SetProjectionNormal, METH_VARARGS,
   (char*)"V.SetProjectionNormal(int)\nC++: void SetProjectionNormal(int)\n\n"},
  {(char*)"GetProjectionNormalMinValue", PyvtkCurveRepresentation_GetProjectionNormalMinValue, METH_VARARGS,
   (char*)"V.GetProjectionNormalMinValue() -> int\nC++: int GetProjectionNormalMinValue()\n\n"},
  {(char*)"GetProjectionNormalMaxValue", PyvtkCurveRepresentation_GetProjectionNormalMaxValue, METH_VARARGS,
   (char*)"V.GetProjectionNormalMaxValue() -> int\nC++: int GetProjectionNormalMaxValue()\n\n"},
  {(char*)"GetProjectionNormal", PyvtkCurveRepresentation_GetProjectionNormal, METH_VARARGS,
   (char*)"V.GetProjectionNormal() -> int\nC++: int GetProjectionNormal()\n\n"},
  {(char*)"SetProjectionNormalToXAxes", PyvtkCurveRepresentation_SetProjectionNormalToXAxes, METH_VARARGS,
   (char*)"V.SetProjectionNormalToXAxes()\nC++: void SetProjectionNormalToXAxes()\n\n"},
  {(char*)"SetProjectionNormalToYAxes", PyvtkCurveRepresentation_SetProjectionNormalToYAxes, METH_VARARGS,
   (char*)"V.SetProjectionNormalToYAxes()\nC++: void SetProjectionNormalToYAxes()\n\n"},
  {(char*)"SetProjectionNormalToZAxes", PyvtkCurveRepresentation_SetProjectionNormalToZAxes, METH_VARARGS,
   (char*)"V.SetProjectionNormalToZAxes()\nC++: void SetProjectionNormalToZAxes()\n\n"},
  {(char*)"SetProjectionNormalToOblique", PyvtkCurveRepresentation_SetProjectionNormalToOblique, METH_VARARGS,
   (char*)"V.SetProjectionNormalToOblique()\nC++: void SetProjectionNormalToOblique()\n\n"},
  {(char*)"SetProjectionPosition", PyvtkCurveRepresentation_SetProjectionPosition, METH_VARARGS,
   (char*)"V.SetProjectionPosition(float)\nC++: void SetProjectionPosition(double position)\n\nSet the position of poly line handles and points in terms of a\nplane's position. i.e., if ProjectionNormal is 0, all of the\nx-coordinate values of the points are set to position. Any value\ncan be passed (and is ignored) to update the poly line points\nwhen Projection normal is set to 3 for arbritrary plane\norientations.\n"},
  {(char*)"GetProjectionPosition", PyvtkCurveRepresentation_GetProjectionPosition, METH_VARARGS,
   (char*)"V.GetProjectionPosition() -> float\nC++: double GetProjectionPosition()\n\nSet the position of poly line handles and points in terms of a\nplane's position. i.e., if ProjectionNormal is 0, all of the\nx-coordinate values of the points are set to position. Any value\ncan be passed (and is ignored) to update the poly line points\nwhen Projection normal is set to 3 for arbritrary plane\norientations.\n"},
  {(char*)"GetPolyData", PyvtkCurveRepresentation_GetPolyData, METH_VARARGS,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: virtual void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the\ninterpolating curve. Points are guaranteed to be up-to-date when\neither the InteractionEvent or EndInteraction events are invoked.\nThe user provides the vtkPolyData and the points and polyline are\nadded to it.\n"},
  {(char*)"GetHandleProperty", PyvtkCurveRepresentation_GetHandleProperty, METH_VARARGS,
   (char*)"V.GetHandleProperty() -> vtkProperty\nC++: vtkProperty *GetHandleProperty()\n\nSet/Get the handle properties (the spheres are the handles). The\nproperties of the handles when selected and unselected can be\nmanipulated.\n"},
  {(char*)"GetSelectedHandleProperty", PyvtkCurveRepresentation_GetSelectedHandleProperty, METH_VARARGS,
   (char*)"V.GetSelectedHandleProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedHandleProperty()\n\nSet/Get the handle properties (the spheres are the handles). The\nproperties of the handles when selected and unselected can be\nmanipulated.\n"},
  {(char*)"GetLineProperty", PyvtkCurveRepresentation_GetLineProperty, METH_VARARGS,
   (char*)"V.GetLineProperty() -> vtkProperty\nC++: vtkProperty *GetLineProperty()\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedLineProperty", PyvtkCurveRepresentation_GetSelectedLineProperty, METH_VARARGS,
   (char*)"V.GetSelectedLineProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedLineProperty()\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {(char*)"SetNumberOfHandles", PyvtkCurveRepresentation_SetNumberOfHandles, METH_VARARGS,
   (char*)"V.SetNumberOfHandles(int)\nC++: virtual void SetNumberOfHandles(int npts)\n\nSet/Get the number of handles for this widget.\n"},
  {(char*)"GetNumberOfHandles", PyvtkCurveRepresentation_GetNumberOfHandles, METH_VARARGS,
   (char*)"V.GetNumberOfHandles() -> int\nC++: int GetNumberOfHandles()\n\nSet/Get the number of handles for this widget.\n"},
  {(char*)"SetHandlePosition", PyvtkCurveRepresentation_SetHandlePosition, METH_VARARGS,
   (char*)"V.SetHandlePosition(int, float, float, float)\nC++: virtual void SetHandlePosition(int handle, double x,\n    double y, double z)\nV.SetHandlePosition(int, [float, float, float])\nC++: virtual void SetHandlePosition(int handle, double xyz[3])\n\nSet/Get the position of the handles. Call GetNumberOfHandles to\ndetermine the valid range of handle indices.\n"},
  {(char*)"GetHandlePosition", PyvtkCurveRepresentation_GetHandlePosition, METH_VARARGS,
   (char*)"V.GetHandlePosition(int, [float, float, float])\nC++: virtual void GetHandlePosition(int handle, double xyz[3])\nV.GetHandlePosition(int) -> (float, ...)\nC++: virtual double *GetHandlePosition(int handle)\n\nSet/Get the position of the handles. Call GetNumberOfHandles to\ndetermine the valid range of handle indices.\n"},
  {(char*)"GetHandlePositions", PyvtkCurveRepresentation_GetHandlePositions, METH_VARARGS,
   (char*)"V.GetHandlePositions() -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetHandlePositions()\n\nSet/Get the position of the handles. Call GetNumberOfHandles to\ndetermine the valid range of handle indices.\n"},
  {(char*)"SetClosed", PyvtkCurveRepresentation_SetClosed, METH_VARARGS,
   (char*)"V.SetClosed(int)\nC++: void SetClosed(int closed)\n\nControl whether the curve is open or closed. A closed forms a\ncontinuous loop: the first and last points are the same.  A\nminimum of 3 handles are required to form a closed loop.\n"},
  {(char*)"GetClosed", PyvtkCurveRepresentation_GetClosed, METH_VARARGS,
   (char*)"V.GetClosed() -> int\nC++: int GetClosed()\n\nControl whether the curve is open or closed. A closed forms a\ncontinuous loop: the first and last points are the same.  A\nminimum of 3 handles are required to form a closed loop.\n"},
  {(char*)"ClosedOn", PyvtkCurveRepresentation_ClosedOn, METH_VARARGS,
   (char*)"V.ClosedOn()\nC++: void ClosedOn()\n\nControl whether the curve is open or closed. A closed forms a\ncontinuous loop: the first and last points are the same.  A\nminimum of 3 handles are required to form a closed loop.\n"},
  {(char*)"ClosedOff", PyvtkCurveRepresentation_ClosedOff, METH_VARARGS,
   (char*)"V.ClosedOff()\nC++: void ClosedOff()\n\nControl whether the curve is open or closed. A closed forms a\ncontinuous loop: the first and last points are the same.  A\nminimum of 3 handles are required to form a closed loop.\n"},
  {(char*)"IsClosed", PyvtkCurveRepresentation_IsClosed, METH_VARARGS,
   (char*)"V.IsClosed() -> int\nC++: int IsClosed()\n\nConvenience method to determine whether the curve is closed in a\ngeometric sense.  The widget may be set \"closed\" but still be\ngeometrically open (e.g., a straight line).\n"},
  {(char*)"GetSummedLength", PyvtkCurveRepresentation_GetSummedLength, METH_VARARGS,
   (char*)"V.GetSummedLength() -> float\nC++: virtual double GetSummedLength()\n\nGet the approximate vs. the true arc length of the curve.\nCalculated as the summed lengths of the individual straight line\nsegments. Use SetResolution to control the accuracy.\n"},
  {(char*)"InitializeHandles", PyvtkCurveRepresentation_InitializeHandles, METH_VARARGS,
   (char*)"V.InitializeHandles(vtkPoints)\nC++: virtual void InitializeHandles(vtkPoints *points)\n\nConvenience method to allocate and set the handles from a\nvtkPoints instance.  If the first and last points are the same,\nthe curve sets Closed to the on InteractionState and disregards\nthe last point, otherwise Closed remains unchanged.\n"},
  {(char*)"BuildRepresentation", PyvtkCurveRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"ComputeInteractionState", PyvtkCurveRepresentation_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"StartWidgetInteraction", PyvtkCurveRepresentation_StartWidgetInteraction, METH_VARARGS,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"WidgetInteraction", PyvtkCurveRepresentation_WidgetInteraction, METH_VARARGS,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"EndWidgetInteraction", PyvtkCurveRepresentation_EndWidgetInteraction, METH_VARARGS,
   (char*)"V.EndWidgetInteraction([float, float])\nC++: virtual void EndWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"GetBounds", PyvtkCurveRepresentation_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCurveRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkCurveRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkCurveRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"RenderOverlay", PyvtkCurveRepresentation_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkCurveRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"SetLineColor", PyvtkCurveRepresentation_SetLineColor, METH_VARARGS,
   (char*)"V.SetLineColor(float, float, float)\nC++: void SetLineColor(double r, double g, double b)\n\nConvenience method to set the line color. Ideally one should use\nGetLineProperty()->SetColor().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkCurveRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkCurveRepresentation_Methods,
    "vtkCurveRepresentation", modulename,
    NULL, NULL,
    PyvtkCurveRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkCurveRepresentation__InteractionState_Type);
    PyvtkCurveRepresentation__InteractionState_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkCurveRepresentation__InteractionState_Type;
    if (o && PyDict_SetItemString(d, (char *)"_InteractionState", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 8; c++)
      {
      typedef vtkCurveRepresentation::_InteractionState cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[8] = {
          { "Outside", vtkCurveRepresentation::Outside },
          { "OnHandle", vtkCurveRepresentation::OnHandle },
          { "OnLine", vtkCurveRepresentation::OnLine },
          { "Moving", vtkCurveRepresentation::Moving },
          { "Scaling", vtkCurveRepresentation::Scaling },
          { "Spinning", vtkCurveRepresentation::Spinning },
          { "Inserting", vtkCurveRepresentation::Inserting },
          { "Erasing", vtkCurveRepresentation::Erasing },
        };

      o = PyvtkCurveRepresentation__InteractionState_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkCurveRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkCurveRepresentation - vtkWidgetRepresentation\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "Base class for widgets used to define curves from points, such as\nvtkPolyLineRepresentation and vtkSplineRepresentation.  This class\nuses handles, the number of which can be changed, to represent the\npoints that define the curve. The handles can be picked can be picked\non the curve itself to translate or rotate it in the scene.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCurveRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCurveRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCurveRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 4; c++)
    {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_PROJECTION_YZ", 0 },
        { "VTK_PROJECTION_XZ", 1 },
        { "VTK_PROJECTION_XY", 2 },
        { "VTK_PROJECTION_OBLIQUE", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

