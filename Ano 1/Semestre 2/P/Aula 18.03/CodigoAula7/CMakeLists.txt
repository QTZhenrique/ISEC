cmake_minimum_required(VERSION 3.27)
project(CodigoAula7 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(CodigoAula7
        agenda.c
        agenda.h
        main.c)
