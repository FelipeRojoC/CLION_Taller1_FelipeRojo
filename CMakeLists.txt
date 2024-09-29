cmake_minimum_required(VERSION 3.29)
project(Taller1_FelipeRojo)

set(CMAKE_CXX_STANDARD 26)

add_executable(Taller1_FelipeRojo main.cpp
        Ficha.cpp
        Ficha.h
        ISistemaJuego.h
        NodoFicha.cpp
        NodoFicha.h
        MatrizPocoPoblada.cpp
        MatrizPocoPoblada.h
        Tablero.cpp
        Tablero.h
        TurnoJugador.cpp
        TurnoJugador.h
        TurnoEnemigo.cpp
        TurnoEnemigo.h
        Estadisticas.cpp
        Estadisticas.h
        SistemaJuego.cpp
        SistemaJuego.h)
