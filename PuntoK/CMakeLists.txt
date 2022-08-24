cmake_minimum_required(VERSION 3.5)

project(PuntoK LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PuntoK main.cpp)

install(TARGETS PuntoK
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
