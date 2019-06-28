cmake_minimum_required(VERSION 3.14)
project(restaurante)

set(CMAKE_CXX_STANDARD 14)

add_executable(restaurante main.cpp mesas.cpp mesas.h Cliente.cpp Cliente.h Restaurante.cpp Restaurante.h)