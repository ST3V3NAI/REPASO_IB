#include <iostream>
#include <string>

int main() {
  std::string cadena1{ " " }, cadena2{ " " };

  std::cin >> cadena1 >> cadena2;

  if(cadena1.size() != cadena2.size()) {
    std::cout << "No son anagramas" << std::endl;
  } else {
    std::cout << "Son anagramas" << std::endl;
  }

}