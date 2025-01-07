/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file serie_de_fibonacci.cc
 * @author Steven
 * @date 2025-01-07
 * @brief Definición de las funciones usadas para el programa serie_de_fibonacci
 * @bug There are no known bugs
*/

#include "serie_de_fibonacci.h"

void Usage(int argc, char* argv[]){
  if(argc != 2) {
    std::cout << argv[0] << " : Este programa ha sido ejecutado con el numero incorrecto de parametros." << std::endl;
    std::cout << "Pruebe a teclear: " << argv[0] << " --help para más información. " << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
    if(parameter == "--help") {
      const std::string hHelpText = "Este programa necesita un numero natural para que funcione correctamente.\
                                     Pruebe a ejecutar el programa así: <ejecutable> <numero_natural>";
       std::cout << hHelpText << std::endl;
       exit(EXIT_SUCCESS);
    }
}


void FibonacciSerie(int number) {
  int termino_1{0}, termino_2{1}, siguiente_termino{0};

  if(number == 1) {
    std::cout << termino_1 << " ";
    return;
  } else {
    std::cout << termino_1 << " " << termino_2 << " ";

    for(int i = 2; i < number; i++) {
      siguiente_termino = termino_1 + termino_2;

      std::cout << siguiente_termino << " ";

      termino_1 = termino_2;
      termino_2 = siguiente_termino;
    }
  }
}