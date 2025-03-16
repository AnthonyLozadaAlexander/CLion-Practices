//
// Created by zDefcon on 15/03/2025.
//
#include <iostream>

int main() {
    // code
    int matrix[3][3] = {1,2,3,
                        4,5,6,
                        7,8,9};

    std::cout << "Elementos de la matriz" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

        return 0;
}
