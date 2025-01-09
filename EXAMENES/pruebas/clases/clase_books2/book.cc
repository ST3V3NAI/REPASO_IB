/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file book.cc
 * @author Steven
 * @date 2025-01-09
 * @brief Clase gestión de libros
 * @bug There are no known bugs
*/

#include <iostream>
#include <string>
#include "book.h"


/**
 * Constructor de la Clase
 * @param[in] titulo_de_libro Titulo de libro
 * @param precio Precio de venta
 * @param fecha_de_publicacion Año de publicación
 */
Book::Book(std::string& titulo_de_libro, int fecha_de_publicacion, int precio) : 
          titulo_de_libro_{titulo_de_libro}, fecha_de_publicacion_{fecha_de_publicacion}, precio_{precio} {} 


/** Cáculo del precio de venta con impuesto
 * @param[in] tax Impuesto de venta
 * @return Precio con impuesto
 */
double Book::GetPriceWithTax(double tax) const {
  return precio_ * (1.0 + 0.01 * tax);
}


/** Operador de inserció el flujo de salida para la clase Book
 * @param[out] out Flujo de salida
 * @param[in] book Libro 
 * @return Referencia al flujo de salida
 */
std::ostream& operator<<(std::ostream& out, const Book& libros){
  out << libros.titulo_de_libro_ << ", " << libros.fecha_de_publicacion_ << ", " << libros.precio_;
  return out;
}
