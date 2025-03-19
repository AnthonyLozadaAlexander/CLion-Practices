//
// Created by zDefcon on 19/03/2025.
//

#include <iostream>
#include <conio.h>
#include <cstring>

int main() {
    // code
    char palabra[] = "Anthony";
    char palabra2[] = {'A', 'n', 't', 'h', 'o', 'n', 'y', '\0'};
    char nombre[20];

    //Imprimir las palabras

    // std::cout << palabra << std::endl;
    // std::cout << palabra2 << std::endl;

    std::cout << "Digite su nombre" << std::endl;
    std::cout << "-> ";
    std::cin.getline(nombre, 20); // solo ocupara 20 caracteres, para que no se desborde y no ocupe toda la memoria

    std::cout << "\n" << nombre << std::endl;


    getch();
    return 0;
}
