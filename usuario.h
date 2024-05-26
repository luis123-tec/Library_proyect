#include "persona.h"

class Usuario : public Persona {
  private:
    int identificacion;
  public:
    Usuario();
    Usuario(int);
    int getIdentificacion();
    void setIdentificacion(int id);
    std::string getTipoPersona() override;
};