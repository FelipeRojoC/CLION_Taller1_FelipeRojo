cmake_minimum_required(VERSION 3.29)
project(Taller1_FelipeRojo)

set(CMAKE_CXX_STANDARD 26)

add_executable(Taller1_FelipeRojo main.cpp
        Model/Ficha.cpp
        Model/Ficha.h
        Services/ISistemaJuego.cpp
        Services/ISistemaJuego.h
        Model/NodoFicha.cpp
        Model/NodoFicha.h
        Model/MatrizPocoPoblada.cpp
        Model/MatrizPocoPoblada.h
        Model/Tablero.cpp
        Model/Tablero.h)
