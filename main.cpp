#include "lib.hpp"
#include <fmt/core.h>
#include <iostream>

int main(int argc, char** argv)
{
    auto y = testlib::add(10, 20);
    std::cout << fmt::format("y = {}", y) << std::endl;
    return 0;
}