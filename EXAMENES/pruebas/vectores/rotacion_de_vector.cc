#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<int> vector{};
  int numeros{};

  while(std::cin >> numeros) {
    vector.emplace_back(numeros);
  }

  std::reverse(vector.begin(), vector.end());
  

  std::cout << "Vector rotado: [";
  for(size_t i = 0; i < vector.size(); i++) {
    std::cout << vector[i];
      if(i != vector.size() - 1){
        std::cout << ",";
      }
  }

  std::cout << "] " << std::endl; 

  return 0;
}