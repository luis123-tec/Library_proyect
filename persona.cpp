#include "persona.h"
#include <iostream>

Persona::Persona() : nombre(""), edad(0) {}

Persona::Persona(std::string nom, int age) : nombre(nom), edad(age) {}

void Persona::setNombre(std::string nom) {
  nombre = nom;
}
void Persona::setEdad(int age) {
  edad = age;
}
std::string Persona::getNombre() {
  return nombre;
}
int Persona::getEdad() {
  return edad;
}
void Persona::displayData() {
  std::cout << "";
}
