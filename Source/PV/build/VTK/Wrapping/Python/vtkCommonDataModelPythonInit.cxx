// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkCommonDataModelPython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkCommonDataModelPython(); }

void initvtkCommonDataModelPython()
{
  static const char modulename[] = "vtkCommonDataModelPython";
  real_initvtkCommonDataModelPython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkCommonDataModelPython(); }

void initlibvtkCommonDataModelPython()
{
  static const char modulename[] = "libvtkCommonDataModelPython";
  real_initvtkCommonDataModelPython(modulename);
}

