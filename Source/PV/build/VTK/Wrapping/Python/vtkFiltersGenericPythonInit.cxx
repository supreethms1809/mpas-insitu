// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkFiltersGenericPython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkFiltersGenericPython(); }

void initvtkFiltersGenericPython()
{
  static const char modulename[] = "vtkFiltersGenericPython";
  real_initvtkFiltersGenericPython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkFiltersGenericPython(); }

void initlibvtkFiltersGenericPython()
{
  static const char modulename[] = "libvtkFiltersGenericPython";
  real_initvtkFiltersGenericPython(modulename);
}

