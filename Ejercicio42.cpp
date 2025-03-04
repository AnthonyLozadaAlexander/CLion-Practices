//
// Created by zDefcon on 02/03/2025.
//
#include <iostream>

int main() {
    // code
    int n=0;
    double ca = 0, promedio=0, acumulador = 0;

    do{
        std::cout << "\n";
        std::cout << "Ingrese la cantidad de notas a promediar" << std::endl;
        std::cout << "-> "; std::cin >> n;

    if(n <= 0){
      std::cout << "\nError: la cantidad de notas debe ser mayor a 0" << std::endl;
    }
    else{

      std::cout << "\nCantidad Ingresada Correctamente" << std::endl;
    }
    }while(n <= 0);

    for (int i = 1; i <= n; i++) {
        std::cout << "-------------------------------------" << std::endl;
        std::cout << "Ingrese la nota No [" << i <<"]" << std::endl;
        std::cin >> ca;
        acumulador = acumulador + ca;
        std::cout << "------------------------------------" << std::endl;
    }

    promedio = acumulador / n;
    std::cout << "El promedio de las " << n << " notas ingresadas es: " << promedio << std::endl;
    return 0;
}
