// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkIOCorePython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkIOCorePython(); }

void initvtkIOCorePython()
{
  static const char modulename[] = "vtkIOCorePython";
  real_initvtkIOCorePython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkIOCorePython(); }

void initlibvtkIOCorePython()
{
  static const char modulename[] = "libvtkIOCorePython";
  real_initvtkIOCorePython(modulename);
}
