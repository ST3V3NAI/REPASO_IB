#include <iostream>
#include <vector>

int main() {
  std::vector<int> numeros{1,2,2,3,4,4};
  std::vector<int> new_numeros{};

  for(int i = 0; i < numeros.size(); i++) {
    if(i == 0 || numeros[i] != numeros[i - 1]) {
      new_numeros.push_back(numeros[i]);
    }
  }

  std::cout << "Vector sin numeros duplicados: [";
  for(size_t i = 0; i < new_numeros.size(); i++) {
    std::cout << new_numeros[i];
    if(i != new_numeros.size() - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
 
}