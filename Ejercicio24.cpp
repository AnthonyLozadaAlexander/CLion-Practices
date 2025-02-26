//
// Created by zDefcon on 26/02/2025.
//
#include <iostream>
#include <time.h>

int main() {
    // code
    int num, data, count = 0;
    srand(time(NULL));
    data = 1 + rand()%(100);

    do {
        std::cout << "Introduce un numero entre 1 y 100: ";
        std::cin >> num;

        if (num > data) {
            std::cout << "------------------------------" << std::endl;
            std::cout << "Digite un numero menor" << std::endl;
            std::cout << "------------------------------" << std::endl;
        }
        else if (num < data) {
            std::cout << "------------------------------" << std::endl;
            std::cout << "Digite un numero mayor" << std::endl;
            std::cout << "------------------------------" << std::endl;
        }

        count = count + 1;
    }while (num != data);

    std::cout << "-------------------------------------" << std::endl;
    std::cout << "--FELICIDADES, ADIVINASTE EL NUMERO--" << std::endl;
    std::cout << "Numero De Intentos: " << count << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    return 0;
}
