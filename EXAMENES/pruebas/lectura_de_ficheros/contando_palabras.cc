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

#include <iostream> // Flujos de entrada salida
#include <fstream> // Para poder usar lectura, entrada y salida de archivos
#include <string> // Para cadenas de texto
#include <sstream> // Para poder usar istringstream

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

  std::string lineas; 
  int contador_de_lineas{0}, contador_de_caracteres{0}, contador_de_palabras{0};

  while(getline(archivo1, lineas)) {
    contador_de_lineas++;
    contador_de_caracteres += lineas.length();

    std::istringstream streamLineas(lineas);
    std::string palabras;
    while(streamLineas >> palabras){
      contador_de_palabras++;
    }
  }

  archivo1.close();

  std::cout << " Este texto tiene: \n"; 
  std::cout << "\tLineas: " << contador_de_lineas << std::endl;
  std::cout << "\tPalabras: " << contador_de_palabras << std::endl;
  std::cout << "\tCaracteres: " << contador_de_caracteres << std::endl;
               

  return 0;

}