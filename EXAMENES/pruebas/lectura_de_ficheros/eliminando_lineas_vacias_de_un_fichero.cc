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
    while(getline(fichero1, lineas)) {
      if(lineas != ""){
        fichero2 << lineas << std::endl;
    }
  }

  fichero1.close();
  fichero2.close();

  }

  return 0;
}