
# "Hello, World!" in C++


cmake_minimum_required(VERSION 3.17)

find_package(fmt REQUIRED)

add_executable(hello-world
    "main.cpp"
)

target_compile_features(hello-world
    PRIVATE
        cxx_std_20
)

target_link_libraries(hello-world
    PRIVATE
        fmt::fmt
)

install(
    TARGETS hello-world
)

