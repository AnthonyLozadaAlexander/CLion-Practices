#include <iostream>

int main() {

    // Ingresar un numero positivo

    int num;
    do {
        std::cout << "Ingrese un numero positivo: "; std::cin >> num;
    }while (num < 0);

    std::cout << "El numero positivo ingresado es: " << num << std::endl;

    return 0;
}
