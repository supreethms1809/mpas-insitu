FILE(REMOVE_RECURSE
  "CMakeFiles/WebApplications"
  "py-DataProber-complete"
  "www-DataProber-complete"
  "py-LiveArticles-complete"
  "www-LiveArticles-complete"
  "py-FileViewer-complete"
  "www-FileViewer-complete"
  "py-Visualizer-complete"
  "www-Visualizer-complete"
  "py-Parallel-complete"
  "www-Parallel-complete"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/WebApplications.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
