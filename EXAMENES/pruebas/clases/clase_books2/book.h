/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file book.h
 * @author Steven
 * @date 2025-01-09
 * @brief Clase Books y declaración de la función Usage
 * @bug There are no known bugs
*/

#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>


/* Clase Books */
class Book {
  public:
    // Constructor de la clase Books
    Book(std::string& titulo_de_libro, int fecha_de_publiacion, int precio);
    
    // Método de la GetPrice de la clase Books
    double GetPriceWithTax(double tax) const; 

    // Operador de inserción de la clase Books
    friend std::ostream& operator<<(std::ostream& out, const Book& libros);
  private:
    std::string titulo_de_libro_;
    int fecha_de_publicacion_;
    int precio_;
};

std::ostream& operator<<(std::ostream& out, const Book& book);

#endif // BOOKS_H