//
// Created by zDefcon on 15/03/2025.
//
#include <iostream>
#include <conio.h>

int main() {
    // code
    int matrix[3][3] = {1,2,3,
                        4,5,6,
                        7,8,9};

    std::cout << "\nElementos de la matriz\n" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;
    // cambio
    std::cout << "Traspuesta de la matriz" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    std::cout << "--------------------------------" << std::endl;
    std::cout << "Elementos de la matriz traspuesta\n" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[j][i] << " ";
        }
        std::cout << std::endl;
    }

    getch();
    return 0;
}
