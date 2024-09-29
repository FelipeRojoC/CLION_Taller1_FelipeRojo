cmake_minimum_required(VERSION 3.29)
project(Taller1_FelipeRojo)

set(CMAKE_CXX_STANDARD 26)

add_executable(Taller1_FelipeRojo Model/main.cpp
        Model/Ficha.cpp
        Model/Ficha.h
        Model/ISistemaJuego.h
        Model/NodoFicha.cpp
        Model/NodoFicha.h
        Model/MatrizPocoPoblada.cpp
        Model/MatrizPocoPoblada.h
        Model/Tablero.cpp
        Model/Tablero.h
        Model/TurnoJugador.cpp
        Model/TurnoJugador.h
        Model/TurnoEnemigo.cpp
        Model/TurnoEnemigo.h
        Model/Estadisticas.cpp
        Model/Estadisticas.h
        Model/SistemaJuego.cpp
        Model/SistemaJuego.h)
