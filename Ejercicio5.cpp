#include <iostream>

int main() {

    char letra;
    do {
        std::cout << "Ingrese un caracter: ";
        std::cin >> letra;

            if (letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u' && letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U') {
                std::cout << "No es una vocal\n" << std::endl;
            }

        } while (letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u' && letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U');

    std::cout << "\nEl caracter ingresado es: " << letra << std::endl;

    switch (letra) {
        case 'a':

        case 'e':

        case 'i':

        case 'o':

        case 'u': std::cout << "Es una vocal Minuscula" << std::endl; break;

        case 'A':

        case 'E':

        case 'I':

        case 'O':

        case 'U': std::cout << "Es una vocal Mayuscula" << std::endl; break;

        default: std::cout << "No es una vocal Minuscula" << std::endl; break;

    }

    return 0;
}
