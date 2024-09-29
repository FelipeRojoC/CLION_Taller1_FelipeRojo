//
// Created by felip on 29-09-2024.
//

#include "TurnoEnemigo.h"
#include "MatrizPocoPoblada.h"
#include "Ficha.h"
#include <iostream>

//Constructor que inicializa el tablero del enemigo
TurnoEnemigo::TurnoEnemigo(Tablero* tablero) {
    this->tablero = tablero;
}

//Metodo para ejecutar los ataques del enemigo
void TurnoEnemigo::ejecutarAtaques() {
    std::cout << "El enemigo esta ejecutando sus ataques." << std::endl;

    //Obtener la matriz del tablero del enemigo
    MatrizPocoPoblada* matriz = tablero->getMatriz();

    //Recorrer la matriz del tablero
    for (int fila = 0; fila < tablero->getFilas(); ++fila) {
        for (int columna = 0; columna < tablero->getColumnas(); ++columna) {
            NodoFicha* nodo = matriz->buscarFicha(fila, columna);

            // Si hay una ficha en esta posicion
            if (nodo != nullptr) {
                Ficha* fichaEnemiga = nodo->getFicha();

                //Verificar si la ficha puede atacar
                if (fichaEnemiga->getAtacar()) {
                    //Buscar la ficha objetivo en el tablero del jugador
                    int filaObjetivo = fila + fichaEnemiga->getRango();  // Usar el rango para definir la distancia
                    NodoFicha* nodoObjetivo = matriz->buscarFicha(filaObjetivo, columna);

                    if (nodoObjetivo != nullptr) {
                        Ficha* fichaObjetivo = nodoObjetivo->getFicha();

                        //Calcular el dano y aplicarlo
                        int dano = fichaEnemiga->getAtacar() - fichaObjetivo->getDefensa();
                        if (dano > 0) {
                            fichaObjetivo->setPuntosSalud(fichaObjetivo->getPuntosSalud() - dano);
                            std::cout << "La ficha " << fichaEnemiga->getNombreFicha()
                                      << " ataco a " << fichaObjetivo->getNombreFicha()
                                      << " causando " << dano << " de dano." << std::endl;

                            //Verificar si la ficha objetivo se desmaya
                            if (fichaObjetivo->getPuntosSalud() <= 0) {
                                fichaObjetivo->setPuntosSalud(true);
                                std::cout << fichaObjetivo->getNombreFicha() << " se ha desmayado." << std::endl;
                            }
                        } else {
                            std::cout << "La defensa de " << fichaObjetivo->getNombreFicha()
                                      << " fue suficiente para resistir el ataque." << std::endl;
                        }
                    } else {
                        std::cout << "No hay objetivo en la posicion (" << filaObjetivo
                                  << ", " << columna << ")." << std::endl;
                    }
                }
            }
        }
    }
}
