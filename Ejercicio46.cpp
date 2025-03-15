//
// Created by zDefcon on 14/03/2025.
//
#include <iostream>
#include <conio.h>

int main() {
    // code
    int matriz[3][3];
    std::cout << "Introduce los elementos de la matriz 3x3" << std::endl;
    for (int f = 0; f < 3; f++)
    {
        std::cout << "Fila["<<f<<"]" << std::endl;
        for (int c = 0; c < 3; c++)
        {
            std::cout << "Columna["<<c<<"]" << std::endl;
            std::cout << "-> "; std::cin >> matriz[f][c];
        }
    }
    std::cout << "\n-------------------------" << std::endl;
    std::cout << "Elementos de la matriz" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "--------------------------\n" << std::endl;
    std::cout << "   Diagonal Principal" << std::endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                std::cout << matriz[i][j] << " ";
            }
        }
    }

    getch();
    return 0;
}
