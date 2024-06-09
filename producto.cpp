
#include "producto.h"

Producto::Producto() {}

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
std::ostream& operator<<(std::ostream& out, const Producto& product) {
    out << "Título: " << product.title << "\n";
    out << "Precio: " << product.price << "\n";
    out << "Stock: " << product.stock << std::endl; // Datos comunes
    return out;
    //Comentario, creo que esto se podria aplicar al mostrarInfo de la clase persona siguiendo la misma lógica
}
void Producto::displayInfo() const {
  std::cout << *this;
}
