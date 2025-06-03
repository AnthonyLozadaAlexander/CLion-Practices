//
// Created by zDefcon on 03/06/2025.
//
#include <iostream>

int main() {
    double salario=0.0;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "  CALCULO DEL SALARIO DE UN PROFESOR" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Ingrese el salario del profesor: " << std::endl;
    std::cin >> salario;

    if (salario < 18.000) {
    salario = salario + (salario * 0.12);
    std::cout << "Salario Actualizado: " << salario << std::endl;
    }
    else if (salario >= 18.000 && salario <= 30.000) {
        salario = salario + (salario * 0.8);
        std::cout << "Salario Actualizado: " << salario << std::endl;
    }
    else if (salario > 30.000 && salario <= 50.000) {
        salario = salario + (salario * 0.7);
        std::cout << "Salario Actualizado: " << salario << std::endl;
    }
    else if (salario > 50.000) {
        salario = salario + (salario * 0.6);
        std::cout << "Salario Actualizado: " << salario << std::endl;
    }
    else if (salario <= 0){
        std::cout << "El salario ingresado es invalido." << std::endl;
    }
    return 0;
}
