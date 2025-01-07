/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file add_one_second.cc
 * @author Steven
 * @date 2025-01-07
 * @brief Programa que añade un segundo a la hora actual
 * @bug There are no known bugs
*/

#include <iostream> // Flujos de entrada y salida

int main() {
  int horas{0}, minutos{0}, segundos{0}; // Declaración de variables

  std::cin >> horas >> minutos >> segundos; // Pedimos la hora actual

  if(horas >= 0 && horas <= 23 && minutos >= 0 && minutos <= 59 && segundos >= 0 && segundos <= 59) {
    
    if(segundos == 59) {
      segundos = 00;
      minutos++;
    } else if (minutos == 59) {
        minutos = 00;
        horas++;      
    } else if (horas == 23 && minutos == 59 && segundos == 59) {
      horas = 00;
      minutos = 00;
      segundos = 00;
    } else {
      segundos++;
    }

    std::cout << horas << ":" << minutos << ":" << segundos << std::endl; // Mostramos la hora actualizada

  }

}