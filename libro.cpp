#include "libro.h"

Libro::Libro(std::string tit, double prc, int stk, int year, std::string auth) : 
    Producto(tit, prc, stk), anio(year), autor(auth) {}


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
std::string Libro::getTipoProducto() { 
    return "Libro";
}

void Libro::displayInfo() const { 
  Producto::displayInfo();
  std::cout << "  Autor: " << autor << std::endl; 
  std::cout << "  Año: " << anio << std::endl; // Sobreescritura
}



