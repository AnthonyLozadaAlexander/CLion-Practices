//
// Created by zDefcon on 26/02/2025.
//
#include <iostream>
#include <sstream>
#include <string>

int main(){
    int f, c, Fila, Columna, num;
    std::cout << "Ingrese el numero de filas: "; std::cin >> f;
    std::cout << "Ingrese el numero de Columnas: "; std::cin >> c;
    int Matriz[f][c];

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cout <<"Ingrese el valor de la posicion [" << i << "][" << j << "]: \n";
            std::cin >> Matriz[i][j];
        }
    }

    std::cout << "Datos de la Matriz: " << std::endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cout << Matriz[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "Ingrese la fila y columna que desea visualizar: \n";
    std::cout << "Fila: "; std::cin >> Fila;
    std::cout << "Columna: "; std::cin >> Columna;

    std::cout << "Matriz["<<Fila<<"]["<<Columna<<"] = " << Matriz[Fila][Columna] << std::endl;
}
