// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkPVServerManagerCorePython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkPVServerManagerCorePython(); }

void initvtkPVServerManagerCorePython()
{
  static const char modulename[] = "vtkPVServerManagerCorePython";
  real_initvtkPVServerManagerCorePython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkPVServerManagerCorePython(); }

void initlibvtkPVServerManagerCorePython()
{
  static const char modulename[] = "libvtkPVServerManagerCorePython";
  real_initvtkPVServerManagerCorePython(modulename);
}

