// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkIOInfovisPython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkIOInfovisPython(); }

void initvtkIOInfovisPython()
{
  static const char modulename[] = "vtkIOInfovisPython";
  real_initvtkIOInfovisPython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkIOInfovisPython(); }

void initlibvtkIOInfovisPython()
{
  static const char modulename[] = "libvtkIOInfovisPython";
  real_initvtkIOInfovisPython(modulename);
}

