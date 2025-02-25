//
// Created by zDefcon on 25/02/2025.
#include <iostream>

int main() {
    // code: Factorial de un numero
    int num, factorial = 1;
    std::cout << "Ingrese un numero: "; std::cin >> num;

    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    std::cout << "\nEl factorial de " << num << " es: " << factorial << std::endl;

    system("pause");
    return 0;
}
