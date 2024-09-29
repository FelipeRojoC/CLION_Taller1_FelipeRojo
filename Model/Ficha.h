//
// Created by felip on 29-09-2024.
//

#ifndef FICHA_H
#define FICHA_H

#include <string>

class Ficha {
private:
    std::string nombreFicha;
    int puntosSalud;
    int danio;
    int defensa;
    int rango;
    bool atacar;
    bool estaDesmayada;
public:
    Ficha(const std::string &nombreFicha, int puntosSalud, int danio, int defensa, int rango);

    // Getters
    std::string getNombreFicha() const;
    int getPuntosSalud() const;
    int getDanio() const;
    int getDefensa() const;
    int getRango() const;
    bool getAtacar() const;
    bool getEstaDesmayada() const;

    // Setters
    void setPuntosSalud(int puntos);
    void setDanio(int danio);
    void setDefensa(int defensa);
    void setRango(int rango);
    void setAtacar(bool atacar);

    //Metodos
    void desmayar();
    void revivir();
};

#endif
