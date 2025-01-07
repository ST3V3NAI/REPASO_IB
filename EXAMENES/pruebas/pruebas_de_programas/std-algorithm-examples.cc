#include <iostream>          // std::cout, std::endl
#include <vector>
#include <algorithm>         // sort 
#include <numeric>           // accumulate 

using namespace std;

int main() {
  std::vector<double>my_vector{8.0, 4.0, 6.0, 8.0, 19.0, 21.0, 35.0, 74.0, 88.0};
  // std::vector<double>my_vector{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};

  std::sort(my_vector.begin(), my_vector.end());       // Sort ascending
  double sum = std::accumulate(my_vector.begin(), my_vector.end(), 0.0f);
  double product = std::accumulate(my_vector.begin(), my_vector.end(), 1.0f, std::multiplies<double>());
  cout << "sum: " << sum << " << product: " << product << endl;
  return 0;
}