/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file enumerando_frases.cc
 * @author Steven
 * @date 2025-01-09
 * @brief Este programa enumera las frases de un programa y las envia a otro archivo
 * @bug There are no known bugs
*/

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
  if(argc != 2) {
    std::cerr << argv[0] << ": Este programa necesita un <fichero.txt> para funcionar correctamente " << std::endl;
    exit(EXIT_FAILURE);
  }

  std::ifstream fichero1(argv[1]);

  if(!fichero1.is_open()){
    std::cerr << "El fichero no a podido ser abierto correctamente " << std::endl;
    return 1;
  } else {
    std::ofstream fichero2(" ficherosalida.txt ");

    std::string lineas;
    int contador_de_lineas{0};
    while(getline(fichero1, lineas)) {
      fichero2 << contador_de_lineas << ": " << lineas << std::endl;
      contador_de_lineas++;
    }
  }

  fichero1.close();

}