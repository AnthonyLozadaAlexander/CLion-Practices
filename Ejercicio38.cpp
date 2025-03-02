//
// Created by zDefcon on 01/03/2025.
//
#include <iostream>

int main() {
    // code
    int nums[] = {4,5,2,7,1}, mayor, menor, indiceMayor = 0, indiceMenor=0;

    mayor = nums[0];
    menor = nums[0];

    std::cout << "---------------------------" << std::endl;
    std::cout << "Elementos Del Arreglo: " << std::endl;
    for (int i = 0; i < 5; i++) {

        std::cout << "nums["<<i<<"] -> " << nums[i] << std::endl;

        if (nums[i] > mayor) {
            mayor = nums[i];
            indiceMayor = i;
        }
        if (i == 5-1) {
            std::cout << "------------------------------------" << std::endl;
            std::cout << "El Elemento Mayor Del Arreglo Es: " <<"nums["<<indiceMayor<<"] = "<< mayor << std::endl;

        }
        if (nums[i] < menor) {
            menor = nums[i];
            indiceMenor = i;
        }
        if (i == 5-1) {

            std::cout << "El Elemento Menor Del Arreglo Es: " <<"nums["<<indiceMenor<<"] = " << menor << std::endl;
            std::cout << "------------------------------------" << std::endl;
        }
    }

    system("pause");
    return 0;
}
