/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file cars.cc
 * @author Steven
 * @date 2025-01-06
 * @brief This file contains the implementation of the Car class and its methods
 * @bug There are no known bugs
*/

#include "cars.h"


Car::Car(std::string model, std::string plate, int kilometers) : model_(model), plate_(plate), kilometers_(kilometers) {}

/**
 * @brief The setter of the model attribute
 * 
 * @param[in] model The model of the car
 */
void Car::setModel(std::string model) {
  model_ = model;
}

/**
 * @brief The setter of the plate attribute
 * 
 * @param[in] plate The plate of the car
 */

void Car::setBrand(std::string plate) {
  plate_ = plate;
}

/**
 * @brief The setter of the kilometers attribute
 * 
 * @param[in] kilometers The kilometers of the car
 */
void Car::setKilometers(int kilometers) {
  kilometers_ = kilometers;
}

/**
 * @brief The ostream operator overload
 * 
 * @param[in] os The output stream
 * @param[in] car The car object
 * @return std::ostream& 
 */
std::ostream& operator<<(std::ostream& os, const Car& car) {
  os << "Model: " << car.model() << " Plate: " << car.brand() << " Kilometers: " << car.kilometers();
  return os;
}


/**
 * @brief The istream operator overload
 * 
 * @param is The input stream
 * @param car The car object
 * @return std::istream& 
 */
std::istream& operator>>(std::istream& is, Car& car) {
  std::string model;
  std::string plate;
  int kilometers;
  is >> model >> plate >> kilometers;
  car.setModel(model);
  car.setBrand(plate);
  car.setKilometers(kilometers);
  return is;
}


/**
 * @brief The less than operator overload
 * 
 * @param car The car object
 * @return true 
 * @return false 
 */
bool Car::operator<(const Car& car) const {
  return kilometers_ < car.kilometers_;
}

