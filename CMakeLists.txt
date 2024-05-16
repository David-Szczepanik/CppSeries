cmake_minimum_required(VERSION 3.28)
project(CppSeries)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppSeries main.cpp
        Log.cpp
        Math.cpp
        EndBrace.h
        Variables.cpp
        Conditionals.cpp
        Log.h
)
