
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

void Libro::displayInfo() { 
  Producto::displayInfo();
  std::cout << "  Tipo: Libro" << std::endl; 
}
void Libro::displayInfo(int year, std::string author) { 
  
  Producto::displayInfo();
  std::cout << "  Tipo: Libro" << std::endl;
  std::cout << "  Autor: " << author << std::endl; 
  std::cout << "  Año: " << year << std::endl; 
}

