// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkInteractionImagePython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkInteractionImagePython(); }

void initvtkInteractionImagePython()
{
  static const char modulename[] = "vtkInteractionImagePython";
  real_initvtkInteractionImagePython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkInteractionImagePython(); }

void initlibvtkInteractionImagePython()
{
  static const char modulename[] = "libvtkInteractionImagePython";
  real_initvtkInteractionImagePython(modulename);
}

