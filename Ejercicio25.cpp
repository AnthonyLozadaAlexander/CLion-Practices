//
// Created by zDefcon on 26/02/2025.
//
#include <iostream>
#include <list>

int main()
{  // Declarar una lista de enteros
    std::list<int> lista;

    // Agregar elementos a la lista
    lista.push_back(10);
    lista.push_back(20);
    lista.push_back(30);

    // Imprimir los elementos de la lista
    std::cout << "Los elementos de la lista son: ";
    for (int elemento : lista)
    {
        std::cout << elemento << " ";
    }
    std::cout << "\n"; // Salto de linea

    // Para eliminar un elemento de la lista, lista.remove(20);

    return 0;
}

