#include "algoritmo_de_luhn.h"

bool IsValid(std::string number) {
  if (number.length() <= 4) {
    std::cout << "Numero no valido" << std::endl;
  }

  int suma{0};

  for(int i = number.length() - 1; i >= 0; i--) {
  int posicion = 1; 
    char character = number[i];

    if(character < '0' || character > '9') {
      continue;
    }

    int digit = static_cast<int>(character);

    if(posicion % 2 == 0) {
      digit *= 2;
      suma += digit / 10 + digit % 10;
    } else {
      suma += digit;
    }

    posicion++;
  }

  std::cout << suma << std::endl;
  return (suma % 10 == 0);
}