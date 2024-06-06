#include "usuario.h"
#include <iostream>

Usuario::Usuario(std::string nom, int age, int id, Inventario* inv)
    : Persona(nom, age), identificacion(id), inventario(inv) {}

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

void Usuario::modificarInventario() {}
