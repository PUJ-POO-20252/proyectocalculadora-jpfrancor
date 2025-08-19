//
// Created by jpfra on 08/18/2025.
//

#include "matematicas.h"

#include <iostream>
#include <ostream>

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

double dividir(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return static_cast<double>(a) / b;
}