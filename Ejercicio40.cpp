//
// Created by zDefcon on 02/03/2025
#include <iostream>

int Mujeres(int xx){
    return (xx * 100); // se multiplica por la base del porcentaje 100% para luego ser divido por el total y sacar un numero determinado
}

int Hombres(int xy){
    return (xy * 100);
    // se multiplica por la base del porcentaje 100% para luego ser divido por el total y sacar un numero determinado
}

int main() {
    // code
    int hombres = 0, mujeres = 0, total = 0;
    do {
        std::cout << "Ingrese el número de hombres" << std::endl;
        std::cout << "-> ";
        std::cin >> hombres;
        std::cout << "-----------------------------------------" << std::endl;
        std::cout << "Ingrese el numero de mujeres" << std::endl;
        std::cout << "-> ";
        std::cin >> mujeres;

        if (hombres < 0 || hombres == 0 || mujeres < 0 || mujeres == 0) {
            std::cout << "------------------------------------------" << std::endl;
            std::cout << "Error: Dato Invalido, No se aceptan numeros negativos ni cero" << std::endl;
            std::cout << "------------------------------------------" << std::endl;
        }
        else {
            std::cout << "------------------------------------------" << std::endl;
            std::cout << "Dato Ingresado Correctamente" << std::endl;
            std::cout << "------------------------------------------\n" << std::endl;
        }
    }while (hombres < 0 || hombres == 0 || mujeres < 0 || mujeres == 0);

    total = (hombres + mujeres);

    std::cout << "------------------------------------------" << std::endl;
    std::cout << "El total de personas es de: " << total << std::endl;
    std::cout << "El porcentaje de hombres es de: " << Hombres(hombres) / 100 << "%" << std::endl;
    std::cout << "El porcentaje de mujeres es de: " << Mujeres(mujeres)/ 100 << "%" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Fin del programa" << std::endl;

    return 0;
}


