#include <iostream>
#include <cmath>

int main() {
    // code
    int num = 0, i;

    for (i = 1; i <= 10; i++) {
        num = num + pow(i, 2);
    }

    std::cout << "La suma de los cuadrados de los 10 primeros numeros enteros es: " << num << std::endl;

    return 0;
}
