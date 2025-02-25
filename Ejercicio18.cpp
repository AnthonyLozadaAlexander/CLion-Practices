//
// Created by zDefcon on 25/02/2025.
//
#include <iostream>

int main() {
    // code
    int n, factorial = 1, suma = 0;

    std::cout << "---------------------------------" << std::endl;
    std::cout << "Ingrese el numero !factorial: ";
    std::cin >> n;
    std::cout << "---------------------------------" << std::endl;

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
        suma = suma + factorial;
    }

    std::cout << "El factorial de " << n << " es: " << factorial << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "La suma de los factoriales es: " << suma << std::endl;
    std::cout << "---------------------------------" << std::endl;;
    return 0;
}
