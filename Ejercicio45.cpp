#include<iostream>
#include<conio.h>

int main() {
    int nums[10][10], filas, columnas;
    std::cout << "Digite el numero de filas (1-10)" << std::endl;
    std::cout << "-> "; std::cin >> filas;
    std::cout << "Digite el numero de columnas (1-10)" << std::endl;
    std::cout << "-> "; std::cin >> columnas;

    std::cout << "\n-----------------------------------" << std::endl;
    for (int f = 0; f < filas; f++) {
        std::cout << "Fila[" << f << "]" << std::endl;
        for (int c = 0; c < columnas; c++) {
            std::cout << "Digite el elemento de la columna["<< c << "]" << std::endl;
            std::cout << "-> "; std::cin >> nums[f][c];
        }
    }
    std::cout << "-----------------------------------\n" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "Elementos de la matriz" << std::endl;

    for (int f = 0; f < filas; f++) {
        for (int c = 0; c < columnas; c++) {
            std::cout << nums[f][c] << " ";
        }
        std::cout << std::endl;
    }

  getch();
  return 0;
}
