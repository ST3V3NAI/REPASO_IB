/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file comparando_dos_archivos.cc
 * @author Steven
 * @date 2025-01-09
 * @brief Programa que comprueba si dos archivos son iguales o diferentes
 * @bug There are no known bugs
*/

#include <iostream>
#include <string>
#include <fstream>

bool comparandoDosArchivosDeTexto(const std::string& archivo1, const std::string archivo2) {
  std::ifstream file1(archivo1);
  std::ifstream file2(archivo2);

  if(!file1.is_open() || !file2.is_open()) {
    std::cout << " Ha habido un error al intentar abrir alguno de los dos archivos.txt" << std::endl;
    exit(EXIT_FAILURE);
  }

  std::string lineas_del_primer_archivo;
  std::string lineas_del_segundo_archivo;

  while(getline(file1, lineas_del_primer_archivo) && getline(file2, lineas_del_segundo_archivo)) {
    if(lineas_del_primer_archivo != lineas_del_segundo_archivo) {
      return false;
    }
  }

  return true;
}


int main(int argc, char* argv[]) {
  if(argc != 3) {
    std::cerr << "El programa " << argv[0] << " requiere de dos archivos.txt para funcionar" << std::endl;
    exit(EXIT_FAILURE);
  }

  std::string archivo1(argv[1]);
  std::string archivo2(argv[2]);

  if(comparandoDosArchivosDeTexto(archivo1, archivo2) == 0) {
    std::cout << "Los archivos no son iguales " << std::endl;
  } else {
    std::cout << "Los archivos son iguales " << std::endl;
  }

  return 0;
}