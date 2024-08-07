cmake_minimum_required(VERSION 3.17)
project(CodingChallenge)

set(CMAKE_CXX_STANDARD 14)

include_directories(C++/Reverse_Int
        C++/Roman_To_Int
        C++/Two_Sum
        C++/Running_Sum
        C++/Int_To_Binary
        C++/Non_Neg_Int_Ones
        C++/Corp_Flight_Bookings)

# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
    message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
    message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
        ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
        EXCLUDE_FROM_ALL)

# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories("${gtest_SOURCE_DIR}/include")
endif()

# Now simply link against gtest or gtest_main as needed. Eg
#add_executable(example example.cpp)
#target_link_libraries(example gtest_main)
#add_test(NAME example_test COMMAND example)
add_executable(CodingChallenge
        C++/main.cpp
        C++/Reverse_Int/ReverseInt.cpp
        C++/Reverse_Int/ReverseInt.h
        C++/Roman_To_Int/RomanToInt.cpp
        C++/Roman_To_Int/RomanToInt.h
        C++/Two_Sum/TwoSum.cpp
        C++/Two_Sum/TwoSum.h
        C++/Non_Neg_Int_Ones/NonNegIntOnes.cpp
        C++/Non_Neg_Int_Ones/NonNegIntOnes.h
        C++/Int_To_Binary/IntToBinary.cpp
        C++/Int_To_Binary/IntToBinary.h
        C++/Running_Sum/RunningSum.cpp
        C++/Running_Sum/RunningSum.h
        C++/Corp_Flight_Bookings/CorpFlightBookings.cpp
        C++/Corp_Flight_Bookings/CorpFlightBookings.h)
target_link_libraries(CodingChallenge
        gtest_main)
#add_test()