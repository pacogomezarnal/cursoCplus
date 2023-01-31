cmake_minimum_required(VERSION 3.5)

project(SimpleCplus LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(SimpleCplus main.cpp)

install(TARGETS SimpleCplus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
