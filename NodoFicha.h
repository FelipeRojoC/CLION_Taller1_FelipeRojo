//
// Created by felip on 29-09-2024.
//

#ifndef NODOFICHA_H
#define NODOFICHA_H

#include "Ficha.h"

class NodoFicha {
private:
    Ficha* ficha;
    NodoFicha* left;
    NodoFicha* up;
    int fila;
    int columna;

public:
    //Constructor
    NodoFicha(Ficha* ficha, int posicionFila, int posicionColumna);

    //Destructor
    ~NodoFicha();

    //Metodos para obtener la ficha
    Ficha* getFicha() const;

    //Metodos para obtener posiciones
    int getFila() const;
    int getColumna() const;

    //Metodos para los punteros de los nodos vecinos
    NodoFicha* getLeft() const;
    void setLeft(NodoFicha* nodo);

    NodoFicha* getUp() const;
    void setUp(NodoFicha* nodo);
};

#endif // NODOFICHA_H
