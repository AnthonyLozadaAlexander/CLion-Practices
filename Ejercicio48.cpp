//
// Created by zDefcon on 15/03/2025.
//
#include <iostream>
#include <ctime>

int main() {
    // code
    srand(time(NULL)); // creacion de randomizer
    int f = 0, c = 0;
    std::cout << "Ingrese el numero de filas" << std::endl;
    std::cout << "-> "; std::cin >> f;
    std::cout << "Ingrese el numero de columnas" << std::endl;
    std::cout << "-> "; std::cin >> c;

    int matrizCopy[f][c];
    int matriz[f][c];

    std::cout << "Elementos de la matriz" << std::endl;
    for (int i = 0; i < f; i++) {
        std::cout << "\nRow["<<i<<"]" << std::endl;
        for (int j = 0; j < c; j++) {
            int Random = (rand() % 10)+1; // randomizer del 1 al 20 aleatoriamente
            matriz[i][j] = Random;
            std::cout << "Column["<<j<<"]" << std::endl;
            std::cout << "-> " << matriz[i][j] << std::endl;
        }
    }

    std::cout << "-------------------------------------" << std::endl;
    std::cout << "Matriz Grafica" << std::endl;
    for (int i = 0; i < f; i++) { // entra a la fila primero
        for (int j = 0; j < c;j++ ) { // recorre las columnas
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\n-------------------------------------" << std::endl;
    std::cout << "Traspaso de los elementos de la matriz" << std::endl;
    for (int i = 0; i < f; i++) {
        std::cout << "\nRow["<<i<<"]" << std::endl;
        for (int j = 0; j < c; j++) {
            matrizCopy[i][j] = matriz[i][j];
            std::cout << "Column["<<j<<"] = " << matrizCopy[i][j] << std::endl;
        }
    }

    std::cout << "-------------------------------------" << std::endl;
    std::cout << "MatrizCopy Grafica" << std::endl;
    for (int i = 0; i < f; i++) { // entra a la fila primero
        for (int j = 0; j < c;j++ ) { // recorre las columnas
            std::cout << matrizCopy[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
