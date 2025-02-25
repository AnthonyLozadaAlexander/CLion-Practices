#include <iostream>
#include <conio.h>

int main() {
    // code: While inverso de 100 hasta llegar a 1
    int i = 100;

    while (i >= 1) {
        std::cout << "numero -> " << i << std::endl;
        i = i - 1;
    }

    std::cout << "---------------------------------" << std::endl;

    getch(); // espera a que el usuario ingrese una tecla para cerrar la consola
    return 0;
}
