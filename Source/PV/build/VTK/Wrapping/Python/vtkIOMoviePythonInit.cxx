// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkIOMoviePython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkIOMoviePython(); }

void initvtkIOMoviePython()
{
  static const char modulename[] = "vtkIOMoviePython";
  real_initvtkIOMoviePython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkIOMoviePython(); }

void initlibvtkIOMoviePython()
{
  static const char modulename[] = "libvtkIOMoviePython";
  real_initvtkIOMoviePython(modulename);
}
