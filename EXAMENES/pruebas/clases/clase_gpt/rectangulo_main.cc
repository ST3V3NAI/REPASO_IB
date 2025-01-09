/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file rectangulo_main.cc
 * @author Steven
 * @date 2025-01-08
 * @brief Descripción del programa
 * @bug There are no known bugs
*/

#include <iostream>
#include "rectangulo.h"
#include "point2d.h"

int main() {
    Point2D esquina1(2, 5);
    Point2D esquina2(8, 1);

    Rectangle rectangulo(esquina1, esquina2);

    rectangulo.Show();
    std::cout << "Área: " << rectangulo.Area() << std::endl;
    std::cout << "Perímetro: " << rectangulo.Perimetro() << std::endl;

    Point2D punto(4, 3);
    if (rectangulo.EsInterior(punto)) {
        std::cout << "El punto está dentro del rectángulo." << std::endl;
    } else {
        std::cout << "El punto está fuera del rectángulo." << std::endl;
    }

    rectangulo.Move(2, -1);
    rectangulo.Show();

    return 0;
}
