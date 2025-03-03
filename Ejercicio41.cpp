//
// Created by zDefcon on 02/03/2025.
//
#include <iostream>


float incremento(float salario) {

    return salario * 0.25f;

}

int main() {
    // code
    float Salario, Incremento;
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

Incremento(Salario);

    std::cout << "--------------------------" << std::endl;
    std::cout << "Tu salario es de: " << Salario << std::endl;
    std::cout << "Mas un incremento del 25% el cual es de: " << Incremento << std::endl;
    std::cout << "Salario Total: " << Salario + Incremento << std::endl;
    std::cout << "--------------------------" << std::endl;

    return 0;
}
