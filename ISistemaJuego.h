//
// Created by felip on 29-09-2024.
//

#ifndef ISISTEMAJUEGO_H
#define ISISTEMAJUEGO_H

class ISistemaJuego {
public:
    virtual void iniciarJuego() = 0;
    virtual void cargarMapa() = 0;
    virtual void cambiarPosicionFichas() = 0;
    virtual void mostrarMenuEstadisticas() = 0;
};

#endif // ISISTEMAJUEGO_H
