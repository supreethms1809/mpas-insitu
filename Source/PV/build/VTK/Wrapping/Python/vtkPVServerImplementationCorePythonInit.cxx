// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkPVServerImplementationCorePython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkPVServerImplementationCorePython(); }

void initvtkPVServerImplementationCorePython()
{
  static const char modulename[] = "vtkPVServerImplementationCorePython";
  real_initvtkPVServerImplementationCorePython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkPVServerImplementationCorePython(); }

void initlibvtkPVServerImplementationCorePython()
{
  static const char modulename[] = "libvtkPVServerImplementationCorePython";
  real_initvtkPVServerImplementationCorePython(modulename);
}

