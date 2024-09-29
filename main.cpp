#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void leerFichas(const std::string& nombreArchivo) {
    std::ifstream archivoFichas(nombreArchivo);
    if (!archivoFichas.is_open()) {
        std::cerr << "Error al abrir el archivo de fichas: " << nombreArchivo << std::endl;
        return;
    }

    std::string linea;
    while (std::getline(archivoFichas, linea)) {
        // Aquí puedes procesar la línea leída
        std::cout << "Ficha leida: " << linea << std::endl;
    }

    archivoFichas.close();
}

void leerEscenarios(const std::string& nombreArchivo) {
    std::ifstream archivoEscenarios(nombreArchivo);
    if (!archivoEscenarios.is_open()) {
        std::cerr << "Error al abrir el archivo de escenarios: " << nombreArchivo << std::endl;
        return;
    }

    std::string linea;
    while (std::getline(archivoEscenarios, linea)) {
        //Aquí puedes procesar la línea leída
        std::cout << "Escenario leido: " << linea << std::endl;
    }

    archivoEscenarios.close();
}

int main() {
    std::string archivoFichas = "fichas.txt";
    std::string archivoEscenarios = "escenarios.txt";

    leerFichas(archivoFichas);
    leerEscenarios(archivoEscenarios);

    return 0;
}
