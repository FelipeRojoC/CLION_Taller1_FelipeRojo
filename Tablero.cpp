//
// Created by felip on 29-09-2024.
//

#include "Tablero.h"
#include <iostream>

//Constructor
Tablero::Tablero(int filas, int columnas) : filas(filas), columnas(columnas), matriz(filas, columnas) {}
int Tablero::getFilas() const {
    return filas;
}

int Tablero::getColumnas() const {
    return columnas;
}
//Metodo para colocar una ficha en el tablero
void Tablero::colocarFicha(Ficha* ficha, int fila, int columna) {
    if (matriz.agregarFicha(ficha, fila, columna)) {
        std::cout << "Ficha colocada en (" << fila << ", " << columna << ")." << std::endl;
    } else {
        std::cout << "No se pudo colocar la ficha en (" << fila << ", " << columna << ")." << std::endl;
    }
}

//Metodo para mover una ficha en el tablero
void Tablero::moverFicha(Ficha* ficha, int nuevaFila, int nuevaColumna) {
    if (matriz.eliminarFicha(ficha->getFila(), ficha->getColumna())) {
        if (matriz.agregarFicha(ficha, nuevaFila, nuevaColumna)) {
            std::cout << "Ficha movida a (" << nuevaFila << ", " << nuevaColumna << ")." << std::endl;
        } else {
            std::cout << "No se pudo mover la ficha a (" << nuevaFila << ", " << nuevaColumna << ")." << std::endl;
        }
    } else {
        std::cout << "No se pudo eliminar la ficha de la posicion anterior." << std::endl;
    }
}

//Metodo para obtener una ficha en una posición específica
Ficha* Tablero::getFicha(int fila, int columna) {
    return matriz.obtenerFicha(fila, columna);
}
