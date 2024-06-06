#include "persona.h"

Persona::Persona(std::string nom, int age) : nombre(nom), edad(age) {}

void Persona::mostrarDatos() const {
    std::cout << "Nombre: " << nombre << "\nEdad: " << edad << std::endl;
}
