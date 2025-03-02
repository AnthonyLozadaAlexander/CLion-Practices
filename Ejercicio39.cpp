//
// Created by zDefcon on 02/03/2025.
//
#include <iostream>
#include <conio.h>

int main() {
    // code
    char letras1[] = {'a', 'b', 'c', 'd', 'e'}; // comienzan desde el indice 0 hasta 4
    char letras2[] = {'f', 'g', 'h', 'i', 'j'}; // comienzan desde el indice 0 hasta 4
    char letras3[10];

    //copiando los elementos del letras1 hacia letras3
    for (int i = 0; i < 5; i++) {
        letras3[i] = letras1[i];
    }

    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "Los primeros 5 elementos de letras3 son: " << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << "Letras["<<i<<"] = " << letras3[i] << std::endl;
    }

    std::cout << "-----------------------------------------" << std::endl;

    for (int i = 5; i < 10; i++) {
        letras3[i] = letras2[i - 5];
    }

    std::cout << "Los segundos 5 elementos de letras3 son: " << std::endl;
    for (int i = 5; i < 10; i++) {
        std::cout << "Letras["<<i<<"] = "<< letras3[i] << std::endl;
    }

    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "Los elementos del arreglo letras3 son: " << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << "Letras["<<i<<"] = "<< letras3[i] << std::endl;
    }

    std::cout << "-----------------------------------------" << std::endl;
    return 0;
}
