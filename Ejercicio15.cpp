//
// Created by zDefcon on 25/02/2025.
//
#include <iostream>

int main() {
    // code
    int numero, suma = 0;

    do {
        std::cout << "Introduce un numero: "; std::cin >> numero;
        if (numero > 0) {
            suma = suma + numero;
        }
    }while ( ((numero < 20) || (numero > 30)) && (numero != 0));

    std::cout << "\n La suma es: " << suma << std::endl;

    system("pause");
    return 0;
}
