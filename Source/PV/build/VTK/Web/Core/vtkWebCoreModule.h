
#ifndef VTKWEBCORE_EXPORT_H
#define VTKWEBCORE_EXPORT_H

#ifdef VTKWEBCORE_STATIC_DEFINE
#  define VTKWEBCORE_EXPORT
#  define VTKWEBCORE_NO_EXPORT
#else
#  ifndef VTKWEBCORE_EXPORT
#    ifdef vtkWebCore_EXPORTS
        /* We are building this library */
#      define VTKWEBCORE_EXPORT 
#    else
        /* We are using this library */
#      define VTKWEBCORE_EXPORT 
#    endif
#  endif

#  ifndef VTKWEBCORE_NO_EXPORT
#    define VTKWEBCORE_NO_EXPORT 
#  endif
#endif

#ifndef VTKWEBCORE_DEPRECATED
#  define VTKWEBCORE_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKWEBCORE_DEPRECATED_EXPORT VTKWEBCORE_EXPORT __attribute__ ((__deprecated__))
#  define VTKWEBCORE_DEPRECATED_NO_EXPORT VTKWEBCORE_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKWEBCORE_NO_DEPRECATED
#endif



#endif
