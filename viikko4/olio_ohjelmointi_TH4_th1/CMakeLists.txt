cmake_minimum_required(VERSION 3.5)

project(olio_ohjelmointi_TH4_th1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(olio_ohjelmointi_TH4_th1 main.cpp
    asunto.cpp katutaso.cpp kerros.cpp kerrostalo.cpp

    asunto.h katutaso.h kerros.h kerrostalo.h
)

include(GNUInstallDirs)
install(TARGETS olio_ohjelmointi_TH4_th1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
