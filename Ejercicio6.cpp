#include <iostream>

int main() {
    // code
    char x;
    bool On = true;

    while (On == true) {

        std::cout << "Ingrese un caracter -> "; std::cin >> x;
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
            std::cout << "Es una vocal minuscula" << std::endl;
            On = false;
        }
        else if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
            std::cout << "Es una vocal mayuscula" << std::endl;
            On = false;
        }
        else {
            std::cout << "No es una vocal\n" << std::endl;
            On = true;
        }
    }

    return 0;
}
