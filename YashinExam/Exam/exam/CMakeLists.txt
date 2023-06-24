cmake_minimum_required(VERSION 3.5)

project(exam LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exam main.cpp metricregister.cpp metricregister.h)

install(TARGETS exam
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
