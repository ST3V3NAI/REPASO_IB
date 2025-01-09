/**
 * Universidad de La Laguna
 * Escuela Superior de Ingenierías y Tecnologías
 * Grado de Ingenieria Informática 
 * Informática Básica 2024-24
 * 
 * @author Abolaji Ibidokun Steven alu0101619613@ull.edu.es
 * @date Jan 1, 2025
 * @brief Este programa abre un fichero de texto y envia su contenido 
 * a otro fichero de texto
 * @bug No known bugs
 */


#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
  if(argc != 3) {
    std::cerr << "Se ha producido un error al intentar abrir el archivo" << std::endl;
    std::cout << "Intentalo de nuevo" << std::endl;
    exit(EXIT_FAILURE);
  }

  std::ifstream archivo1(argv[1]);
  if(!archivo1.is_open()) {
    std::cerr << "Error: No se pude abrir el archivo de entrada: " << argv[1] << std::endl;
    exit(EXIT_FAILURE);
  }

  std::ofstream archivo2(argv[2]);
  if(!archivo2.is_open()) {
    std::cerr << "Error: no se pudo abrir el archivo de salida: " << argv[2] << std::endl;
    exit(EXIT_FAILURE);
    archivo1.close();
  }

  std::string linea;
  while(std::getline(archivo1, linea)) {
     archivo2 << linea << std::endl;
  }

  archivo1.close();
  archivo2.close();

}