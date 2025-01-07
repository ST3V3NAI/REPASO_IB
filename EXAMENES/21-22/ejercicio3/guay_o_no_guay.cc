/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file guay_o_no_guay.cc
 * @author Steven
 * @date 2025-01-05
 * @brief Programa que dice si un numero es guay o no guay
 * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int position{1}, sum_odd_pos{0}, number{0};

  std::cin >> number;

  while(number > 0) {
    if (position % 2 == 0) {
        sum_odd_pos += number % 2;
    } else {
        sum_odd_pos += number % 10;;
    }

    number /= 10;
    position++;
  }

  if(sum_odd_pos % 2 == 0) {
    std::cout << "El numero es guay" << std::endl;
  } else {
    std::cout << "El numero no es guay" << std::endl;
  }

  return 0;
}