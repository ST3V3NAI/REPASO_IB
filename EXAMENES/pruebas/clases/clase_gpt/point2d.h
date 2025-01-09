#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>

class Point2D {
private:
    int x;
    int y;

public:
    // Constructor por defecto
    Point2D();

    // Constructor con parámetros
    Point2D(int x, int y);

    // Métodos para obtener las coordenadas
    int GetX() const;
    int GetY() const;

    // Método para mostrar las coordenadas
    void Show() const;

    // Método para mover el punto
    void Move(int dx, int dy);
};

#endif
