#include <iostream>
#include <vector>

int main() {
  std::vector<int> numeros{}; 
  int suma{0}, numero{0};
  
  while(std::cin >> numero) {
    numeros.push_back(numero);
  }

  for(int i : numeros) {
    suma += i;
  }

  std::cout << "Suma de los elementos: " << suma << std::endl;


}