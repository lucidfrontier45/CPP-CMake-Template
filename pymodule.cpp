#include <mymod/mymod.hpp>
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(_ext, m)
{
    m.def("my_add", mymod::add);
}