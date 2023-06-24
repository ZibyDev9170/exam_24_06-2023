cmake_minimum_required(VERSION 3.5)

project(UnitTest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(UnitTest main.cpp)

target_include_directories(UnitTest PRIVATE ../../../Exam/exam/)

install(TARGETS UnitTest
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
