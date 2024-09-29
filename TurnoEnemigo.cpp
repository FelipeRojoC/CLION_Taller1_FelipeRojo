#include "TurnoEnemigo.h"
#include "MatrizPocoPoblada.h"
#include "Ficha.h"
#include <iostream>

// Constructor que inicializa el tablero del enemigo
TurnoEnemigo::TurnoEnemigo(Tablero* tablero, MatrizPocoPoblada* matriz) {
    this->tablero = tablero;
    this->matriz = matriz;
}


// Método para ejecutar los ataques del enemigo
void TurnoEnemigo::ejecutarAtaques() {
    std::cout << "Ejecutando ataques del enemigo..." << std::endl;

    for (int i = 0; i < tablero->getFilas(); ++i) {
        for (int j = 0; j < tablero->getColumnas(); ++j) {
            Ficha* ficha = tablero->getFicha(i, j);
            if (ficha && ficha->getNombreFicha() == "Enemigo") {
                int filaObjetivo = i + ficha->getRango();

                // Verificar si la ficha puede atacar
                if (ficha->getAtacar()) {
                    // Buscar la ficha objetivo en el tablero del jugador
                    bool nodoObjetivo = matriz->buscarFicha(filaObjetivo, j);

                    if (nodoObjetivo = nullptr) {
                        Ficha* fichaObjetivo = nodoObjetivo->getFicha();

                        // Calcular el daño y aplicarlo
                        int dano = ficha->getAtacar() - fichaObjetivo->getDefensa();
                        if (dano > 0) {
                            fichaObjetivo->setPuntosSalud(fichaObjetivo->getPuntosSalud() - dano);
                            std::cout << "La ficha " << ficha->getNombreFicha()
                                      << " atacó a " << fichaObjetivo->getNombreFicha()
                                      << " causando " << dano << " de daño." << std::endl;

                            // Verificar si la ficha objetivo se desmaya
                            if (fichaObjetivo->getPuntosSalud() <= 0) {
                                fichaObjetivo->setPuntosSalud(0); // Cambiar a 0 para indicar desmayo
                                std::cout << fichaObjetivo->getNombreFicha() << " se ha desmayado." << std::endl;
                            }
                        } else {
                            std::cout << "La defensa de " << fichaObjetivo->getNombreFicha()
                                      << " fue suficiente para resistir el ataque." << std::endl;
                        }
                    } else {
                        std::cout << "No hay objetivo en la posición (" << filaObjetivo
                                  << ", " << j << ")." << std::endl;
                    }
                }
            }
        }
    }
}
