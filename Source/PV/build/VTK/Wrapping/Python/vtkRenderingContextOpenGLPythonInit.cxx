// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkRenderingContextOpenGLPython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkRenderingContextOpenGLPython(); }

void initvtkRenderingContextOpenGLPython()
{
  static const char modulename[] = "vtkRenderingContextOpenGLPython";
  real_initvtkRenderingContextOpenGLPython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkRenderingContextOpenGLPython(); }

void initlibvtkRenderingContextOpenGLPython()
{
  static const char modulename[] = "libvtkRenderingContextOpenGLPython";
  real_initvtkRenderingContextOpenGLPython(modulename);
}

