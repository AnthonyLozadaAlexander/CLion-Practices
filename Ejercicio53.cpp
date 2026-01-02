#include <iostream>
#include <limits>

double conversionPesosMex(double dolares) {
    return dolares * 20.50;
}

double conversionEuros(double dolares) {
    return dolares * 0.92;
}

double conversionReales(double dolares) {
    return dolares * 4.85;
}


int main() {
    double dolares = 0.0;
    int opcion = 0;

    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "                   BIENVENIDO                 " << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "          SISTEMA CONVERSOR DE MONEDAS        " << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << " Ingrese la cantidad de Dolares a convertir: ";
    if (!(std::cin >> dolares)) return 1;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "Seleccione la moneda a la que desea convertir: " << std::endl;
    std::cout << "1 -> Euros\n" << "2 -> Pesos Mexicanos\n" << "3 -> Reales\n" << std::endl;
    if (!(std::cin >> opcion)) return 1;
    switch (opcion) {
        case 1:
            std::cout << "Dolares Ingresados: $" << dolares << std::endl;
            std::cout << "Dolares a Euros: $" << conversionEuros(dolares) << std::endl;
        break;

        case 2:
            std::cout << "Dolares Ingresados: $" << dolares << std::endl;
            std::cout << "Dolares a Pesos Mexicanos: $" << conversionPesosMex(dolares) << std::endl;
            break;

        case 3:
            std::cout << "Dolares Ingresados: $" << dolares << std::endl;
            std::cout << "Dolares a Reales: $" << conversionReales(dolares) << std::endl;
            break;

        default:
            std::cout << "Opcion Invalida. Por favor, seleccione una opcion valida." << std::endl;
            break;
    }

    // limpiar buffer
    // Ignora todo hasta encontrar un salto de linea, para que el cin.get() funcione
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Ingrese ENTER para finalizar..." << std::endl;
    std::cin.get();

    return 0;
}
