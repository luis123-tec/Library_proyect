#include "persona.h"


class Empleado : public Persona {
  private:
    int num_empleado;
  public:
    Empleado();
    Empleado(int);
    int getNumEmpleado();
    void setNumEmpleado(int);
    std::string getTipoPersona() override;
};