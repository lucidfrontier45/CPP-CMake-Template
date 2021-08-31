set(ext_srcs 
    src/mymod.cpp
)

add_subdirectory(dependencies/fmt EXCLUDE_FROM_ALL)

add_library(mymod STATIC ${ext_srcs})
target_compile_features(mymod PRIVATE cxx_std_17)
target_link_libraries(mymod PRIVATE fmt::fmt)
target_include_directories(mymod PUBLIC include)