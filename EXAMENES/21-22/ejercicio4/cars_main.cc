/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file cars_main.cc
 * @author Steven
 * @date 2025-01-06
 * @brief This file contains the main function of the program
 * @bug There are no known bugs
*/

#include "cars.h"

int main() {
  Car car1{"Audi", "Y272384", 20000};
  Car car2{"BMW", "Y272385", 10000};

  if(car1 < car2) {
    std::cout << "Car 1 has less kilometers than car 2" << std::endl;
  } else {
    std::cout << "Car 1 has more kilometers than car 2" << std::endl;
  }

  return 0;

}