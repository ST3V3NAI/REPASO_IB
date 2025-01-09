#include <iostream>
#include <vector>

int main() {
  std::vector<int> vector{};
  int numeros{};

  while(std::cin >> numeros) {
    if(numeros == -1) {
      break;
    }
    vector.emplace_back(numeros);
  }

  std::cout << "Vector dinamico: [";
  for(size_t i = 0; i < vector.size(); i++) {
    std::cout << vector[i];
      if(i != vector.size() - 1){
        std::cout << ",";
      }
  }

  std::cout << "] " << std::endl; 

  return 0;
}