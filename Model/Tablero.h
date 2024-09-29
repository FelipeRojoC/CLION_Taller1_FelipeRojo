//
// Created by felip on 29-09-2024.
//

#include "Tablero.h"
#include <iostream>
#include <stdexcept>

//Constructor
Tablero::Tablero(int filas, int columnas) : filas(filas), columnas(columnas) {
    matriz = new MatrizPocoPoblada(filas, columnas);
}

//Destructor
Tablero::~Tablero() {
    delete matriz;
}

//Metodo para colocar una ficha en el tablero
void Tablero::colocarFicha(Ficha* ficha, int fila, int columna) {
    if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) {
        throw std::out_of_range("Posicion fuera de los límites del tablero.");
    }
    if (!matriz->agregarFicha(ficha, fila, columna)) {
        std::cout << "No se pudo colocar la ficha en la posicion (" << fila << ", " << columna << ")." << std::endl;
    }
}

//Metodo para mover una ficha a una nueva posición
void Tablero::moverFicha(Ficha* ficha, int nuevaFila, int nuevaColumna) {
    if (nuevaFila < 0 || nuevaFila >= filas || nuevaColumna < 0 || nuevaColumna >= columnas) {
        throw std::out_of_range("Nueva posicion fuera de los limites del tablero.");
    }
    if (matriz->eliminarFicha(ficha->getFila(), ficha->getColumna())) {
        matriz->agregarFicha(ficha, nuevaFila, nuevaColumna);
    } else {
        std::cout << "No se pudo mover la ficha a la nueva posicion." << std::endl;
    }
}
