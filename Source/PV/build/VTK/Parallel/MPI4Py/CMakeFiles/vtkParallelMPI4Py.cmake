set(vtkParallelMPI4Py_LOADED 1)
set(vtkParallelMPI4Py_DEPENDS "vtkParallelMPI;vtkPython;vtkmpi4py")
set(vtkParallelMPI4Py_LIBRARIES "vtkParallelMPI4Py")
set(vtkParallelMPI4Py_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3;/usr/lib/openmpi/include;/usr/lib/openmpi/include/openmpi")
set(vtkParallelMPI4Py_LIBRARY_DIRS "")
set(vtkParallelMPI4Py_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkParallelMPI4Py_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkParallelMPI4PyHierarchy.txt")

