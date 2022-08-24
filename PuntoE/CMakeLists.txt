cmake_minimum_required(VERSION 3.5)

project(PuntoE LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PuntoE main.cpp)

install(TARGETS PuntoE
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
