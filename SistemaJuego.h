//
// Created by felip on 29-09-2024.
//

#ifndef SISTEMA_JUEGO_H
#define SISTEMA_JUEGO_H

#include "Tablero.h"
#include "TurnoJugador.h"
#include "TurnoEnemigo.h"
#include "Estadisticas.h"
#include <string>

class SistemaJuego {
private:
    Tablero* tableroJugador;
    Tablero* tableroEnemigo;
    TurnoJugador* turnoJugador;
    TurnoEnemigo* turnoEnemigo;
    Estadisticas estadisticas;

public:
    SistemaJuego();  //Constructor
    ~SistemaJuego(); //Destructor

    void iniciarJuego();
    void cargarMapa(const std::string& nombreArchivo);
    void cambiarPosicionFichas();
    void mostrarMenuEstadisticas();
    void finalizarJuego();
};

#endif // SISTEMA_JUEGO_H
