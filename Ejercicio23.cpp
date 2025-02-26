#include <iostream>

int main() {
    // code
    int limit, x = 0, y = 1, z = 1;
    std::cout << "Ingrese el limite de la secuencia: ";
    std::cin >> limit;
    std::cout << "---------------------------\n";

    for (int i = 1; i <= limit; i++) {
        z = x + y;
        std::cout << z << ",";
        x = y;
        y = z;
    }

    std::cout << "\n";
    system("pause");
    return 0;
}
