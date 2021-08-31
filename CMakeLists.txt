cmake_minimum_required(VERSION 3.12)
project(PYBIND11_TEST VERSION 0.5.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")


add_subdirectory(dependencies/pybind11)
add_subdirectory(libmymod)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE mymod fmt::fmt)

pybind11_add_module(_ext pymodule.cpp)
target_link_libraries(_ext PRIVATE mymod)

install(TARGETS _ext
       DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/myapp
)