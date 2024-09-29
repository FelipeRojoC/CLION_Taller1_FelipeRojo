//
// Created by felip on 29-09-2024.
//

#ifndef TABLERO_H
#define TABLERO_H

#include "MatrizPocoPoblada.h"
#include "Ficha.h"

class Tablero {
private:
    MatrizPocoPoblada* matriz; //Matriz para almacenar las fichas
    int filas;                 //Numero de filas
    int columnas;             //Numero de columnas

public:
    //Constructor
    Tablero(int filas = 4, int columnas = 3);

    //Destructor
    ~Tablero();

    //Metodo para colocar una ficha en el tablero
    void colocarFicha(Ficha* ficha, int fila, int columna);

    //Metodo para mover una ficha a una nueva posición
    void moverFicha(Ficha* ficha, int nuevaFila, int nuevaColumna);
};

#endif // TABLERO_H
