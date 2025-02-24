#include <iostream>

int main() {

    char letra;
    do {
        std::cout << "Ingrese un caracter: ";
        std::cin >> letra;

        if (letra != 'a' || letra != 'e' || letra != 'i' || letra != 'o' || letra != 'u') {
            std::cout << "\nNo es una vocal" << std::endl;
        }
    }while (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u');

    switch (letra) {
        case 'a':

        case 'e':

        case 'i':

        case 'o':

        case 'u': std::cout << "Es una vocal minuscula" << std::endl; break;

        default: std::cout << "No es una vocal minuscula" << std::endl; break;

    }

    return 0;
}
