cmake_minimum_required(VERSION 3.28)
project(Giera_v1 LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)

FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git

        GIT_TAG 2.5.1
        GIT_SHALLOW ON
        EXCLUDE_FROM_ALL
        SYSTEM
)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt
        GIT_TAG     11.0.2
)

FetchContent_MakeAvailable(fmt SFML)

add_executable(Giera_v1 main.cpp
        main.cpp
        main.cpp
        Player.cpp
        Enemy.cpp)
target_compile_features(Giera_v1 PRIVATE cxx_std_20)
target_link_libraries(Giera_v1 PRIVATE sfml-graphics sfml-window sfml-system fmt::fmt)