#include "usuario.h"

Usuario::Usuario() {}

Usuario::Usuario(int id) : identificacion(id) {}

int Usuario::getIdentificacion() {
  return identificacion;
}

void Usuario::setIdentificacion(int id) {
  identificacion = id;
}
std::string Usuario::getTipoPersona() {
  return "Comprador";
}
