// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkIOParallelNetCDFPython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkIOParallelNetCDFPython(); }

void initvtkIOParallelNetCDFPython()
{
  static const char modulename[] = "vtkIOParallelNetCDFPython";
  real_initvtkIOParallelNetCDFPython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkIOParallelNetCDFPython(); }

void initlibvtkIOParallelNetCDFPython()
{
  static const char modulename[] = "libvtkIOParallelNetCDFPython";
  real_initvtkIOParallelNetCDFPython(modulename);
}

