FILE(REMOVE_RECURSE
  "CMakeFiles/AutobahnPython"
  "autobahn.build-complete"
  "autobahn.copy-complete"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/AutobahnPython.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
