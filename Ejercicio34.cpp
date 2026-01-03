//
// Created by zDefcon on 28/02/2025.
//
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int numeros[10], n;

    cout << "Digite el numero que va tener el arreglo: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "----------------------------------------" << endl;
        cout << "Digite el numero en el Indice[" << i << "] : " << endl;
        cin >> numeros[i];
        cout << "----------------------------------------" << endl;
    }

    cout << "----------------------------------------" << endl;
    cout << "Los elementos del arreglo son: " << endl;
    cout << "----------------------------------------" << endl;

    for (int i = 0; i < n; i++) {

        cout << "Numeros[" << i << "] -> " << numeros[i] << endl;

    }

    getch();
    return 0;
}