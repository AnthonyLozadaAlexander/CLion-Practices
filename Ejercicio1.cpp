#include <iostream>
#include <string>

int main() {
    float participacion, examen1, examen2, examenfinal, calificacionFinal;
    std::string nombre = "";
    std::cout << "-------------------BIENVENIDO-------------------" << std::endl;
    std::cout << "Ingrese su nombre" << std::endl;
    std::cin >> nombre;
    std::cout << "-------------------CALIFICACIONES-------------------" << std::endl;
    std::cout << "Estudiante: " << nombre << std::endl;
    std::cout << "Ingrese la calificacion de participacion" << std::endl;
    std::cin >> participacion;
    std::cout << "Ingrese la calificacion del Primer Examen Parcial" << std::endl;
    std::cin >> examen1;
    std::cout << "Ingrese la calificacion del Segundo Examen Parcial" << std::endl;
    std::cin >> examen2;
    std::cout << "Ingrese la calificacion del Examen Final" << std::endl;
    std::cin >> examenfinal;
    std::cout << "----------------------------------------------------" << std::endl;
    // Calculo de la calificacion final, sacando los porcentajes
    participacion = participacion * 0.10;
    examen1 = examen1 * 0.25;
    examen2 = examen2 * 0.25;
    examenfinal = examenfinal * 0.40;
    calificacionFinal = (participacion + examen1 + examen2 + examenfinal);

    std::cout << "Estudiante: " << nombre << std::endl;
    std::cout << "Su Calificacion Final es: " << calificacionFinal << std::endl;;

    return 0;
}
