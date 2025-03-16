//
// Created by zDefcon on 15/03/2025.
//
#include <iostream>
#include <conio.h>

int main() {
    // code
    int matrix[2][2]; // 2x2
    int matrixCopy[2][2];
    std::cout << "---------------Welcome----------------" << std::endl;
    std::cout << "Input 4 numbers to fill the matrix\n" << std::endl;
    for (int i = 0; i < 2; i++) {
        std::cout << "Row["<<i<<"]" << std::endl;
        for (int j = 0; j < 2; j++) {
            std::cout << "Input number to Column["<<i<<"]["<<j<<"]" << std::endl;
            std::cout << "-> "; std::cin >> matrix[i][j];
        }
    }
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "Data in the matrix\n" << std::endl;
    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Pasando los datos de matrix a matrixCopy
    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++) {
           matrixCopy[i][j] = matrix[i][j];
        }
    }

    std::cout << "---------------------------------------" << std::endl;
    std::cout << "Data in the matrixCopy\n" << std::endl;
    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++) {
            std::cout << matrixCopy[i][j] << " ";
        }
        std::cout << std::endl;
    }

    getch();
    return 0;
}
