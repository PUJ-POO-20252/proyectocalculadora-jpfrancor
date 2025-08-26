//
// Created by jpfra on 08/25/2025.
//

#ifndef MATEMATICAS_MATRIZ_UTILS_H
#define MATEMATICAS_MATRIZ_UTILS_H
#include <string>

void sumarMatrices(const int (&a)[2][3], const int (&b)[2][3], int (&resultado)[2][3]);
void imprimirMatriz(const std::string& titulo, const int (&mat)[2][3]);


#endif //MATEMATICAS_MATRIZ_UTILS_H