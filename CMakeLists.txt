cmake_minimum_required(VERSION 3.15...3.22)

project(_scikit_build VERSION "0.0.1")

# if(SKBUILD)
# Scikit-Build does not add your site-packages to the search path
# automatically, so we need to add it _or_ the pybind11 specific directory
# here.
execute_process(
  COMMAND "${PYTHON_EXECUTABLE}" -c
          "import pybind11; print(pybind11.get_cmake_dir())"
  OUTPUT_VARIABLE _tmp_dir
  OUTPUT_STRIP_TRAILING_WHITESPACE COMMAND_ECHO STDOUT)
list(APPEND CMAKE_PREFIX_PATH "${_tmp_dir}")
set(pybind11_DIR "${_tmp_dir}")
# endif()

add_subdirectory( src )