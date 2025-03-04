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
            std::cout << "\nDato Ingresado Correctamente\n" << std::endl;
            valid = true;
        }
    }while (valid == false);

    do {
        std::cout << "Ingrese la nota 1: "; std::cin >> nota1;
        std::cout << "Ingrese la nota 2: "; std::cin >> nota2;
        std::cout << "Ingrese la nota 3: "; std::cin >> nota3;

        if ((nota1 <= 0 || nota1 >= 10) || (nota2 <= 0 || nota2 >= 10) || (nota3 <= 0 || nota3 >= 10))
        {
            std::cout << "\nError: Las notas no pueden ser menores o iguales a 0" << std::endl;
            std::cout << "Error: Vuelva a intentarlo\n" << std::endl;
            valid = false;
        }else {
            std::cout << "\nDatos Ingresados Correctamente\n" << std::endl;
            nota1 = nota1 * 0.30;
            nota2 = nota2 * 0.30;
            nota3 = nota3 * 0.40;
            notaFinal = nota1 + nota2 + nota3;
            valid = true;
        }
    }while(valid == false);

    std::cout << "El Alumno " << name << " Tiene una Nota Final De: " << notaFinal << std::endl;

    return 0;
}
