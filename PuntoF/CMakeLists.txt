cmake_minimum_required(VERSION 3.5)

project(PuntoF LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PuntoF main.cpp)

install(TARGETS PuntoF
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
