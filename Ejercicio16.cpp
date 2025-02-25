//
// Created by zDefcon on 25/02/2025.
//
#include <iostream>

int main() {
    // code
    int n, i, suma = 0;
    do {
        std::cout << "Ingrese hasta que numero desea sumar: ";
        std::cin >> n;

        if ( n <= 0) {
            std::cout << "Error: Debe ingresar un numero mayor a 0" << std::endl;
            std::cout << "---------------------------------" << std::endl;
        }
        else {
            std::cout << "Numero ingresado correctamente" << std::endl;
            std::cout << "---------------------------------" << std::endl;
        }

    }while (n <= 0);

    for (i = 1; i <= n; i++) {
        suma = suma + i;
    }

    std::cout << "---------------------------------" << std::endl;
    std::cout << "La suma desde 1 hasta " << n << " es: " << suma << std::endl;

    system("pause");
    return 0;
}
