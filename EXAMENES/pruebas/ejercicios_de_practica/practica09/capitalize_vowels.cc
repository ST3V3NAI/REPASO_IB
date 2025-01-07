/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file capitalize_vowels.cc
 * @author Steven
 * @date 2025-01-07
 * @brief Programa que capitaliza las vocales de una cadena de texto
 * @bug There are no known bugs
*/

#include <iostream>
#include <string>


void CapitalizeVowels(std::string& text) {
  for(char& character : text) {
    if (tolower(character) == 'a' || tolower(character) == 'e' || tolower(character) == 'i' || tolower(character) == 'o' || tolower(character) == 'u') {
      character = toupper(character);
      std::cout << character;
    } else {
      character = tolower(character);
      std::cout << character;
    }
  }
}

int main() {
  std::string text;

  std::getline(std::cin, text);
  
  CapitalizeVowels(text);

  return 0;
}