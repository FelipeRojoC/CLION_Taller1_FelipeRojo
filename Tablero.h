//
// Created by felip on 29-09-2024.
//

#ifndef TABLERO_H
#define TABLERO_H

#include "MatrizPocoPoblada.h"

class Tablero {
private:
    int filas;
    int columnas;
    MatrizPocoPoblada matriz;

public:
    Tablero(int filas, int columnas);
    void colocarFicha(Ficha* ficha, int fila, int columna);
    void moverFicha(Ficha* ficha, int nuevaFila, int nuevaColumna);
    Ficha *getFicha(int fila, int columna);
    MatrizPocoPoblada* Tablero::getMatriz() {
        return &matriz;
    }

    int Tablero::getFilas() const {
        return filas; //Devuelve el número de filas
    }

    int Tablero::getColumnas() const {
        return columnas; //Devuelve el número de columnas
    }


};

#endif // TABLERO_H
