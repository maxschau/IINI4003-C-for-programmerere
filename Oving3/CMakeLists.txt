cmake_minimum_required(VERSION 3.17)
project(Oving3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(oppgave2 oppgave2.cpp oppgave2.h circle.cpp circle.h Commodity.cpp Commodity.h oppgave4.cpp oppgave4.h)
add_executable(commoditytest Commodity.cpp Commodity.h Commodity_test.cpp Commodity_test.h)
add_executable(oppgave4 oppgave4.cpp oppgave4.h)