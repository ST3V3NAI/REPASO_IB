/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file desinflado.cc
 * @author Steven
 * @date 2025-01-07
 * @brief Este programa cambia de mayúsculas a minúsculas y viceversa
 * @bug There are no known bugs
*/

#include <iostream>

int main() {
  char character{' '}, character2{' '};
  
  std::cin >> character;

  if (character >= 'A' && character <= 'Z') {
    character2 = character + 32;
    std::cout << " Entrada: " << character << std::endl;
    std::cout << " Salida: " << character2 << std::endl; 
  } else {
    character2 = character - 32;
    std::cout << " Entrada: " << character << std::endl;
    std::cout << " Salida: " << character2 << std::endl;
  }

  return 0;

}