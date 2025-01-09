#include <iostream>
#include <string>

int main() {
  std::string phrase{" "};
  std::string palabra{" "};

  std::cout << "Dime una frase: ";
  std::getline(std::cin, phrase);

  std::cout << "Dime palabra que quieres buscar: ";
  std::cin >> palabra; 

  if (phrase.find(palabra) != std::string::npos) {
    std::cout << "La palabra " << palabra << " está presente en la frase " << std::endl;
  } else {
    std::cout << "La palabra " << palabra << " no está presente en la frase " << std::endl;
  }



  return 0;
}