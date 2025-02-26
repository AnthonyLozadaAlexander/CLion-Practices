//
// Created by zDefcon on 26/02/2025.
//
#include <iostream>
#include <string>

int main(){
    // Calcular el salario de varios empleados

    int Tiempo, NroEmpleados;
    double Sueldo, SueldoTotal;
    std::string Nombre;

    std::cout << "Ingrese el Numero de Empleados: "; std::cin >> NroEmpleados;

    for(int i = 0; i < NroEmpleados; i++){

        std::cout << "Nombre Del Empleado Nro "<< (i+1) << ": "; std::cin >> Nombre;
        std::cout << "Sueldo Del Empleado "<< (i+1) << ": " ; std::cin >> Sueldo;
        std::cout << "Tiempo Trabajado: "; std::cin >> Tiempo;
        SueldoTotal = (Sueldo * Tiempo); // Calculo del salario

        std::cout << "-----------------------------------" << std::endl;

        std::cout <<"El Salario Del Empleado Nro "<< (i+1) <<": " << std::endl;
        std::cout << Nombre << std::endl;
        std::cout <<"Es de: " << SueldoTotal << std::endl;
        std::cout << "-----------------------------------" << std::endl;

    }

    return 0;
}
