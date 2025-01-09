#include <iostream>
#include <fstream>
#include <string>

std::string RotateVowels(std::string& phrase){
  std::string result = phrase;
    for(char& character : result) {
      switch(character) {
        case 'a': 
          character = 'e';
          break;
        case 'e':
          character = 'i';
          break;
        case 'i':
          character = 'o';
          break;
        case 'o':
          character = 'u';
          break;
        case 'u':
          character = 'a';
          break;
        default:
          break;
      }
    }

    return result;
}

int main(int argc, char* argv[]){
  std::string filename = argv[1];

  std::ifstream file(filename);
  std::string line;

  while(getline(file, line)) {
    std::cout << RotateVowels(line) << std::endl;
  }

  file.close();
  return 0;
}