/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file binary_to_decimal.cc
 * @author Steven
 * @date 2025-01-07
 * @brief Programa que convierte un número binario a decimal
 * @bug There are no known bugs
*/

#include <iostream>
#include <cmath>

bool esBinario(int numero) {
  while (numero > 0) {
    if(numero % 10 > 1) {
      return false;
      numero /= 10;
    }
  }
}

int binarioADecimal(int binario) {
  int decimal = 0, potencia = 0;
  while (binario > 0) {
    decimal += (binario % 10) * pow(2, potencia);
    binario /= 10;
    potencia++;
  }
  return decimal;
}

int main() {
  int entrada{0};
  std::cin >> entrada; 

  if(!esBinario(entrada)) {
    std::cout << "Wrong Input" << std::endl;
    return 1;
  }

  int resultado = binarioADecimal(entrada);
  std::cout << resultado << std::endl;
}