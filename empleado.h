#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "persona.h"
#include "inventario.h"

class Empleado : public Persona {
private:
    int num_empleado;
    Inventario* inventario;

public:
    Empleado(std::string nom, int age, int num, Inventario* inv);

    int getNumEmpleado();
    void setNumEmpleado(int num);
    std::string getTipoPersona() override;

    void visualizarInventario() override;
    void modificarInventario() override;
    void mostrarDatos() const;
};

#endif
