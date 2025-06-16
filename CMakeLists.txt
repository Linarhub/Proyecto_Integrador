cmake_minimum_required(VERSION 3.31)
project(Proyecto)

set(CMAKE_CXX_STANDARD 20)

add_executable(Proyecto main.cpp
        video.cpp
        video.h
        serie.cpp
        serie.h
        pelicula.cpp
        pelicula.h)
