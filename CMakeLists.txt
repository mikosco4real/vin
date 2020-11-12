cmake_minimum_required(VERSION 3.10)

# Set Variables
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Give the Project name which is also the output file name
project(calculator)

# Include Subdirectories and includes directories

include_directories(${PROJECT_SOURCE_DIR}/header)
# add_subdirectory(${PROJECT_SOURCE_DIR}/src)
 
# Add the Executable Files
add_executable(
    calculator
    DOT503A2.cpp
    )

target_link_libraries(calculator ${GTEST_LIBRARIES} pthread)

enable_testing()

add_executable(tester DOT503Test.cpp)
add_test(Tester tester)