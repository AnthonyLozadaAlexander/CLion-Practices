int main() {
    double dolares = 0.0;
    int opcion = 0;

    std::cout << "------------------BIENVENIDO----------------" << std::endl;
    std::cout << " Ingrese la cantidad de Dolares a convertir: " << std::endl;
    if (!(std::cin >> dolares)) return 1;
    std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "Seleccione la moneda a la que desea convertir: " << std::endl;
    std::cout << "1 -> Euros" << std::endl;
    std::cout << "2 -> Pesos Mexicanos" << std::endl;
    if (!(std::cin >> opcion)) return 1;
    switch (opcion) {
        case 1:
    }
    return 0;
}
