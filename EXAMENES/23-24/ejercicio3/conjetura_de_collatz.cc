/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file conjetura_de_collatz.cc
 * @author Steven
 * @date 2025-01-06
 * @brief This program calculates the number of iterations needed to reach 1 in the Collatz conjecture.
 * @bug There are no known bugs
*/

#include <iostream>


void Usage(int argc, char* argv[]) {
  if(argc != 2) {
    std::cout << argv[0] << ": Falta un número natural como parametro. " << std::endl;
    std::cout << "Pruebe teclear: " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string hHelpText = "Este programa calcula el numero de iteraciones necesarias para llegar a 1 al haberle dado un numero natural N.\
                                   Pruebe a poner: <exeutable> <(numero > 0)>";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  int number = std::atoi(argv[1]);


  if (number < 0) {
    std::cout << "El numero introducido no es un numero positivo" << std::endl;
    exit(EXIT_SUCCESS);
  } else {
    std::cout << number << " "; 

    while(number > 0) {
      if(number == 1) {
        break;
      } else if (number % 2 == 0) {
        number = number / 2;
      } else {
        number = (3 * number) + 1;
      }
      std::cout << number << " "; 
    }
  }

  return 0;
}
