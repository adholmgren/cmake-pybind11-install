# Now we can find pybind11
find_package(pybind11 CONFIG REQUIRED)

add_subdirectory(add)
pybind11_add_module(add_interface MODULE wrappers/add_interface.cpp)
target_link_libraries(add_interface PRIVATE add)
pybind11_add_module(_subtract MODULE subtract/subtract.cpp)
pybind11_add_module(_multiply MODULE multiply/multiply.cpp)

install(TARGETS add_interface _subtract _multiply DESTINATION libs)