// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkFiltersAMRPython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkFiltersAMRPython(); }

void initvtkFiltersAMRPython()
{
  static const char modulename[] = "vtkFiltersAMRPython";
  real_initvtkFiltersAMRPython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkFiltersAMRPython(); }

void initlibvtkFiltersAMRPython()
{
  static const char modulename[] = "libvtkFiltersAMRPython";
  real_initvtkFiltersAMRPython(modulename);
}

