cmake_minimum_required(VERSION 3.5)

project(PuntoI LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PuntoI main.cpp)

install(TARGETS PuntoI
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
