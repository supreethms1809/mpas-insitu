set(vtkFiltersParallelMPI_LOADED 1)
set(vtkFiltersParallelMPI_DEPENDS "vtkFiltersExtraction;vtkFiltersGeneral;vtkFiltersParallel;vtkImagingCore;vtkParallelCore;vtkParallelMPI")
set(vtkFiltersParallelMPI_LIBRARIES "vtkFiltersParallelMPI")
set(vtkFiltersParallelMPI_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkFiltersParallelMPI_LIBRARY_DIRS "")
set(vtkFiltersParallelMPI_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkFiltersParallelMPI_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkFiltersParallelMPIHierarchy.txt")

