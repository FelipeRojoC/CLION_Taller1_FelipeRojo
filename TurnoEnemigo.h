//
// Created by felip on 29-09-2024.
//

#ifndef TURNO_ENEMIGO_H
#define TURNO_ENEMIGO_H

#include "Tablero.h"

class TurnoEnemigo {
private:
    Tablero* tablero; //Puntero al tablero del enemigo

    public:
        TurnoEnemigo(Tablero* tablero, MatrizPocoPoblada* matriz); // Declaración del constructor
        void ejecutarAtaques();
    private:
        Tablero* tablero;
        MatrizPocoPoblada* matriz; // Asegúrate de tener esta línea
};



#endif // TURNO_ENEMIGO_H
