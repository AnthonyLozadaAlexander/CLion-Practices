//
// Created by zDefcon on 26/02/2025.
//
#include <iostream>

int main() {
    // code
    int limit = 0, a = 0, b = 1, c;
    std::cout << "Ingrese el limite de la serie de Fibonacci: "; std::cin >> limit;

    for (int i = 0; i <= limit; i++) {
        c = a + b;
        a = b;
        b = c;

        std::cout << c << ",";
    }
    return 0;
}
