//
// Created by zDefcon on 24/02/2025.
//

#include <iostream>
#include <conio.h>

int main() {
    // code: Introducir las temperaturas exteriores
    // 4:00AM, 8:00AM, 12:00PM, 4:00PM, 8:00PM y 12:00AM
    // Calcular la temperatura media, la temperatura más alta y la temperatura más baja
    int horas = 24, temperaturaExterior;
    float count[6];
    float media, alta, baja;

    for (int i = 0; i <= horas; i++) {

        if (i == 4) {
            std::cout << "Introduce la Temperatura exterior a las 4:AM" << std::endl;
            std::cin >> temperaturaExterior;
            count[0] = temperaturaExterior;
        }
        else if (i == 8) {
            std::cout << "Introduce la Temperatura exterior a las 8:AM"<< std::endl;
            std::cin >> temperaturaExterior;
            count[1] = temperaturaExterior;
        }
        else if (i == 12) {
            std::cout << "Introduce la Temperatura exterior a las 12:PM" << std::endl;
            std::cin >> temperaturaExterior;
            count[2] = temperaturaExterior;
        }
        else if (i == 16) {
            std::cout << "Introduce la Temperatura exterior a las 4:PM" << std::endl;
            std::cin >> temperaturaExterior;
            count[3] = temperaturaExterior;
        }
        else if (i == 20) {
            std::cout << "Introduce la Temperatura exterior a las 8:PM" << std::endl;
            std::cin >> temperaturaExterior;
            count[4] = temperaturaExterior;
        }
        else if (i == 24) {
            std::cout << "Introduce la Temperatura exterior a las 12:AM" << std::endl;
            std::cin >> temperaturaExterior;
            count[5] = temperaturaExterior;
        }

    }
    // Calcular la temperatura media
    media = (count[0] + count[1] + count[2] + count[3] + count[4] + count[5]) / 6.0;

    // Calcular la temperatura más alta y más baja
    alta = count[0];
    baja = count[0];
    // if (count[1] > alta) alta = count[1];
    // if (count[2] > alta) alta = count[2];
    // if (count[3] > alta) alta = count[3];
    // if (count[4] > alta) alta = count[4];
    // if (count[5] > alta) alta = count[5];
    // if (count[1] < baja) baja = count[1];
    // if (count[2] < baja) baja = count[2];
    // if (count[3] < baja) baja = count[3];
    // if (count[4] < baja) baja = count[4];
    // if (count[5] < baja) baja = count[5];

    for (int i = 1; i < 6; i++) {
        if (count[i] > alta) {
            alta = count[i];
        }
        else if (count[i] < baja) {
            baja = count[i];
        }
    }
    std::cout << "--------------------------------" << std::endl;
    std::cout << "\nTemperaturas: " << std::endl;
    std::cout << "Temperatura media: " << media << std::endl;
    std::cout << "Temperatura mas alta: " << alta << std::endl;
    std::cout << "Temperatura mas baja: " << baja << std::endl;

    getch();
    return 0;
}
