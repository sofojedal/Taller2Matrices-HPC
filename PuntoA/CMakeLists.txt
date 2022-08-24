cmake_minimum_required(VERSION 3.5)

project(PuntoA LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PuntoA main.cpp)

install(TARGETS PuntoA
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
