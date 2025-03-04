//
// Created by zDefcon on 03/03/2025.
//
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // code
    float nota1=0, nota2=0, nota3=0, notaFinal=0;
    std::string name = "";
    bool valid = false;

    do {
        std::cout << "Ingrese el nombre del alumno: "; std::getline(std::cin >> std::ws, name);
        // std::ws, variableString) es para ignorar los espacios en blanco

        if (name == "") {
            std::cout << "Error: El Nombre no puede estar vacio" << std::endl;
            std::cout << "Error: Vuelva a intentarlo" << std::endl;
            valid = false;
        }
        else if (std::any_of(name.begin(), name.end(), ::isdigit)) {
        std::cout << "Error: El Nombre no puede contener numeros" << std::endl;
        std::cout << "Error: Vuelva a intentarlo" << std::endl;
        valid = false;
        }
        else {
            std::cout << "Dato Ingresado Correctamente" << std::endl;
            valid = true;
        }
    }while (valid == false);

    return 0;
}
