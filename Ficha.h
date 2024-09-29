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
    int fila;
    int columna;

public:
    Ficha(const std::string& nombre, int hp, int atk, int def, int rango, int fila, int columna);
    std::string getNombreFicha() const;
    int getPuntosSalud() const;
    int getDefensa() const;
    int getRango() const;
    int getFila() const; //Metodo para obtener la fila
    int getColumna() const; //Metodo para obtener la columna
    void setPuntosSalud(int puntos);
    void setDanio(int danio);
    void setDefensa(int defensa);
    void setRango(int rango);
    void setFila(int fila); //Metodo para establecer la fila
    void setColumna(int columna); //Metodo para establecer la columna
    bool getAtacar() const {
        bool atacar;
        return atacar; 
    }

};

#endif // FICHA_H
