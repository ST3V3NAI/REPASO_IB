/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file serie_de_fibonacci_main.cc
 * @author Steven
 * @date 2025-01-07
 * @brief Programa main que sirve de nexo para todas las funciones
 * @bug There are no known bugs
*/

#include "serie_de_fibonacci.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  int number = std::stoi(argv[1]);

  FibonacciSerie(number);

  return 0;
}
