// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkRenderingOpenGLPython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkRenderingOpenGLPython(); }

void initvtkRenderingOpenGLPython()
{
  static const char modulename[] = "vtkRenderingOpenGLPython";
  real_initvtkRenderingOpenGLPython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkRenderingOpenGLPython(); }

void initlibvtkRenderingOpenGLPython()
{
  static const char modulename[] = "libvtkRenderingOpenGLPython";
  real_initvtkRenderingOpenGLPython(modulename);
}

