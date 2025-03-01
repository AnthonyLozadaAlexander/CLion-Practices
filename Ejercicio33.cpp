//
// Created by zDefcon on 28/02/2025.
//
#include <conio.h>
#include <iostream>

int main() {
    // code
    int num[] = {2, 4, 6, 8, 10};
    int suma = 0;

    std::cout << "--------------------------------" << std::endl;
    std::cout << "\tSuma De Un Array" << std::endl;
    std::cout << "--------------------------------\n" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << "num["<< i <<"] = " << num[i] << std::endl;
        std::cout << num[i] << " + " << suma << std::endl;
        suma = suma + num[i];
        std::cout << " = " << suma << std::endl;
    }

    getch();
    return 0;
}
