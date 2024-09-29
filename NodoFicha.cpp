//
// Created by felip on 29-09-2024.
//

#include "NodoFicha.h"

//Constructor
NodoFicha::NodoFicha(Ficha* ficha, int posicionFila, int posicionColumna): ficha(ficha), fila(posicionFila), columna(posicionColumna), left(nullptr), up(nullptr) {}

//Destructor
NodoFicha::~NodoFicha() {
    delete ficha;
}

//Metodos para obtener la ficha
Ficha* NodoFicha::getFicha() const {
    return ficha;
}

//Metodos para obtener posiciones
int NodoFicha::getFila() const {
    return fila;
}

int NodoFicha::getColumna() const {
    return columna;
}

//Metodos para los punteros de los nodos vecinos
NodoFicha* NodoFicha::getLeft() const {
    return left;
}

void NodoFicha::setLeft(NodoFicha* nodo) {
    left = nodo;
}

NodoFicha* NodoFicha::getUp() const {
    return up;
}

void NodoFicha::setUp(NodoFicha* nodo) {
    up = nodo;
}
