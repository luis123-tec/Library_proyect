#ifndef EMPLEADO_H
#define EMPLEADO_H


#include "persona.h"
#include <vector>
#include "producto.h"
#include "inventario.h"


class Empleado : public Persona {
  private:
    int num_empleado;
    Inventario* inventario;
    
  public:
    Empleado();
    Empleado(int);
    Empleado(Inventario* inv);
    int getNumEmpleado();
    void setNumEmpleado(int);
    std::string getTipoPersona() override;
    void visualizarInventario() override;
    void modificarInventario() override;
};

#endif
