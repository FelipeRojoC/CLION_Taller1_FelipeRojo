#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Ficha.h"
#include "SistemaJuego.h"

std::vector<Ficha*> leerFichas(const std::string& archivoFichas) {
    std::vector<Ficha*> fichas;
    std::ifstream archivo(archivoFichas);

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo de fichas: " << archivoFichas << std::endl;
        return fichas;
    }

    std::string nombre;
    int hp, atk, def, rango;
    while (archivo >> nombre >> hp >> atk >> def >> rango) {
        fichas.push_back(new Ficha(nombre, hp, atk, def, rango, -1, -1));  // -1 como posicion por defecto
    }

    archivo.close();
    return fichas;
}

std::vector<std::string> leerEscenarios(const std::string& archivoEscenarios) {
    std::vector<std::string> escenarios;
    std::ifstream archivo(archivoEscenarios);

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo de escenarios: " << archivoEscenarios << std::endl;
        return escenarios;
    }

    std::string escenario;
    while (std::getline(archivo, escenario)) {
        escenarios.push_back(escenario);
    }

    archivo.close();
    return escenarios;
}

int main() {
    std::string archivoFichas = "fichas.txt";
    std::string archivoEscenarios = "escenarios.txt";

    // Lectura de archivos
    std::vector<Ficha*> fichas = leerFichas(archivoFichas);
    std::vector<std::string> escenarios = leerEscenarios(archivoEscenarios);

    if (fichas.empty() || escenarios.empty()) {
        std::cerr << "Error: No se pudieron cargar las fichas o escenarios." << std::endl;
        return 1;
    }

    //Inicializacion del sistema de juego
    SistemaJuego sistemaJuego;
    sistemaJuego.iniciarJuego();

    //Ejemplo de uso del sistema de juego
    sistemaJuego.cambiarPosicionFichas();
    sistemaJuego.finalizarJuego();

    //Liberar memoria de las fichas
    for (Ficha* ficha : fichas) {
        delete ficha;
    }

    return 0;
}
