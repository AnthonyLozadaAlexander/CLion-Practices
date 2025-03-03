//
// Created by zDefcon on 02/03/2025.
//
#include <iostream>
#include <limits>

float incremento(float x) {

    return x * 0.25f;

}

int main() {
    // code
    float Salario;
    do {
        std::cout << "--------------------------" << std::endl;
        std::cout << "Ingresa tu salario: "; std::cin >> Salario;
        std::cout << "--------------------------" << std::endl;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Error: Entrada no valida" << std::endl;
            std::cout << "Error: Vuelva a intentarlo" << std::endl;
            continue;
        }
        if (Salario <= 0) {
            std::cout << "-------------------------" << std::endl;
            std::cout << "Error: Dato Invalido" << std::endl;
            std::cout << "Error: Vuelve a intentarlo" << std::endl;
            std::cout << "--------------------------" << std::endl;
        }
        else {
            std::cout << "-----------------------------" << std::endl;
            std::cout << "Dato Ingresado Correctamente" << std::endl;
            std::cout << "-----------------------------" << std::endl;
        }
    }while (Salario <= 0);

    std::cout << "--------------------------" << std::endl;
    std::cout << "Tu salario es de: " << Salario << std::endl;
    std::cout << "Mas un incremento del 25% el cual es de: " << incremento(Salario) << std::endl;
    std::cout << "Salario Total: " << Salario + incremento(Salario) << std::endl;
    std::cout << "--------------------------" << std::endl;

    return 0;
}
