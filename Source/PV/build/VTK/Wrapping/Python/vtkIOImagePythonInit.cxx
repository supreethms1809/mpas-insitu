// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkIOImagePython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkIOImagePython(); }

void initvtkIOImagePython()
{
  static const char modulename[] = "vtkIOImagePython";
  real_initvtkIOImagePython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkIOImagePython(); }

void initlibvtkIOImagePython()
{
  static const char modulename[] = "libvtkIOImagePython";
  real_initvtkIOImagePython(modulename);
}

