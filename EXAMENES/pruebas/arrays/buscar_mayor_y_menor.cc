#include <iostream>
#include <vector>

int main() {
  std::vector<int> numeros{3, 9, 1, 7};
  int mayor{0}, menor{999};

  for(int i = 0; i < numeros.size() - 1; i++) {
    if(numeros[i] > mayor) {
      mayor = numeros[i];
    } else if ( numeros[i] < menor) {
      menor = numeros[i];
    }
  }

  std::cout << "El mayor es: " << mayor << std::endl;
  std::cout << "El menor es: " << menor << std::endl;
}