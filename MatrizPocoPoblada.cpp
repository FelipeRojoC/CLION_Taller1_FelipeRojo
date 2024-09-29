//
// Created by felip on 29-09-2024.
//

#include "MatrizPocoPoblada.h"
#include <iostream>

//Constructor
MatrizPocoPoblada::MatrizPocoPoblada(int nFilas, int nColumnas) : filas(nFilas), columnas(nColumnas), a_Fil(nullptr), a_Col(nullptr) {}

//Destructor
MatrizPocoPoblada::~MatrizPocoPoblada() {
    liberarMemoria();
}

//Metodo para liberar la memoria de la estructura
void MatrizPocoPoblada::liberarMemoria() {
    NodoFicha* current = a_Fil;
    while (current != nullptr) {
        NodoFicha* next = current->getLeft();  //Nos movemos a la izquierda
        delete current;  //Eliminamos el nodo actual
        current = next;  //Pasamos al siguiente nodo
    }
    a_Fil = nullptr;
    a_Col = nullptr;
}
Ficha* MatrizPocoPoblada::obtenerFicha(int fila, int columna) {
    NodoFicha* nodo = buscarNodo(fila, columna);
    return nodo ? nodo->getFicha() : nullptr;
}
//Metodo para buscar una ficha en la matriz
NodoFicha* MatrizPocoPoblada::buscarFicha(int fila, int columna) {
    // Lógica para buscar la ficha
NodoFicha* current = nullptr; // TODO

    // Lógica para iterar sobre la matriz
    while (current != nullptr) {
        if (current->getFila() == fila && current->getColumna() == columna) {
            return current; // Retorna el nodo encontrado
        }
        current = current->getSiguiente(); // O como accedas al siguiente nodo
    }

    return nullptr; // Retorna nullptr si no se encuentra
}


//Metodo para agregar una ficha en la matriz
bool MatrizPocoPoblada::agregarFicha(Ficha* ficha, int fila, int columna) {
    if (fila >= filas || columna >= columnas || fila < 0 || columna < 0) {
        std::cout << "Posición fuera de los límites." << std::endl;
        return false;
    }

    NodoFicha* nuevoNodo = new NodoFicha(ficha, fila, columna);

    if (a_Fil == nullptr) {  //Si es el primer nodo en la matriz
        a_Fil = nuevoNodo;
        a_Col = nuevoNodo;
    } else {
        NodoFicha* current = a_Fil;
        while (current->getLeft() != nullptr) {
            current = current->getLeft();
        }
        current->setLeft(nuevoNodo);  //Insertar el nodo en la posicion indicada
    }
    return true;
}

//Metodo para eliminar una ficha de la matriz
bool MatrizPocoPoblada::eliminarFicha(int fila, int columna) {
    NodoFicha* current = a_Fil;
    NodoFicha* prev = nullptr;

    while (current != nullptr) {
        if (current->getFila() == fila && current->getColumna() == columna) {
            if (prev == nullptr) {  //Si es el primer nodo de la lista
                a_Fil = current->getLeft();
            } else {
                prev->setLeft(current->getLeft());
            }
            delete current;
            return true;
        }
        prev = current;
        current = current->getLeft();
    }
    return false;
}
