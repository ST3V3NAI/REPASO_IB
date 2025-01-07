/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file cars.h
 * @author Steven
 * @date 2025-01-06
 * @brief This file declares the Car class and its methods
 * @bug There are no known bugs
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // Para std::stoi
#include <algorithm> // Para std::sort

class Car {
  public: 
    Car(std::string model, std::string plate, int kilometers);
    void setModel(std::string model);
    void setBrand(std::string plate);
    void setKilometers(int kilometers);

    std::string model () const { return model_; }
    std::string brand () const { return plate_; }
    int kilometers() const { return kilometers_; }
    
    friend std::ostream& operator<<(std::ostream& os, const Car& car);
    friend std::istream& operator>>(std::istream& is, Car& car);
    bool operator<(const Car& car) const;

  private:
    std::string model_;
    std::string plate_;
    int kilometers_; 
};
