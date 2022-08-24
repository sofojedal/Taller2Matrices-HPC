cmake_minimum_required(VERSION 3.5)

project(PuntoC LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PuntoC main.cpp)

install(TARGETS PuntoC
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
