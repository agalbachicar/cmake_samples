cmake_minimum_required (VERSION 2.8.8)
project (app)

# The version number.
set (app_VERSION_MAJOR 1)
set (app_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/include/appConfig.hh.in"
  "${PROJECT_SOURCE_DIR}/include/appConfig.hh"
)

include_directories(
  ${PROJECT_SOURCE_DIR}/include
  include
)

file (
  GLOB sources "src/*.cc"
)

# Add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
add_executable(app ${sources})
