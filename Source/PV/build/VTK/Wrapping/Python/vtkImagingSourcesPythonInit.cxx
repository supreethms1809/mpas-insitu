// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkImagingSourcesPython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkImagingSourcesPython(); }

void initvtkImagingSourcesPython()
{
  static const char modulename[] = "vtkImagingSourcesPython";
  real_initvtkImagingSourcesPython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkImagingSourcesPython(); }

void initlibvtkImagingSourcesPython()
{
  static const char modulename[] = "libvtkImagingSourcesPython";
  real_initvtkImagingSourcesPython(modulename);
}

