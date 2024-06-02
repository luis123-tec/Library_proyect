#include "empleado.h"
#include "inventario.h"
#include <iostream>


Empleado::Empleado() {}

Empleado::Empleado(int num) : num_empleado(num) {}

Empleado::Empleado(Inventario* inv) : inventario(inv) {}

int Empleado::getNumEmpleado() {
  return num_empleado;
}

void Empleado::setNumEmpleado(int num) {
  num_empleado = num;
}
std::string Empleado::getTipoPersona() {
  return "Trabajador";
}
void Empleado::visualizarInventario() {
  
  std::cout << "Inventario del empleado:" << std::endl;
  inventario->mostrarInventario();
}
void Empleado::modificarInventario() {
  
  inventario->modificarInventario();
}
