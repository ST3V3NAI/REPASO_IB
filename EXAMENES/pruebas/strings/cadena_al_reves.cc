#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string cadena{ " " };

    std::cin >> cadena; 

    std::reverse(cadena.begin(), cadena.end());

    std::cout << cadena;

    return 0;
}