/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file suma_de_digitos.cc
 * @author Steven
 * @date 2025-01-07
 * @brief Definición de las funciones usadas para el programa suma_de_digitos
 * @bug There are no known bugs
*/

#include "suma_de_digitos.h"


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
      const std::string hHelpText = "Este programa necesita un numero natural para que funcione correctamente.\
                                     Pruebe a ejecutar el programa así: <ejecutable> <numero_natural>";
       std::cout << hHelpText << std::endl;
       exit(EXIT_SUCCESS);
    }
}

/**
 * @brief Función que suma los digitos de un numero
 * 
 * @param[in] number Numero al que se le suman los digitos
 * @return Suma de los digitos del numero
 */
int SumaDigitos(int number) {
  int suma{0};
   while(number > 0) {
      suma += number % 10;
      number /= 10;
   }

   return suma;
}