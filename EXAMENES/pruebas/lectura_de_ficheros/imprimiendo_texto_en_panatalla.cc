/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file contando_palabras.cc
 * @author Steven
 * @date 2025-01-09
 * @brief Este programa al recibir un archivo cuentas las palabras que hay dentro del mismo
 * @bug There are no known bugs
*/

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
  if(argc != 2) {
    std::cerr << "Error: Al programa le falta o le sobra algún fichero" << std::endl;
    std::cout << "Intentelo de nuevo" << std::endl;
  } 

  std::ifstream archivo1(argv[1]);
  if(!archivo1.is_open()){
    std::cerr << "El archivo no se abrió correctamente" << std::endl;
    exit(EXIT_FAILURE);
  }

  std::string linea; 
  while(getline(archivo1, linea)) {
    std::cout << linea << std::endl;
  }

  archivo1.close();

}