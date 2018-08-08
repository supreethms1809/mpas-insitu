FILE(REMOVE_RECURSE
  "CMakeFiles/vtkWebPython"
  "web.build-complete"
  "web.copy-complete"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/vtkWebPython.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
