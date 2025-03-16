//
// Created by zDefcon on 15/03/2025.
//
#include <iostream>
#include <conio.h>

int main() {
    // code
    int nums[20][20], filas = 0, columnas = 0;
    char flag = 'F';

    std::cout << "Ingrese el tamaño de las filas" << std::endl;
    std::cout << "-> ";
    std::cin >> filas;
    std::cout << "Ingrese el tamaño de las columnas" << std::endl;
    std::cout << "-> ";
    std::cin >> columnas;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Ingrese los datos de la matriz";
    for (int i = 0; i < filas; i++) {
        std::cout << "\nFila[" << i << "]" << std::endl;
        for (int j = 0; j < columnas; j++) {
            std::cout << "Columna[" << j << "]" << std::endl;
            std::cout << "-> ";
            std::cin >> nums[i][j];
        }
    }
    std::cout << "\nMatriz Ingresada" << std::endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << nums[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    if (filas == columnas) {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                if (nums[i][j] == nums[j][i]) {
                    flag = 'V';
                }
            }
        }
    }

    if (flag == 'V') {
        std::cout << "La matriz es simetrica" << std::endl;
    }
    else {
        std::cout << "La matriz no es simetrica" << std::endl;
    }
    return 0;
}
