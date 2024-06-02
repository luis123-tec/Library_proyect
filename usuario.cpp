#include "usuario.h"
#include <iostream>



Usuario::Usuario() {}

Usuario::Usuario(int id) : identificacion(id) {}

Usuario::Usuario(Inventario* inv) : inventario(inv) {}

int Usuario::getIdentificacion() {
  return identificacion;
}

void Usuario::setIdentificacion(int id) {
  identificacion = id;
}
std::string Usuario::getTipoPersona() {
  return "Comprador";
}
void Usuario::visualizarInventario() {
  std::cout << "Cliente puede ver inventario." << std::endl;
  inventario->mostrarInventario();
}
void Usuario::modificarInventario() {
  std::cout << "Cliente no puede modificar el inventario." << std::endl;
  inventario->modificarInventario();
}
