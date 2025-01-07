/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file hypotenuse.cc
 * @author Steven
 * @date 2025-01-07
 * @brief Programa que calcula la hipotenusa de dos numeros
 * @bug There are no known bugs
*/

#include <iostream>
#include <cmath>

double Hypotenuse(double side1, double side2) {
  double hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));
  return hypotenuse;
}

int main() {
  int side1{0}, side2{0};

  std::cin >> side1 >> side2; 

  std::cout << Hypotenuse(side1, side2) << std::endl;

  return 0;
}