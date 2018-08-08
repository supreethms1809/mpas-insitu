FILE(REMOVE_RECURSE
  "CMakeFiles/Pygments"
  "pygments.build-complete"
  "pygments.copy-complete"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/Pygments.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
