set(vtkParallelMPI_LOADED 1)
set(vtkParallelMPI_DEPENDS "vtkParallelCore")
set(vtkParallelMPI_LIBRARIES "vtkParallelMPI")
set(vtkParallelMPI_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3;/usr/lib/openmpi/include;/usr/lib/openmpi/include/openmpi")
set(vtkParallelMPI_LIBRARY_DIRS "")
set(vtkParallelMPI_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkParallelMPI_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkParallelMPIHierarchy.txt")

