#include <iostream>

int main() {
    // code
    float a, b, c, d, resultado;

    std::cout << "Ingrese el valor de a: "; std::cin >> a;
    std::cout << "Ingrese el valor de b: "; std::cin >> b;
    std::cout << "Ingrese el valor de c: "; std::cin >> c;
    std::cout << "Ingrese el valor de d: "; std::cin >> d;

    resultado = a + (b/(c - d));
    std::cout.precision(2); // Redondear a 2 decimales
    std::cout << "\nEl resultado de la operacion es: " << resultado << std::endl;

    return 0;
}
