//
// Created by felip on 29-09-2024.
//

#include "SistemaJuego.h"
#include "Tablero.h"
#include <iostream>
#include <fstream>
#include <sstream>

//Constructor
SistemaJuego::SistemaJuego() {
    tableroJugador = new Tablero(4, 3);  //Tablero del jugador
    tableroEnemigo = new Tablero(4, 3);  //Tablero del enemigo
    turnoJugador = new TurnoJugador(*tableroJugador);
    turnoEnemigo = new TurnoEnemigo(tableroEnemigo);
}

//Destructor
SistemaJuego::~SistemaJuego() {
    delete tableroJugador;
    delete tableroEnemigo;
    delete turnoJugador;
    delete turnoEnemigo;
}

//Metodo para iniciar el juego
void SistemaJuego::iniciarJuego() {
    std::cout << "El juego ha comenzado." << std::endl;
}

//Metodo para cargar el mapa inicial
void SistemaJuego::cargarMapa(const std::string& nombreArchivo) {
    std::cout << "Cargando mapa desde " << nombreArchivo << "..." << std::endl;
    std::ifstream archivo(nombreArchivo);
    std::string linea;

    if (archivo.is_open()) {
        while (std::getline(archivo, linea)) {
            std::istringstream stream(linea);
            std::string nombre;
            int hp, atk, def, rango, fila, columna;

            char delim = ',';
            std::getline(stream, nombre, delim);
            stream >> hp >> delim >> atk >> delim >> def >> delim >> rango >> delim >> fila >> delim >> columna;

            //Colocar la ficha en el tablero del jugador
            tableroJugador->colocarFicha(new Ficha(nombre, hp, atk, def, rango, fila, columna), fila, columna);
        }
        archivo.close();
    } else {
        std::cout << "No se pudo abrir el archivo." << std::endl;
    }
}

//Metodo para cambiar la posición de fichas
void SistemaJuego::cambiarPosicionFichas() {
    std::cout << "Cambiando posiciones de fichas..." << std::endl;
    int filaOrigen, colOrigen, filaDestino, colDestino;

    std::cout << "Ingrese la fila y columna de la ficha que desea mover (fila columna): ";
    std::cin >> filaOrigen >> colOrigen;

    std::cout << "Ingrese la nueva fila y columna donde desea mover la ficha (fila columna): ";
    std::cin >> filaDestino >> colDestino;

    Ficha* ficha = tableroJugador->getFicha(filaOrigen, colOrigen); // Método que deberías implementar en Tablero
    if (ficha) {
        tableroJugador->moverFicha(ficha, filaDestino, colDestino);
    } else {
        std::cout << "No hay ficha en la posicion especificada." << std::endl;
    }
}

//Metodo para mostrar el menú de estadísticas
void SistemaJuego::mostrarMenuEstadisticas() {
    std::cout << "Estadisticas del juego:" << std::endl;
    estadisticas.mostrarEstadisticas();
}

//Metodo para finalizar el juego
void SistemaJuego::finalizarJuego() {
    std::cout << "El juego ha terminado." << std::endl;
    mostrarMenuEstadisticas();
}
