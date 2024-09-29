cmake_minimum_required(VERSION 3.29)
project(Taller1_FelipeRojo)

set(CMAKE_CXX_STANDARD 26)

add_executable(Taller1_FelipeRojo main.cpp
        Tablero.cpp
        MatrizPocoPoblada.cpp
        NodoFicha.cpp
        Ficha.cpp
        TurnoJugador.cpp
        TurnoEnemigo.cpp
        Estadisticas.cpp
        SistemaJuego.cpp
        Tablero.h
        MatrizPocoPoblada.h
        NodoFicha.h
        Ficha.h
        TurnoJugador.h
        TurnoEnemigo.h
        Estadisticas.h
        SistemaJuego.h
        ISistemaJuego.h)