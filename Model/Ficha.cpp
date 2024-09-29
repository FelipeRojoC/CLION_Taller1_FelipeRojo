//
// Created by felip on 29-09-2024.
//

#include "Ficha.h"

Ficha::Ficha(const std::string &nombreFicha, int puntosSalud, int danio, int defensa, int rango)
    : nombreFicha(nombreFicha), puntosSalud(puntosSalud), danio(danio), defensa(defensa), rango(rango), atacar(false), estaDesmayada(false) {}

//Getters
std::string Ficha::getNombreFicha() const {
    return nombreFicha;
}

int Ficha::getPuntosSalud() const {
    return puntosSalud;
}

int Ficha::getDanio() const {
    return danio;
}

int Ficha::getDefensa() const {
    return defensa;
}

int Ficha::getRango() const {
    return rango;
}

bool Ficha::getAtacar() const {
    return atacar;
}

bool Ficha::getEstaDesmayada() const {
    return estaDesmayada;
}

//Setters
void Ficha::setPuntosSalud(int puntos) {
    this->puntosSalud = puntos;
    if (this->puntosSalud <= 0) {
        desmayar();  // Desmayar si la ficha llega a 0 en vida
    }
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

void Ficha::setAtacar(bool atacar) {
    this->atacar = atacar;
}

//Metodo para desmayar y revivir

void Ficha::desmayar() {
    this->estaDesmayada = true;
    this->atacar = false;  // No puede atacar si esta desmayada
}
void Ficha::revivir() {
    this->estaDesmayada = false;
}
