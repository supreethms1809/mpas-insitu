FILE(REMOVE_RECURSE
  "CMakeFiles/paraview_pyc"
  "../../lib/site-packages/paraview/pv_compile_complete"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/paraview_pyc.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
