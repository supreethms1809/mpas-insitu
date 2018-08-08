// python wrapper for vtkStructuredImplicitConnectivity
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStructuredImplicitConnectivity.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStructuredImplicitConnectivity(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStructuredImplicitConnectivityNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkStructuredImplicitConnectivity_Doc();


static PyObject *
PyvtkStructuredImplicitConnectivity_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStructuredImplicitConnectivity::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredImplicitConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredImplicitConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredImplicitConnectivity::NewInstance());

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
PyvtkStructuredImplicitConnectivity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStructuredImplicitConnectivity *tempr = vtkStructuredImplicitConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_SetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0);
      }
    else
      {
      op->vtkStructuredImplicitConnectivity::SetWholeExtent(temp0);
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
PyvtkStructuredImplicitConnectivity_RegisterGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  int temp0;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  vtkPoints *temp2 = NULL;
  vtkPointData *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPoints") &&
      ap.GetVTKObject(temp3, "vtkPointData"))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->RegisterGrid(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkStructuredImplicitConnectivity::RegisterGrid(temp0, temp1, temp2, temp3);
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
PyvtkStructuredImplicitConnectivity_RegisterRectilinearGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterRectilinearGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  int temp0;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  vtkDataArray *temp2 = NULL;
  vtkDataArray *temp3 = NULL;
  vtkDataArray *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetVTKObject(temp4, "vtkDataArray") &&
      ap.GetVTKObject(temp5, "vtkPointData"))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->RegisterRectilinearGrid(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkStructuredImplicitConnectivity::RegisterRectilinearGrid(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkStructuredImplicitConnectivity_EstablishConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EstablishConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EstablishConnectivity();
      }
    else
      {
      op->vtkStructuredImplicitConnectivity::EstablishConnectivity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_HasImplicitConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasImplicitConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasImplicitConnectivity() :
      op->vtkStructuredImplicitConnectivity::HasImplicitConnectivity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_ExchangeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExchangeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExchangeData();
      }
    else
      {
      op->vtkStructuredImplicitConnectivity::ExchangeData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_GetOutputStructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  int temp0;
  vtkStructuredGrid *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkStructuredGrid"))
    {
    if (ap.IsBound())
      {
      op->GetOutputStructuredGrid(temp0, temp1);
      }
    else
      {
      op->vtkStructuredImplicitConnectivity::GetOutputStructuredGrid(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_GetOutputImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  int temp0;
  vtkImageData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->GetOutputImageData(temp0, temp1);
      }
    else
      {
      op->vtkStructuredImplicitConnectivity::GetOutputImageData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_GetOutputRectilinearGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputRectilinearGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  int temp0;
  vtkRectilinearGrid *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRectilinearGrid"))
    {
    if (ap.IsBound())
      {
      op->GetOutputRectilinearGrid(temp0, temp1);
      }
    else
      {
      op->vtkStructuredImplicitConnectivity::GetOutputRectilinearGrid(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredImplicitConnectivity_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredImplicitConnectivity_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredImplicitConnectivity_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredImplicitConnectivity_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStructuredImplicitConnectivity\nC++: vtkStructuredImplicitConnectivity *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredImplicitConnectivity_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredImplicitConnectivity\nC++: vtkStructuredImplicitConnectivity *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWholeExtent", PyvtkStructuredImplicitConnectivity_SetWholeExtent, METH_VARARGS,
   (char*)"V.SetWholeExtent([int, int, int, int, int, int])\nC++: void SetWholeExtent(int wholeExt[6])\n\n\\brief Sets the whole extent for the distributed structured\n    domain.\n\\param wholeExt the extent of the entire domain (in).\n\note All ranks must call this method with the same whole extent.\n\\post this->DomainInfo != NULL\n"},
  {(char*)"RegisterGrid", PyvtkStructuredImplicitConnectivity_RegisterGrid, METH_VARARGS,
   (char*)"V.RegisterGrid(int, [int, int, int, int, int, int], vtkPoints,\n    vtkPointData)\nC++: void RegisterGrid(const int gridID, int extent[6],\n    vtkPoints *gridPnts, vtkPointData *pointData)\n\n"},
  {(char*)"RegisterRectilinearGrid", PyvtkStructuredImplicitConnectivity_RegisterRectilinearGrid, METH_VARARGS,
   (char*)"V.RegisterRectilinearGrid(int, [int, int, int, int, int, int],\n    vtkDataArray, vtkDataArray, vtkDataArray, vtkPointData)\nC++: void RegisterRectilinearGrid(const int gridID, int extent[6],\n     vtkDataArray *xcoords, vtkDataArray *ycoords,\n    vtkDataArray *zcoords, vtkPointData *pointData)\n\n"},
  {(char*)"EstablishConnectivity", PyvtkStructuredImplicitConnectivity_EstablishConnectivity, METH_VARARGS,
   (char*)"V.EstablishConnectivity()\nC++: void EstablishConnectivity()\n\n\\brief Finds implicit connectivity for a distributed structured\n    dataset.\n\note This is a collective operation, all ranks must call this\nmethod.\n\\pre this->Controller != NULL\n\\pre this->DomainInfo != NULL\n"},
  {(char*)"HasImplicitConnectivity", PyvtkStructuredImplicitConnectivity_HasImplicitConnectivity, METH_VARARGS,
   (char*)"V.HasImplicitConnectivity() -> bool\nC++: bool HasImplicitConnectivity()\n\n\\brief Checks if there is implicit connectivity.\n\\return status true if implicit connectivity in one or more\n    dimensions.\n"},
  {(char*)"ExchangeData", PyvtkStructuredImplicitConnectivity_ExchangeData, METH_VARARGS,
   (char*)"V.ExchangeData()\nC++: void ExchangeData()\n\n\\brief Exchanges one layer (row or column) of data between\n    neighboring\ngrids to fix the implicit connectivity.\n\note This is a collective operation, all ranks must call this\nmethod.\n\\pre this->Controller != NULL\n\\pre this->DomainInfo != NULL\n"},
  {(char*)"GetOutputStructuredGrid", PyvtkStructuredImplicitConnectivity_GetOutputStructuredGrid, METH_VARARGS,
   (char*)"V.GetOutputStructuredGrid(int, vtkStructuredGrid)\nC++: void GetOutputStructuredGrid(const int gridID,\n    vtkStructuredGrid *grid)\n\n\\brief Gets the output structured grid instance on this process.\n\\param gridID the ID of the grid\n\\param grid pointer to data-structure where to store the output.\n"},
  {(char*)"GetOutputImageData", PyvtkStructuredImplicitConnectivity_GetOutputImageData, METH_VARARGS,
   (char*)"V.GetOutputImageData(int, vtkImageData)\nC++: void GetOutputImageData(const int gridID, vtkImageData *grid)\n\n\\brief Gets the output uniform grid instance on this process.\n\\param gridID the ID of the grid.\n\\param grid pointer to data-structure where to store the output.\n"},
  {(char*)"GetOutputRectilinearGrid", PyvtkStructuredImplicitConnectivity_GetOutputRectilinearGrid, METH_VARARGS,
   (char*)"V.GetOutputRectilinearGrid(int, vtkRectilinearGrid)\nC++: void GetOutputRectilinearGrid(const int gridID,\n    vtkRectilinearGrid *grid)\n\n\\brief Gets the output rectilinear grid instance on this process.\n\\param gridID the ID of the grid.\n\\param grid pointer to data-structure where to store the output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredImplicitConnectivity_StaticNew()
{
  return vtkStructuredImplicitConnectivity::New();
}

PyObject *PyVTKClass_vtkStructuredImplicitConnectivityNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredImplicitConnectivity_StaticNew,
    PyvtkStructuredImplicitConnectivity_Methods,
    "vtkStructuredImplicitConnectivity", modulename,
    NULL, NULL,
    PyvtkStructuredImplicitConnectivity_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkStructuredImplicitConnectivity_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredImplicitConnectivity -- Communicates data among a\n\n",
    "Superclass: vtkObject\n\n",
    "This class is intended as a lower-level helper for higher level VTK\nfilters that provides functionality for resolving the implicit\nconnectivity (gap) between two or more partitions of a distributed\nstructured dataset.\n\nCaveats:\n\nThe present implementation requires: \n one block/grid per rank. \n 2-D (XY,YZ or XZ planes) or 3-D datasets. \n node-center fields must match across processes.  \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredImplicitConnectivity(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredImplicitConnectivityNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredImplicitConnectivity", o) != 0)
    {
    Py_DECREF(o);
    }

}

