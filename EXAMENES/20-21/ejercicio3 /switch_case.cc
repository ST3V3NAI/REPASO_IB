/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file switch_case.cc
 * @author Steven
 * @date 2025-01-05
 * @brief Implementación de las funciones usadas en el programa switch_case
 * @bug There are no known bugs
*/

#include "switch_case.h"


/**
 * @brief Función que muestra el uso del programa
 * 
 * @param[in] argc Numero de argumentos
 * @param[in] argv Matriz o Array de argumentos
 */
void Usage(int argc, char *argv[]) {
  if(argc != 2) {
    std::cout << argv[0] << ": Faltan o son erroneos los argumentos." << std::endl;
    std::cout << "Teclea :" << argv[0] << " --help para más información sobre el erorr o programa." << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "Este programa convierte cambia una frase con minúsculas y mayúscualas a su contrario.\
                                   El programa debiera usarse así: <ejecutable> <frase> \n";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS); 
  }
}


/**
 * @brief Función que convierte una cadena de texto a mayúsculas o minúsculas
 * 
 * @param[in] phrase La frase que se va a convertir
 * @return std::string La frase convertida
 */
std::string SwitchCase(std::string& phrase) {
  for(char& i : phrase) {
    if(std::islower(i)) {
      i = std::toupper(i);
    } else {
      i = std::tolower(i);
    }
  }

  return phrase;
}

