/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file leap_year_main.cc
 * @author Steven
 * @date 2025-01-07
 * @brief Programa main que sirve de nexo para todas las funciones
 * @bug There are no known bugs
*/

#include "leap_year.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  int year = std::atoi(argv[1]);

  if(LeapYear(year) == 0) {
    std::cout << "NO" << std::endl;
  } else {
    std::cout << "YES" << std::endl;
  }

  return 0;
}