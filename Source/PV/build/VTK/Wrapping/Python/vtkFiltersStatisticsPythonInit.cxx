// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkFiltersStatisticsPython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkFiltersStatisticsPython(); }

void initvtkFiltersStatisticsPython()
{
  static const char modulename[] = "vtkFiltersStatisticsPython";
  real_initvtkFiltersStatisticsPython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkFiltersStatisticsPython(); }

void initlibvtkFiltersStatisticsPython()
{
  static const char modulename[] = "libvtkFiltersStatisticsPython";
  real_initvtkFiltersStatisticsPython(modulename);
}

