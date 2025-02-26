//
// Created by zDefcon on 26/02/2025.
//
#include <iostream>
#include <list>

int main() {
    // code
    std::list<int> lista;
    int nums, elementos, count = 0;

    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "Cuantos numeros enteros quieres ingresar a la lista: ";
    std::cin >> nums;
    std::cout << "-------------------------------------------------" << std::endl;

    for (int i = 0; i < nums; i++) {
        std::cout << "Ingrese El Elemento[" << i << "]: ";
        std::cin >> elementos;
        std::cout << "-------------------------------------------------" << std::endl;
        lista.push_back(elementos);
    }

    std::cout << "Los Elementos De La Lista son: " << std::endl;
    for (int element: lista) {
        std::cout << "Lista[" << count << "]: " << element << std::endl;
        count = count + 1;
    }
    return 0;
}
