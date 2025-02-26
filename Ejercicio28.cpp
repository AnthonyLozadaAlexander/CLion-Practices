//
// Created by zDefcon on 26/02/2025.
//
#include <iostream>
#include <cmath>

int main(){

    float a, b, c, x, x1, x2, d;

    std::cout << "Digite el coeficiente de a: "; std::cin >> a;
    std::cout << "Digite el coeficiente de b: "; std::cin >> b;
    std::cout << "Digite el coeficiente de c: "; std::cin >> c;

    if(a == 0){
        std::cout << "Error, el coeficiente de a no puede ser 0" << std::endl;
    }
    else{
        d = pow(b, 2) - 4 * a * c;

        if(d > 0){
            x1 = (-b + std::sqrt(d)) / (2 * a);
            x2 = (-b - std::sqrt(d)) / (2 * a);
            std::cout << "\nLa Ecuacion Posee Dos Soluciones Reales: " << std::endl;
            std::cout << "x1 = " << x1 << std::endl;
            std::cout << "x2 = " << x2 << std::endl;
        }
        else if(d == 0){
            x = (-b) / (2 * a);
            std::cout << "\nLa Ecuacion Posee Una Solucion Real: " << std::endl;
            std::cout << "x = " << x << std::endl;
        }
        else{
            std::cout << "\nLa Ecuacion No Posee Soluciones Reales" << std::endl;
        }
    }
}



