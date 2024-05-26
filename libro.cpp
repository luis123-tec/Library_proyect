#include "libro.h"

Libro::Libro() {
  
}

Libro::Libro(int anio, std::string autor) : anio(anio), autor(autor) {}

int Libro::getAnio() {
  return anio;
}

std::string Libro::getAutor() {
  return autor;
}

void Libro::setAnio(int year) {
  anio = year;
}

void Libro::setAutor(std::string author) {
  autor = author;
}
std::string Libro::getTipoProducto() { //Metodo para regresar el tipo de producto
    return "Libro";
}
