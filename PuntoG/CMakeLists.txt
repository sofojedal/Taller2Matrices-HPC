cmake_minimum_required(VERSION 3.5)

project(PuntoG LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PuntoG main.cpp)

install(TARGETS PuntoG
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
