/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file decimal_to_binary.cc
 * @author Steven
 * @date 2025-01-07
 * @brief Programa que convierte un número decimal a binario
 * @bug There are no known bugs
*/

#include <iostream>

void decimalABinario(int decimal) {
    int binario[32]; // Máximo 32 bits
    int indice = 0;

    while (decimal > 0) {
        binario[indice++] = decimal % 2;
        decimal /= 2;
    }

    for (int i = indice - 1; i >= 0; i--) {
        std::cout << binario[i];
    }
    std::cout << std::endl;
}

int main() {
    int entrada;
    std::cin >> entrada;

    decimalABinario(entrada);

    return 0;
}
