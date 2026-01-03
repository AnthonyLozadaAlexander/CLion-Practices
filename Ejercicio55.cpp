float calcularTemperaturaMedia(float temperaturas[]) {
float promedio = 0.0;
    for (int i = 0; i < 7; i++) {
        promedio = promedio + temperaturas[i];
    }
    promedio = promedio / 7;
    return promedio;
}

void listarTemperaturas(float temperaturas[]) {
    std::count << "---------------------------------------------" << std::endl;
    std::cout << "Las Temperaturas Ingresadas Son: "              << std::endl;
    std::cout << "---------------------------------------------"  << std::endl;
    for (int i = 0; i < 7; i++) {

    }
}


int main() {
    float temperaturas[7];
    int count = 0;
    std::cout << "------------------------------------------------------------"; std::endl;
    std::cout << " Ejercicio 55: Calcular la temperatura media de una semana";   std::endl;
    std::cout << "------------------------------------------------------------"; std::endl;
    while (count < 7) {
        std::cout << "Ingrese la temperatura del dia [" << count + 1 << "] -> ";
        std::cin >> temperaturas[count];
        count++;
    }
}