#include <iostream>
#include "matematicas.h"

int main() {
    int x, y;
    std::cout << "Ingrese dos numeros: ";
    std::cin >> x >> y;


    int resultado_suma = sumar(x, y);
    int resultado_resta = restar(x, y);
    int resultado_mult = mult(x, y);
    double resultado_division = dividir(x, y);


    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;
    std::cout << "Multiplicacion: " << resultado_mult << std::endl;

    if (y == 0) {
        std::cout << "Division: Error, division entre cero. " <<  std::endl;
    } else {
        std::cout << "Division: " << resultado_division << std::endl;
    }

    return 0;
}