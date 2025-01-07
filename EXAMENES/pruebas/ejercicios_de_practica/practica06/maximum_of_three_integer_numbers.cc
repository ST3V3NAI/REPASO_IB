/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file maximum_of_three_integer_numbers.cc
 * @author Steven
 * @date 2025-01-07
 * @brief Este programa calcula el máximo de tres números enteros
 * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int number_a{0}, number_b{0}, number_c{0};

  std::cin >> number_a >> number_b >> number_c; // Pedimos los numeros por pantalla

  if(number_a > number_b && number_a > number_c) { // Comprobamos que numeros son mayores y los imprimimos
    std::cout << " El mayor número es: " << number_a << std::endl;
  } else if (number_b > number_a && number_b > number_c) {
    std::cout << " El mayor número es: " << number_b << std::endl;
  } else {
    std::cout << " El mayor número es: " << number_c << std::endl;
  }

  return 0;
}
