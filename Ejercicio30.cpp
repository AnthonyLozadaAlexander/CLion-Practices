//
// Created by zDefcon on 26/02/2025.
//
#include <iostream>

void fibonacci (int n) // funcion para la serie de fibonacci
{
    int a = 0, b = 1, next = 0;
    for (int i = 0; i < n; i++)
    {
        std::cout << a << ",";
        next = a + b;
        a = b;
        b = next;

    }
    std::cout << "\n";
}

int main()
{
    int n;
    std::cout << "Ingrese la cantidad de numeros para la fibonacci: ";
    std::cin >> n;

    fibonacci(n);

    return 0;
}
