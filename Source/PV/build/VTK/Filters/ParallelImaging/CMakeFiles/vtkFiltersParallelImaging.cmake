set(vtkFiltersParallelImaging_LOADED 1)
set(vtkFiltersParallelImaging_DEPENDS "vtkFiltersImaging;vtkFiltersParallel;vtkIOLegacy;vtkImagingCore;vtkParallelCore")
set(vtkFiltersParallelImaging_LIBRARIES "vtkFiltersParallelImaging")
set(vtkFiltersParallelImaging_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkFiltersParallelImaging_LIBRARY_DIRS "")
set(vtkFiltersParallelImaging_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkFiltersParallelImaging_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkFiltersParallelImagingHierarchy.txt")

