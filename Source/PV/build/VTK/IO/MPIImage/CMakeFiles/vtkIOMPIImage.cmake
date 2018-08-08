set(vtkIOMPIImage_LOADED 1)
set(vtkIOMPIImage_DEPENDS "vtkIOImage;vtkIOImage;vtkParallelMPI;vtksys")
set(vtkIOMPIImage_LIBRARIES "vtkIOMPIImage")
set(vtkIOMPIImage_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkIOMPIImage_LIBRARY_DIRS "")
set(vtkIOMPIImage_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkIOMPIImage_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIOMPIImageHierarchy.txt")
set(vtkIOMPIImage_IMPLEMENTS "vtkIOImage")

