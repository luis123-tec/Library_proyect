
#include "producto.h"
#include <string>

class Libro : public Producto {
  private:
    int anio;
    std::string autor;
  public:
    Libro();
    Libro(int, std::string);
    int getAnio();
    std::string getAutor();
    void setAnio(int year);
    void setAutor(std::string author);
    std::string getTipoProducto() override; //override que se utiliza para darle individualidad a libro y manga
};