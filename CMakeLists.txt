cmake_minimum_required(VERSION 3.10)
project(geocalcpp)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)
include_directories(include/enums)
include_directories(include/resources)

# Add the executable
add_executable(geocalcpp
    src/main.cpp
    src/modules/bangunDatar.cpp
    src/modules/bangunRuang.cpp
    src/modules/clearScreen.cpp
    src/modules/printASCII.cpp
    src/modules/color.cpp
    src/modules/displayImage.cpp
    src/modules/input.cpp
    src/modules/validateInput.cpp
    src/modules/output.cpp
    src/view/menu.cpp
    src/view/handleMenu.cpp
    src/resources/imagesBangunDatar.cpp
    src/resources/imagesBangunRuang.cpp
)