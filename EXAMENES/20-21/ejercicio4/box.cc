/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file box.cc
 * @author Steven
 * @date 2025-01-06
 * @brief Implementación de la clase Box para la sobrecarga de operadores
 * @bug There are no known bugs
*/

#include <iostream>

class Box {
  public:
  //Constructor por defecto de la clase box
  Box() : length_{0.0}, width_{0.0}, height_{0.0} {}
  //Constructor de la clase box
  Box(double length, double width, double height) : length_{length}, width_{width}, height_{height} {}

  // Destructor de la clase box
  ~Box() {}

  double length() const { return length_; }
  double width() const { return width_; }
  double height() const { return height_; }

  friend std::ostream& operator<<(std::ostream& os, const Box& box); 
  friend std::istream& operator>>(std::istream& is, Box& box);


 bool operator==(const Box& box) const {
    return length_ == box.length_ && width_ == box.width_ && height_ == box.height_;
 }

  private:
    double length_;
    double width_;
    double height_;
};

std::ostream& operator<<(std::ostream& os, const Box& box) {
  os << "Box(" << box.length_ << ", " << box.width_ << ", " << box.height_ << ")";
  return os;
}

std::istream& operator>>(std::istream& is, Box& box) {
  is >> box.length_ >> box.width_ >> box.height_;
  return is;
}

int main() {
  Box box1(1.0, 2.0, 3.0);
  Box box2(1.0, 2.0, 3.0);
  Box box3(4.0, 5.0, 6.0);

  if(box1 == box2) {
    std::cout << "box1 and box2 are equal" << std::endl;
  } else {
    std::cout << "box1 and box2 are not equal" << std::endl;
  }

  if(box1 == box3) {
    std::cout << "box1 and box3 are equal" << std::endl;
  } else {
    std::cout << "box1 and box3 are not equal" << std::endl;
  }

  std::cin >> box1;
  std::cout << "box1 = " << box1; 

  return 0;
}