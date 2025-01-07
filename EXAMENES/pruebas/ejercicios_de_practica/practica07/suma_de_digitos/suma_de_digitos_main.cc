/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file suma_de_digitos_main.cc
 * @author Steven
 * @date 2025-01-07
 * @brief Programa main que sirve de nexo para todas las funciones
 * @bug There are no known bugs
*/

#include "suma_de_digitos.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  int number = std::stoi(argv[1]);

  std::cout << SumaDigitos(number) << std::endl;

  return 0;
}