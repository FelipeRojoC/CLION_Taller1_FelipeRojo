//
// Created by felip on 29-09-2024.
//

#ifndef MATRIZPOCOPOBLADA_H
#define MATRIZPOCOPOBLADA_H

#include "NodoFicha.h"

class MatrizPocoPoblada {
private:
    NodoFicha* a_Fil;  // Puntero al primer nodo de la fila
    NodoFicha* a_Col;  // Puntero al primer nodo de la columna
    int filas;
    int columnas;

public:
    //Constructor
    MatrizPocoPoblada(int nFilas, int nColumnas);

    //Destructor
    ~MatrizPocoPoblada();

    //Metodos
   // bool buscarFicha(int fila, int columna); //TODO
    bool agregarFicha(Ficha* ficha, int fila, int columna);
    bool eliminarFicha(int fila, int columna);


    //Metodo para liberar memoria
    void liberarMemoria();

    NodoFicha* buscarNodo(int fila, int columna);

    Ficha* obtenerFicha(int fila, int columna);
    NodoFicha* buscarFicha(int fila, int columna);
};

#endif // MATRIZPOCOPOBLADA_H
