//
// Created by zDefcon on 01/03/2025.
//
#include <iostream>
#include <conio.h>

int main() {
    // code
    int n, num[10], mayor, sum = 0;

    //Definicion del vector
    std::cout << "Defina el valor del vectores [max: 10] -> "; std::cin >> n;
    std::cout << std::endl;

    //Almacenamiento De Valores
    for (int i = 0; i < n; i++) {
        std::cout << "Ingrese el valor en el Indice[" << i << "] ->"; std::cin >> num[i];
    }

    mayor = num[0]; // Inicializacion del mayor con el primer elemento del arreglo num[]
    // Esto para tener un elemento seguro del arreglo al cual comparar los demas
    std::cout << std::endl;

    //Calcula El Mayor Y Suma De Valores Almacenados
    for (int i = 0; i < n; i++) {
        sum = sum + num[i];
        if (num[i] > mayor) {
            mayor = num[i];
        }
    }

    // Resta de la suma de los elementos del arreglo mas el valor mayor
    sum = sum - mayor;

    if (mayor == sum) {
        std::cout << "\nEste valor equivale a la suma de los anterios -> " << mayor << std::endl;
    }
    else {
        std::cout << "\nNo hay un valor que sea igual a la suma de los anterios." << std::endl;
    }

    system("pause");
    return 0;
}
