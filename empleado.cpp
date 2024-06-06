#include "empleado.h"
#include <iostream>

Empleado::Empleado(std::string nom, int age, int num, Inventario* inv)
    : Persona(nom, age), num_empleado(num), inventario(inv) {}

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
    std::cout << "Empleado puede modificar el inventario." << std::endl;
    inventario->modificarInventario();
}

void Empleado::mostrarDatos() const {
    Persona::mostrarDatos();
    std::cout << "Número de empleado: " << num_empleado << std::endl;
    
}
