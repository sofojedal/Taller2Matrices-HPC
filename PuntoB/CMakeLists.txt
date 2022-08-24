cmake_minimum_required(VERSION 3.5)

project(PuntoB LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PuntoB main.cpp)

install(TARGETS PuntoB
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
