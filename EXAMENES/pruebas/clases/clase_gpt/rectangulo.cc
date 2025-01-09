#include "rectangulo.h"
#include "point2d.h"
#include <iostream>

// Constructor por defecto
Rectangle::Rectangle() 
          : esquina_superior_izquierda_{0, 0}, esquina_inferior_derecha_{0, 0} {}

// Constructor con coordenadas
Rectangle::Rectangle(Point2D esquina1, Point2D esquina2) 
         : esquina_superior_izquierda_{esquina1}, esquina_inferior_derecha_{esquina2} {}

void Rectangle::Show() const {
  std::cout << "Esquina Superior Izquierda: ";
  esquina_superior_izquierda_.Show();
  std::cout << "Esquina Inferior Derecha: ";
  esquina_inferior_derecha_.Show();
}

double Rectangle::Area() const {
  double ancho = esquina_inferior_derecha_.GetX() - esquina_superior_izquierda_.GetX();
  double alto = esquina_superior_izquierda_.GetY() - esquina_inferior_derecha_.GetY();
  return ancho * alto;
}

double Rectangle::Perimetro() const {
  double ancho = esquina_inferior_derecha_.GetX() - esquina_superior_izquierda_.GetX();
  double alto = esquina_superior_izquierda_.GetY() - esquina_inferior_derecha_.GetY();
  return 2 * (ancho + alto);
}

bool Rectangle::EsInterior(const Point2D& punto) const {
    return (punto.GetX() >= esquina_superior_izquierda_.GetX() &&
            punto.GetX() <= esquina_inferior_derecha_.GetX() &&
            punto.GetY() <= esquina_superior_izquierda_.GetY() &&
            punto.GetY() >= esquina_inferior_derecha_.GetY());
}

void Rectangle::Move(int dx, int dy) {
    esquina_superior_izquierda_.Move(dx, dy);
    esquina_inferior_derecha_.Move(dx, dy);
}