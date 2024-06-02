#ifndef USUARIO_H
#define USUARIO_H
#include "persona.h"
#include <vector>
#include "producto.h"
#include "inventario.h"

class Usuario : public Persona {
  private:
    int identificacion;
    Inventario* inventario;

  public:
    Usuario();
    Usuario(int);
    Usuario(Inventario* inv);
    int getIdentificacion();
    void setIdentificacion(int id);
    std::string getTipoPersona() override;
    void visualizarInventario() override;
    void modificarInventario() override;


};

#endif
