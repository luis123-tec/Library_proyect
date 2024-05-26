#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
  protected:
    std::string nombre;
    int edad;
    
  public:
    Persona();
    Persona(std::string, int);
    void setNombre(std::string nom);
    void setEdad(int age);
    std::string getNombre();
    int getEdad();
    void displayData();
    virtual std::string getTipoPersona() = 0; // Método virtual 
};

#endif