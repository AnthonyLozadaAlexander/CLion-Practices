#include <iostream>
#include <cmath>
#include <conio.h>

int main() {
    // code
    int numero = 2, n, suma = 0, calculo;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    std::cout << "----------------------------------------------------" << std::endl;
    for (int i = 1; i <= n; i++){
     calculo = pow(numero, i);
     std::cout << numero << " ^ " << i << " = " << calculo << std::endl;
     suma = suma + calculo;
    }
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "La suma de 2^1 + 2^2 + 2^3 + ... + 2^n es: " << suma << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;

    getch();
    return 0;
}
