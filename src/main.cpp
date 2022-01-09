#include <iostream>

#include <fmt/core.h>  // for format()

int main()
{
    std::string name = "World";
    std::cout << fmt::format("Hello, {}!!!!\n", name);
}
