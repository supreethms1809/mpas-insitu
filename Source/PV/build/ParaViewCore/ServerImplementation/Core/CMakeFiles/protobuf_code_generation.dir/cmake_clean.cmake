FILE(REMOVE_RECURSE
  "CMakeFiles/protobuf_code_generation"
  "vtkPVMessage.pb.h"
  "vtkPVMessage.pb.cc"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/protobuf_code_generation.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
