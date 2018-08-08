set(vtkIOParallelNetCDF_LOADED 1)
set(vtkIOParallelNetCDF_DEPENDS "vtkCommonCore;vtkParallelMPI;vtknetcdf")
set(vtkIOParallelNetCDF_LIBRARIES "vtkIOParallelNetCDF")
set(vtkIOParallelNetCDF_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkIOParallelNetCDF_LIBRARY_DIRS "")
set(vtkIOParallelNetCDF_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkIOParallelNetCDF_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIOParallelNetCDFHierarchy.txt")

