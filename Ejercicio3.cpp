//
// Created by zDefcon on 22/02/2025.
//
#include <iostream>

namespace primero {
    int x = 1;
}

namespace segundo {
    int x = 2;
}

int main() {

    std::cout << primero::x << std::endl;

    return 0;
}
