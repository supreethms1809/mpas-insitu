// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkCommonSystemPython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkCommonSystemPython(); }

void initvtkCommonSystemPython()
{
  static const char modulename[] = "vtkCommonSystemPython";
  real_initvtkCommonSystemPython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkCommonSystemPython(); }

void initlibvtkCommonSystemPython()
{
  static const char modulename[] = "libvtkCommonSystemPython";
  real_initvtkCommonSystemPython(modulename);
}

