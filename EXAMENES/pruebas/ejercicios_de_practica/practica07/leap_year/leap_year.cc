/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file leap_year.cc
 * @author Steven
 * @date 2025-01-07
 * @brief Definición de las funciones usadas para el programa leap_year
 * @bug There are no known bugs
*/

#include "leap_year.h"

/**
 * @brief Función que comprueba los parametros y explica al usuario como usar el programa
 * 
 * @param[in] argc Numero de cadenas pasadas
 * @param[in] argv Matriz de argumentos
 */

void Usage(int argc, char* argv[]){
  if(argc != 2) {
    std::cout << argv[0] << " : Este programa ha sido ejecutado con el numero incorrecto de parametros." << std::endl;
    std::cout << "Pruebe a teclear: " << argv[0] << " --help para más información. " << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
    if(parameter == "--help") {
      const std::string hHelpText = "Este programa necesita un año para que funcione correctamente.\
                                     Pruebe a ejecutar el programa así: <ejecutable> <año>";
       std::cout << hHelpText << std::endl;
       exit(EXIT_SUCCESS);
    }
}

/**
 * @brief Función que comprueba si un año es bisiesto
 * 
 * @param[in] year Año a comprobar
 * @return true Si el año es bisiesto
 * @return false Si el año no es bisiesto
 */

bool LeapYear(int year) {
  if((year % 4 == 0 &&  year % 100 != 0) || year % 400 == 0) {
    return true;
  } else {
    return false;
  }
}

