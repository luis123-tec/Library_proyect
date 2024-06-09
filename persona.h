#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>

class Persona {
protected:
    std::string nombre;
    int edad;

public:
    Persona(std::string nom = "", int age = 0);

    virtual std::string getTipoPersona() = 0;
    virtual void visualizarInventario() = 0;
    virtual void modificarInventario() = 0;

    void mostrarDatos() const; //sobreescritura

};

#endif
