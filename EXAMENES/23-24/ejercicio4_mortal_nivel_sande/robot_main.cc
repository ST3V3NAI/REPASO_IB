#include "robot.h"

int main() {
  const Point2D posicion(7, 5);
  const Direction orientacion = Direction::Norte;

  Robot c3p0("c3p0", posicion, orientacion, 0);
  c3p0.Avanzar();
  c3p0.GiroDerecha();
  c3p0.Avanzar();

  Robot r2d2("r2d2", posicion, Direction::Sur, 0);

  std::cout << c3p0 << std::endl;
  std::cout << r2d2 << std::endl;

  return 0;
}
