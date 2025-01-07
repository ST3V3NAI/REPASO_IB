/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file numbers_in_an_interval.cc
 * @author Steven
 * @date 2025-01-07
 * @brief Este programa imprime los números de un intervalo
 * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int limite_inferior{0}, limite_superior{0};

  std::cin >> limite_inferior >> limite_superior; // Pedimos los limites del intervalo

  if(limite_inferior < limite_superior) { // Comprobamos que el limite inferior sea
    for(int i = limite_inferior; i <= limite_superior; i++) {
      std::cout << i; // Imprimimos los números del intervalo
      if(i < limite_superior) {
        std::cout << ", ";
      } else {
        std::cout << "."; 
      }
    }
  } else if (limite_inferior > limite_superior) {
    std::cout << " " << std::endl;
  } else {
    std::cout << limite_inferior << std::endl;
  }

  



  return 0;
}