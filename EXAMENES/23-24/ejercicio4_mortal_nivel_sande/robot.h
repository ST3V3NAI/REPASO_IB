#include "point2D.h"

namespace robot {
enum class Direction { Norte, Sur, Este, Oeste };

class Robot {
 public:
  Robot(const std::string& nombre, const Point2D& posicion, Direction direccion, int movimientos)
      : nombre_(nombre), posicion_(posicion), direccion_(direccion), cont_movimientos_(movimientos) {}

  void GiroDerecha() {
    switch (direccion_) {
      case Direction::Norte: direccion_ = Direction::Este; break;
      case Direction::Este: direccion_ = Direction::Sur; break;
      case Direction::Sur: direccion_ = Direction::Oeste; break;
      case Direction::Oeste: direccion_ = Direction::Norte; break;
    }
  }

  void Avanzar() {
    switch (direccion_) {
      case Direction::Norte: posicion_.y++; break;
      case Direction::Sur: posicion_.y--; break;
      case Direction::Este: posicion_.x++; break;
      case Direction::Oeste: posicion_.x--; break;
    }
    cont_movimientos_++;
  }

  friend std::ostream& operator<<(std::ostream& os, const Robot& robot) {
    os << robot.nombre_ << " posicion(" << robot.posicion_.x << "," << robot.posicion_.y << ") caminando " << robot.cont_movimientos_;
    return os;
  }

 private:
  std::string nombre_;
  Point2D posicion_;
  Direction direccion_;
  int cont_movimientos_;
};
}  // namespace robot
