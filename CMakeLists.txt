cmake_minimum_required(VERSION 3.28.3 FATAL_ERROR)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")

project(MyProject
    VERSION 0.2
    LANGUAGES C CXX
)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(myProgram src/main.cpp)
target_link_libraries(myProgram ${GTEST_LIBRARIES} pthread)

add_test(MyTest myProgram)
