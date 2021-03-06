/* #undef PARAVIEW_USE_UNIFIED_BINDINGS */
/* #undef NO_PYTHON_BINDINGS_AVAILABLE */
#ifdef NO_PYTHON_BINDINGS_AVAILABLE
#undef PARAVIEW_USE_UNIFIED_BINDINGS
#endif
#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
#include "vtkPython.h"
#include "vtkPythonInterpreter.h"
#endif

#include "vtkClientServerInterpreter.h"

#ifndef PARAVIEW_BUILD_SHARED_LIBS
/* #undef PARAVIEW_BUILD_SHARED_LIBS */
#endif
#if defined(PARAVIEW_BUILD_SHARED_LIBS) && defined(_WIN32)
# define VTK_WRAP_CS_EXPORT __declspec(dllexport)
#else
# define VTK_WRAP_CS_EXPORT
#endif

#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
extern "C" void real_initvtkCommonMiscPython(const char *modulename);

void initvtkCommonMiscPython()
{
  static const char modulename[] = "vtkCommonMiscPython";
  real_initvtkCommonMiscPython(modulename);
}
#endif

extern void vtkContourValues_Init(vtkClientServerInterpreter* csi);
extern void vtkFunctionParser_Init(vtkClientServerInterpreter* csi);
extern void vtkHeap_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkCommonMiscCS_Initialize(
  vtkClientServerInterpreter *csi)
{
#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
  if (!vtkPythonInterpreter::IsInitialized())
    {
    vtkPythonInterpreter::Initialize();
    }

  static bool initialized = false;

  if (!initialized)
    {
    initialized = true;
    PyImport_AppendInittab("vtkCommonMiscPython", initvtkCommonMiscPython);
    }

  csi->Load("vtkCommonMisc");
#endif

  vtkContourValues_Init(csi);
  vtkFunctionParser_Init(csi);
  vtkHeap_Init(csi);

}
