//
// Created by felip on 29-09-2024.
//
#ifndef TURNOJUGADOR_H
#define TURNOJUGADOR_H

#include "Tablero.h"
#include "Ficha.h"
#include <iostream>

class TurnoJugador {
private:
    Tablero& tablero; //Referencia al tablero del juego

public:
    TurnoJugador(Tablero& tablero);
    void prepararTurno();
    void seleccionarAtaque(Ficha* ficha, const std::string& tipoAtaque);
    void avanzarFaseCombate();
};

#endif // TURNOJUGADOR_H
