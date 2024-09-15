cmake_minimum_required(VERSION 3.16)

project(Practica-2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Practica-2
    Problema-4.cpp
    Problema-6.cpp
    Problema-8.cpp
    Problema-10.cpp
    Problema-12.cpp
    Probblema-16.cpp
    Problema-14.cpp
    Problema-2.cpp)

include(GNUInstallDirs)
install(TARGETS Practica-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
