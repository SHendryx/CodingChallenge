cmake_minimum_required(VERSION 3.17)
project(CodingChallenge)

set(CMAKE_CXX_STANDARD 14)

include_directories(C++/Reverse_Int)
include_directories(C++/Roman_To_Int)

add_executable(CodingChallenge
        C++/Reverse_Int/ReverseInt.cpp
        C++/Reverse_Int/ReverseInt.h
        C++/Roman_To_Int/RomanToInt.cpp
        C++/Roman_To_Int/RomanToInt.h
        C++/main.cpp)
