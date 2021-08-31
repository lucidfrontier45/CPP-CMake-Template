#include <fmt/format.h>
#include <iostream>
#include <mymod/mymod.hpp>

int main(int argc, char** argv)
{
    auto y = mymod::add(10, 20);
    std::cout << fmt::format("y = {}", y) << std::endl;
    return 0;
}