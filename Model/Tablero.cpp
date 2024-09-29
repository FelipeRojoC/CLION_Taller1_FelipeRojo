//
// Created by felip on 29-09-2024.
//

#include "Tablero.h"
#include <iostream>

Tablero::Tablero(int filas, int columnas) : filas(filas), columnas(columnas), matriz(filas, columnas) {
    // Aqui puedes inicializar otras estructuras si es necesario
}

void Tablero::colocarFicha(Ficha* ficha, int fila, int columna) {
    // Logica para colocar la ficha en la matriz
    if (matriz.agregarFicha(ficha, fila, columna)) {
        std::cout << "Ficha colocada en (" << fila << ", " << columna << ")." << std::endl;
    } else {
        std::cout << "No se pudo colocar la ficha en (" << fila << ", " << columna << ")." << std::endl;
    }
}

void Tablero::moverFicha(Ficha* ficha, int nuevaFila, int nuevaColumna) {
    // Logica para mover la ficha en la matriz
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
