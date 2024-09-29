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
    //Constructor
    TurnoEnemigo(Tablero* tablero);

    //Metodo para ejecutar ataques automaticos del enemigo
    void ejecutarAtaques();
};

#endif // TURNO_ENEMIGO_H
