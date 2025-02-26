//
// Created by zDefcon on 25/02/2025.
//
#include <iostream>

int main() {
    // code: Convertir libras y onzas a kilogramos.
    double libras = 0, onzas = 0, libKG = 0, onzKG = 0, totalKG = 0;
    do {
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "Digite las libras: "; std::cin >> libras;
        std::cout << "Digite las onzas: "; std::cin >> onzas;
        std::cout << "-----------------------------------" << std::endl;

        if (libras < 0 || onzas < 0) {
            std::cout << "Porfavor, Digite valores positivos" << std::endl;
        }
        else {
            std::cout << "Datos Ingresados Correctamente" << std::endl;
        }
    }while (libras < 0 || onzas < 0);

    std::cout << "-----------------------------------" << std::endl;
    libKG = libras * 0.454;
    onzKG = onzas * 0.0283;

    totalKG = (libKG + onzKG);

    std::cout << libras << ": libras son: " << libKG << " kg" << std::endl;
    std::cout << onzas << ": Onzas son: " << onzKG << " kg" << std::endl;
    std::cout << "-----------------------------------" << std::endl;

    std::cout << "El total de " << libras << " con " << onzas << " es: " << totalKG << " kg" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    system("pause");
    return 0;
}
