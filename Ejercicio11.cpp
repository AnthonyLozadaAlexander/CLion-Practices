#include <iostream>

int main() {
    // code: do while
    int i = 1;
    int j = 10;

    std::cout << "Aumento del iterador de uno en uno hasta llegar a 10" << std::endl;
    do {
        std::cout << "numero: " << i << std::endl;
        i = i + 1; // aumento del iterador de uno en uno hasta llegar a 10
    }while (i <= 10);

    std::cout << "----------------------------------------------------" << std::endl;

    std::cout << "Decremento del iterador de uno en uno hasta llegar a 1" << std::endl;
    do {
        std::cout << "numero: " << j << std::endl;
        j = j - 1; // disminucion del iterador de uno en uno hasta llegar a 1
    }while (j >= 1);

    system("pause");
    return 0;
}
