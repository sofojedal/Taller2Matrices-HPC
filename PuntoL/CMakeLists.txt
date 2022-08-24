cmake_minimum_required(VERSION 3.5)

project(PuntoL LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PuntoL main.cpp)

install(TARGETS PuntoL
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
