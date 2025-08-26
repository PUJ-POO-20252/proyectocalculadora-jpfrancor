#include <iostream>
#include "matematicas.h"
#include "matriz_utils.h"

int main() {
    int x, y;
    std::cout << "Ingrese dos numeros: ";
    std::cin >> x >> y;


    int resultado_suma = sumar(x, y);
    int resultado_resta = restar(x, y);
    int resultado_mult = mult(x, y);
    double resultado_division = dividir(x, y);

    //Estas matrices podrían haberse definido con vector, pero como la instrucción de la tarea las definía con int, decidí dejarlas así
    int matriz1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matriz2[2][3] = {{6, 5, 4}, {3, 2, 1}};
    int resultado[2][3];

    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;
    std::cout << "Multiplicacion: " << resultado_mult << std::endl;

    if (y == 0) {
        std::cout << "Division: Error, division entre cero. " <<  std::endl;
    } else {
        std::cout << "Division: " << resultado_division << std::endl;
    }

    sumarMatrices(matriz1, matriz2, resultado);

    imprimirMatriz("Matriz 1:", matriz1);
    imprimirMatriz("Matriz 2:", matriz2);
    imprimirMatriz("Resultado:", resultado);

    return 0;
}