//
// Created by felip on 29-09-2024.
//

#include "Ficha.h"

Ficha::Ficha(const std::string& nombre, int hp, int atk, int def, int rango, int fila, int columna): nombreFicha(nombre), puntosSalud(hp), danio(atk), defensa(def), rango(rango), fila(fila), columna(columna){}

std::string Ficha::getNombreFicha() const {
    return nombreFicha;
}

int Ficha::getPuntosSalud() const {
    return puntosSalud;
}

int Ficha::getDefensa() const {
    return defensa;
}

int Ficha::getRango() const {
    return rango;
}

int Ficha::getFila() const {
    return fila;
}

int Ficha::getColumna() const {
    return columna;
}

void Ficha::setPuntosSalud(int puntos) {
    puntosSalud = puntos;
}

void Ficha::setDanio(int danio) {
    this->danio = danio;
}

void Ficha::setDefensa(int defensa) {
    this->defensa = defensa;
}

void Ficha::setRango(int rango) {
    this->rango = rango;
}

void Ficha::setFila(int fila) {
    this->fila = fila;
}

void Ficha::setColumna(int columna) {
    this->columna = columna;
}

bool getAtacar() {
    bool atacar;
    return atacar;
}






