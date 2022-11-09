cmake_minimum_required(VERSION 3.23)
project(LCMath)

set(CMAKE_CXX_STANDARD 14)

file(GLOB lcmath_SRC
        "src/*.h"
        "src/*.cpp"
        )

add_executable(${PROJECT_NAME} ${lcmath_SRC})