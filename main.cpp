#include <iostream>
#include "matematicas.h"

int main() {
    int x = 10;
    int y = 4;

    int resultado_suma = sumar(x, y);
    int resultado_resta = restar(x, y);

    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;

    return 0;
}