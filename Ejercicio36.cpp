//
// Created by zDefcon on 28/02/2025.
//
#include <iostream>
#include <conio.h>

int main() {
    // code
    int numeros[10], n;

    std::cout << "Ingrese el tamaño del arreglo [maximo 10]: "; std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Digite el elemento entero en el Indice[" << i << "] : " << std::endl;
        std::cin >> numeros[i];
        std::cout << "----------------------------------------" << std::endl;
    }

    std::cout << "Los elementos del arreglo son: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "-----------------------------------------" << std::endl;
        std::cout << "numeros[" << i << "] -> " << numeros[i] << std::endl;
        std::cout << "-----------------------------------------" << std::endl;
    }

    std::cout << "----------------------------------------" << std::endl;
    int max = numeros[0];
    for (int i = 0; i < n; i++) {
        if (numeros[i] > max) {
            max = numeros[i];
        }
    }

    std::cout << "El elemento mayor del arreglo es: " << max << std::endl;

    getch();
    return 0;
}
