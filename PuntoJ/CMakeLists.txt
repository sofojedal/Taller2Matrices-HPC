cmake_minimum_required(VERSION 3.5)

project(PuntoJ LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PuntoJ main.cpp)

install(TARGETS PuntoJ
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
