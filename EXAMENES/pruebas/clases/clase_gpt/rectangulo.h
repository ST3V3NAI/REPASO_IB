/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file rectangulo.h
 * @author Steven
 * @date 2025-01-08
 * @brief La clase rectángulo para el funcionmiento del programa 
 * @bug There are no known bugs
*/

#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "point2d.h"

class Rectangle {
  public:
    Rectangle();
    Rectangle(Point2D esquina_izq, Point2D esquina_der); 

    void Show() const;
    double Area() const;
    double Perimetro() const;
    bool EsInterior(const Point2D& punto) const;
    void Move(int dx, int dy);


  private:
    Point2D esquina_superior_izquierda_;
    Point2D esquina_inferior_derecha_;

};

#endif // RECTANGULO_H