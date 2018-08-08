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
extern "C" void real_initvtkRenderingParallelLICPython(const char *modulename);

void initvtkRenderingParallelLICPython()
{
  static const char modulename[] = "vtkRenderingParallelLICPython";
  real_initvtkRenderingParallelLICPython(modulename);
}
#endif

extern void vtkParallelTimer_Init(vtkClientServerInterpreter* csi);
extern void vtkPSurfaceLICPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkRenderingParallelLICObjectFactory_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkRenderingParallelLICCS_Initialize(
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
    PyImport_AppendInittab("vtkRenderingParallelLICPython", initvtkRenderingParallelLICPython);
    }

  csi->Load("vtkRenderingParallelLIC");
#endif

  vtkParallelTimer_Init(csi);
  vtkPSurfaceLICPainter_Init(csi);
  vtkRenderingParallelLICObjectFactory_Init(csi);

}
