#include <iostream>
#include <cmath>

int main() {
    // code: Realice un programa que calcule y muestre en la salida estandar la suma de los cuadrados de los 10 primeros enteros mayores que cero

    int num = 0, i = 1;
    while (i <= 10) {
        num = num + pow(i, 2);
        i = i + 1;
    }

    std::cout << "La suma de los cuadrados de los 10 primeros numeros enteros es: " << num << std::endl;
    return 0;
}
