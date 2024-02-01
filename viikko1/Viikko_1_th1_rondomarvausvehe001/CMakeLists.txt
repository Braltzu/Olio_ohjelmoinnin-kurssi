cmake_minimum_required(VERSION 3.5)

project(Viikko_1_th1_rondomarvausvehe001 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Viikko_1_th1_rondomarvausvehe001 main.cpp)

include(GNUInstallDirs)
install(TARGETS Viikko_1_th1_rondomarvausvehe001
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
