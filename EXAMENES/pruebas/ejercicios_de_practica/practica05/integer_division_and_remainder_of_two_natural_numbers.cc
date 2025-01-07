/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file integer_division_and_remainder_of_two_natural_numbers.cc
 * @author Steven
 * @date 2025-01-07
 * @brief Este programa calcula la división entera y el resto de dos números naturales
 * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int dividendo{0}, divisor{0}, cociente{0}, resto{0};

  std::cin >> dividendo >> divisor; // Programa pide el dividendo y el divisor

  if(divisor > 0) { // Comprobamos que el divisor sea mayor que 0

    cociente = dividendo / divisor; // Almacenamos la división en la variable cociente
    resto = dividendo % divisor; // Almacenamos el resto en la variable resto

    // Mostramos por pantalla el cociente y el resto
    std::cout << "Cociente: " << cociente << std::endl;
    std::cout << "Resto: " << resto << std::endl;
  } else { // En caso de que el divisor no sea positivo imprime mensaje
    std::cout << "El divisor no es positivo " << std::endl;
  }

  return 0;

}