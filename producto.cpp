#include "producto.h"

Producto::Producto() : title("El principito"), price(16.50), stock(2) {}

Producto::Producto(std::string tit, double prc, int stk) : title(tit), price(prc), stock(stk) {}

std::string Producto::getTitle() {
  return title;
}

double Producto::getPrice() {
  return price;
}

int Producto::getStock() {
  return stock;
}

void Producto::setTitle(std::string tit) {
  title = tit;
}

void Producto::setPrice(double prc) {
  price = prc;
}

void Producto::setStock(int stk) {
  stock = stk;
}

void Producto::displayInfo() {
  std::cout << "Titulo: " << title << ", Precio: " << price << ", Stock: " << stock << std::endl;
}
