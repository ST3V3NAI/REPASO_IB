/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file switch_case_main.cc
 * @author Steven
 * @date 2025-01-05
 * @brief Programa main y nexo de las funciones usadas en el programa switch_case
 * @bug There are no known bugs
*/

#include "switch_case.h"

int main(int argc, char *argv[]) {
  Usage(argc, argv);

  std::string phrase{argv[1]};

  std::cout << SwitchCase(phrase) << std::endl;

  return 0;
}