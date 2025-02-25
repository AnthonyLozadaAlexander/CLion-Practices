#include <iostream>

int main() {
    // code
    float a, b, c , d, e, f, resultado;

    std::cout << "Ingrese el valor de a: "; std::cin >> a;
    std::cout << "Ingrese el valor de b: "; std::cin >> b;
    std::cout << "Ingrese el valor de c: "; std::cin >> c;
    std::cout << "Ingrese el valor de d: "; std::cin >> d;
    std::cout << "Ingrese el valor de e: "; std::cin >> e;
    std::cout << "Ingrese el valor de f: "; std::cin >> f;

    resultado = (a + (b / c)) / (d + (e / f));
    std::cout.precision(2); // Redondear a 2 decimales
    std::cout << "\nEl resultado de la operacion es: " << resultado << std::endl;

    std::cin.get();
    return 0;
}
