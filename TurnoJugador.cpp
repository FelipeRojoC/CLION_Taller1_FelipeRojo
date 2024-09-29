//
// Created by felip on 29-09-2024.
//

#include "TurnoJugador.h"

TurnoJugador::TurnoJugador(Tablero& tablero) : tablero(tablero) {}

void TurnoJugador::prepararTurno() {
    std::cout << "Turno del jugador. Prepare su accion." << std::endl;
}

void TurnoJugador::seleccionarAtaque(Ficha* ficha, const std::string& tipoAtaque) {
    if (ficha == nullptr) {
        std::cerr << "No se ha seleccionado ninguna ficha." << std::endl;
        return;
    }

    std::cout << "Seleccionaste " << ficha->getNombreFicha() << " para atacar." << std::endl;

    if (tipoAtaque == "fisico") {
        std::cout << ficha->getNombreFicha() << " realiza un ataque fisico." << std::endl;
    } else if (tipoAtaque == "magico") {
        std::cout << ficha->getNombreFicha() << " realiza un ataque magico." << std::endl;
    } else {
        std::cerr << "Tipo de ataque desconocido." << std::endl;
    }
}

void TurnoJugador::avanzarFaseCombate() {
    std::cout << "Fase de combate avanzando." << std::endl;
}
