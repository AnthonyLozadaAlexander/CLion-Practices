#include <iostream>

int main() {
    // code
    int saldoInicial = 1000, opc;
    float extra, saldo = 0, retiro;
    std::cout << "\tBienvenido a su Cajero Virtual" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Saldo Actual: " << saldoInicial << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "1. Ingresar dinero en la cuenta" << std::endl;
    std::cout << "2. Retirar dinero de la cuenta" << std::endl;
    std::cout << "3. Salir" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Digite la opcion" << std::endl;
    std::cin >> opc;

    switch (opc) {
        case 1:
            std::cout << "Digite la cantidad de dinero a ingresar: ";
            std::cin >> extra;
            saldo = saldoInicial + extra;
            std::cout << "Dinero Actual: " << saldo; break;
        case 2:
            std::cout << "Digite la cantidad de dinero a retirar: ";
            std::cin >> retiro;

            if (retiro > saldoInicial) {
                std::cout << "Usted no posee esa cantidad de dinero" << std::endl;
            }
            else {
             saldo = saldoInicial - retiro;
             std::cout << "Dinero Actual: " << saldo;
            }
        case 3:
            std::cout << "Gracias Por Usar Nuestro Sistema"; break;
        default:
            std::cout << "Opcion No Valida"; break;
    }
    return 0;
}
