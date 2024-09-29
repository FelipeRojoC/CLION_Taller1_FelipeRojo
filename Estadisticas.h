//
// Created by felip on 29-09-2024.
//

#ifndef ESTADISTICAS_H
#define ESTADISTICAS_H

#include <string>

class Estadisticas {
private:
    int totalDanioCausado;
    int totalDanioRecibido;
    int fichasDesmayadas;
    int turnosJugados;

public:
    //Constructor
    Estadisticas();

    //Getters
    int getTotalDanioCausado() const;
    int getTotalDanioRecibido() const;
    int getFichasDesmayadas() const;
    int getTurnosJugados() const;

    //Setters
    void setTotalDanioCausado(int danio);
    void setTotalDanioRecibido(int danio);
    void setFichasDesmayadas(int cantidad);
    void setTurnosJugados(int turnos);

    //Metodos para mostrar y actualizar estadisticas
    void mostrarEstadisticas() const;
    void actualizarEstadisticas(int danioCausado, int danioRecibido, int desmayos);
};

#endif // ESTADISTICAS_H
