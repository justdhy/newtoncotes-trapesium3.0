# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\metnum_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\metnum_autogen.dir\\ParseCache.txt"
  "metnum_autogen"
  )
endif()
