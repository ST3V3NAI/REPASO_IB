#include <iostream>
#include <string>

int main() {
  std::string phrase{ " " };
  int contador_vocales{0}, contador_consonantes{0};

  std::cin >> phrase; 

  for(char& i : phrase) {
    if(i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U' ||
       i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') {
      contador_vocales++;
    } else {
      contador_consonantes++;
    }
  }

  std::cout << "Vocales: " << contador_vocales << std::endl;
  std::cout << "Consonantes: " << contador_consonantes << std::endl;

  return 0;
}