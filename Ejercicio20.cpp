//
// Created by zDefcon on 25/02/2025.
//
#include <iostream>

int main() {
    // code
    int num, suma = 0;
    std::cout << "----------------------------------------------------------" << std::endl;
    std::cout << "Ingrese un numero: ";
    std::cin >> num;

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) // numeros pares
        {
            std::cout << " - " << i;
            suma = suma - i;
        }else if (i % 2 == 1) // numeros impares
        {
            std::cout << " + " << i;
            suma = suma + i;
        }
    }

    std::cout << "\n";
    std::cout << "----------------------------------------------------------" << std::endl;
    std::cout << "El resultado de 1 - 2 + 3 - 4 + 5 - 6 ... n[" << num << "] es: " << suma << std::endl;

    return 0;
}
