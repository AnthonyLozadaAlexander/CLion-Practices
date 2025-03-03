//
// Created by zDefcon on 02/03/2025.
//
#include <iostream>

int main() {
    // code
    int n=0;
    double nota = 0, promedio=0;

    do{
        std::cout << "Ingrese la cantidad de notas a promediar" << std::endl;
        std::cout << "- >"; std::cin >> n;

    if(n <= 0){
      std::cout << "Error: la cantidad de notas debe ser mayor a 0" << std::endl;
    }
    else{

      std::cout << "Cantidad Ingresada Correctamente" << std::endl;
    }
    }while(n <= 0);

    return 0;
}
