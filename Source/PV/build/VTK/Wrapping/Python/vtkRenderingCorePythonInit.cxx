// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkRenderingCorePython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkRenderingCorePython(); }

void initvtkRenderingCorePython()
{
  static const char modulename[] = "vtkRenderingCorePython";
  real_initvtkRenderingCorePython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkRenderingCorePython(); }

void initlibvtkRenderingCorePython()
{
  static const char modulename[] = "libvtkRenderingCorePython";
  real_initvtkRenderingCorePython(modulename);
}

