
#include <iostream>

int main(){
    int datos[] = {-3, 5, 10, 2, 7};
    int tamaño = sizeof(datos)/sizeof(datos[0]);

    // if(tamaño <= 0){
    //   std::cout << "El array no puede estar vacio" << std::endl;
    //   return 1;
    // }

    std::cout << "--------------------------------" << std::endl;
    std::cout << "El tamanio del arreglo es: " << tamaño << std::endl;
    std::cout << "--------------------------------" << std::endl;;
    std::cout << "Elementos del arreglo: " << std::endl;
    for(int i = 0; i < tamaño; i++){
        std::cout << "datos["<< i <<"]: "<< datos[i] << std::endl;
    }

    std::cout << "" << std::endl;
    int max = datos[0];

    for(int i = 1; i < tamaño; i++){
        if(datos[i] > max){
            max = datos[i];
        }
    }

    std::cout << "El valor maximo del arreglo es: " << max << std::endl;
    return 0;

}
