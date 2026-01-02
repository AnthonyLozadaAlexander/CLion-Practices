#include <iostream>
#include <limits>
#include <string>

bool esPrimo(int x) {
    if (x <= 1) {
        std::cout << "Error: El Numero Ingresado Debe Ser Mayor A 1" << std::endl;
        return false;
    }

    for (int k = 2; k <= x; k++) {
        if (x % k == 0) {
            return false;
        }
    }

    return true;
}


int main()
{
    int x = 0;
    std::string resultado = "";

    std::cout << "Verificar si un numero es primo" << std::endl;
    std::cout << "Ingrese un numero: ";

    if (!(std::cin >> x)) std::cout << "Entrada Invalida" << std::endl; return 1;

    resultado = esPrimo(x) ? " es Primo" : "No es primo";
    std::cout << "El Numero " << x << resultado << std::endl;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Presione Enter para continuar...";
    std::cin.get();

    return 0;
}