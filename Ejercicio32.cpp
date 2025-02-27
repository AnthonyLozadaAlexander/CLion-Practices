//
// Created by zDefcon on 26/02/2025.
//
#include <iostream>

int main() {
    // code
    int datos[5] = {23, 2, 324, 554, 44};
    int i, j, aux;

    std::cout << "--------------------------------" << std::endl;
    std::cout << "Datos Originales: " << std::endl

    for (i = 0; i < 5; i++) {
        std::cout << "Datos["<<i<<"]: "<< datos[i] << std::endl;
    }

    // Bubble Sort [Ordenamiento Burbuja]
    for (i = 0; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            if (datos[j-1] > datos[j]) {
                aux = datos[j-1];
                datos[j-1] = datos[j];
                datos[j] = aux;
            }
        }
    }

    std::cout << "--------------------------------" << std::endl;
    std::cout << "El Orden Los Datos es: " << std::endl;
    for (i = 0; i < 5; i++) {
        std::cout << "datos["<<i<<"]: "<< datos[i] << std::endl;
    }
    std::cout << "--------------------------------" << std::endl;

    return 0;
}
