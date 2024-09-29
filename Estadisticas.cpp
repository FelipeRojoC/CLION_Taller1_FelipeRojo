//
// Created by felip on 29-09-2024.
//

#include "Estadisticas.h"
#include <iostream>

//Constructor
Estadisticas::Estadisticas() : totalDanioCausado(0), totalDanioRecibido(0), fichasDesmayadas(0), turnosJugados(0) {}

//Getters
int Estadisticas::getTotalDanioCausado() const {
    return totalDanioCausado;
}

int Estadisticas::getTotalDanioRecibido() const {
    return totalDanioRecibido;
}

int Estadisticas::getFichasDesmayadas() const {
    return fichasDesmayadas;
}

int Estadisticas::getTurnosJugados() const {
    return turnosJugados;
}

// Setters
void Estadisticas::setTotalDanioCausado(int danio) {
    totalDanioCausado = danio;
}

void Estadisticas::setTotalDanioRecibido(int danio) {
    totalDanioRecibido = danio;
}

void Estadisticas::setFichasDesmayadas(int cantidad) {
    fichasDesmayadas = cantidad;
}

void Estadisticas::setTurnosJugados(int turnos) {
    turnosJugados = turnos;
}

//Metodo para mostrar estadisticas
void Estadisticas::mostrarEstadisticas() const {
    std::cout << "Estadisticas del juego:" << std::endl;
    std::cout << "Total de dano causado: " << totalDanioCausado << std::endl;
    std::cout << "Total de dano recibido: " << totalDanioRecibido << std::endl;
    std::cout << "Fichas desmayadas: " << fichasDesmayadas << std::endl;
    std::cout << "Turnos jugados: " << turnosJugados << std::endl;
}

//Metodo para actualizar estadisticas
void Estadisticas::actualizarEstadisticas(int danioCausado, int danioRecibido, int desmayos) {
    totalDanioCausado += danioCausado;
    totalDanioRecibido += danioRecibido;
    fichasDesmayadas += desmayos;
    turnosJugados += 1;
}
