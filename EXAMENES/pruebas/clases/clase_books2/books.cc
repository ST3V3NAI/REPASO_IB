/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file books.cc
 * @author Steven
 * @date 2025-01-09
 * @brief Programa principal de gestión de libros
 * @bug There are no known bugs
*/

#include <iomanip>
#include <string>
#include <iostream>
#include "book.h"

int main(int argc, char* argv[]){
  if(argc != 2) {
    std::cout << argv[0] << " <tax>\n";
    return 1;
  }
  double tax{std::stod(argv[1])};
  Book quijote{"El quijote de la Mancha" , 1605, 21};
  Book lazarillo{"El lazarillo de Tormes", 1554, 18};
  Book pilares{"Los pilares de la Tierra", 1989, 27};
  std::cout << std::fixed << std::setprecision(2)
            << quijote << ", " << quijote.GetPriceWithTax(tax) << std::endl
            << lazarillo << ", " << lazarillo.GetPriceWithTax(tax) << std::endl
            << pilares << ", " << pilares.GetPriceWithTax(tax) << std::endl;
             

  return 0;
}