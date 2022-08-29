
#include <pybind11/pybind11.h>

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

int multiply(int i, int j) {
    return i * j;
}

namespace py = pybind11;

PYBIND11_MODULE(_multiply, m) {
    m.doc() = R"pbdoc(
        Pybind11 example plugin
        -----------------------

        .. currentmodule:: scikit_build_example

        .. autosummary::
           :toctree: _generate

           add
           subtract
    )pbdoc";

    m.def("multiply", &multiply, R"pbdoc(
        Add two numbers

        Some other explanation about the add function.
    )pbdoc");
}