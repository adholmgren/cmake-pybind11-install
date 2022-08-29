# Now we can find pybind11
find_package(pybind11 CONFIG REQUIRED)

pybind11_add_module(_add MODULE add/add.cpp)
pybind11_add_module(_subtract MODULE subtract/subtract.cpp)
pybind11_add_module(_multiply MODULE multiply/multiply.cpp)

# target_compile_definitions(_core PRIVATE VERSION_INFO=${PROJECT_VERSION})

install(TARGETS _add _subtract _multiply DESTINATION .)