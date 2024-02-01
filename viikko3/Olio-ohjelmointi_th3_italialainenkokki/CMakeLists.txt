cmake_minimum_required(VERSION 3.5)

project(Olio-ohjelmointi_th3_italialainenkokki LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Olio-ohjelmointi_th3_italialainenkokki main.cpp
    kokki.h)

include(GNUInstallDirs)
install(TARGETS Olio-ohjelmointi_th3_italialainenkokki
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
