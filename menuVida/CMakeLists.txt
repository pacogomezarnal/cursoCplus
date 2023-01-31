cmake_minimum_required(VERSION 3.5)

project(menuVida LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(menuVida main.cpp)

install(TARGETS menuVida
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
