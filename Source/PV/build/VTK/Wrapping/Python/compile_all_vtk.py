import compileall
compileall.compile_dir('/home/mpas/Desktop/Source/PV/build/VTK/Wrapping/Python')
file = open('/home/mpas/Desktop/Source/PV/build/VTK/Wrapping/Python/vtk_compile_complete', 'w')
file.write('Done')
