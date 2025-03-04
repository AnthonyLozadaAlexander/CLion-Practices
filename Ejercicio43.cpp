//
// Created by zDefcon on 03/03/2025.
//
#include <iostream>

int main() {
    // code
    int nums[100], n, mayor, indice=0;
    do {
        std::cout << "Ingrese el tamanio del arreglo" << std::endl;
        std::cout << "-> "; std::cin >> n;
        if (n <= 0) {
            std::cout << "Error:El tamaño del arreglo debe ser mayor a 0" << std::endl;
        }
        else {
            std::cout << "Dato Ingresado Correctamente" << std::endl;
        }
    }while (n <= 0);

    for (int i = 0; i < n; i++) {
        std::cout << "Ingrese el elemento del arreglo[" << i << "]: "; std::cin >> nums[i];
    }
    mayor = nums[0];
    std::cout << "\nElementos Del Arreglo Son:\n" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "nums[" << i << "]: " << nums[i] << std::endl;
        if (nums[i] > mayor) {
            mayor = nums[i];
            indice = i;
        }
    }
    std::cout << "\nEl Elemento Mayor Del Arreglo Es = nums["<<indice<<"]: " << mayor << std::endl;

    system("pause");
    return 0;
}
