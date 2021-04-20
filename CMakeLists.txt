cmake_minimum_required(VERSION 3.12)
project(PROJECT_NAME VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

add_subdirectory(dependencies/fmt EXCLUDE_FROM_ALL)

include_directories(include)

set(lib_srcs 
    src/lib.cpp
)

set(dep_libraries
    fmt::fmt
)

## OpenMP
# find_package(OpenMP)
# if (OPENMP_FOUND)
#     set(dep_libraries ${dep_libraries} OpenMP::OpenMP_CXX)
# endif()

add_library(test STATIC ${lib_srcs})
add_executable(main main.cpp)

target_link_libraries(main test)
target_link_libraries(main ${dep_libraries})