cmake_minimum_required(VERSION 3.17)
project(Oving6)

set(CMAKE_CXX_STANDARD 14)

find_package(Boost 1.54.0 COMPONENTS system REQUIRED)
include_directories(${Boost_INCLUDE_DIR})


add_executable(oppgave1 oppgave1.cpp)
add_executable(oppgave2 oppgave2.cpp oppgave2.h)