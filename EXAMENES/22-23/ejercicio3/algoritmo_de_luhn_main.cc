#include "algoritmo_de_luhn.h"

int main() {
  std::string number; 
  std::getline(std::cin, number);
  if (IsValid(number)) {
    std::cout << "Numero valido" << std::endl;
  } else {
    std::cout << "Numero no valido" << std::endl;
  }
  return 0;
}