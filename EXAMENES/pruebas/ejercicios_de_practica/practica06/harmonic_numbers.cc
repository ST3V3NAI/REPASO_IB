/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file harmonic_numbers.cc
 * @author Steven
 * @date 2025-01-07
 * @brief This programa reads a number n and print the n-th harmonic number, defined as Hn = 1/1 + 1/2 + ... + 1/n
 * @bug There are no known bugs
*/


#include <iostream>
#include <iomanip>

int main() {
  float harmonic_number{0}, harmonic_sum{0};

  std::cin >> harmonic_number;

  for(int i = 1; i <= harmonic_number; i++) {
    harmonic_sum += 1.0 / i;
  }

  std::cout << std::fixed << std::setprecision(4) << harmonic_sum << std::endl;

  return 0;
}