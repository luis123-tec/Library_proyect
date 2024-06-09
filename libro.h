#ifndef LIBRO_H
#define LIBRO_H


#include "producto.h"
#include <string>

class Libro : public Producto {
  private:
    int anio;
    std::string autor;
  public:
    Libro(std::string tit, double prc, int stk, int year, std::string auth);
    int getAnio();
    std::string getAutor();
    void setAnio(int year);
    void setAutor(std::string author);
    std::string getTipoProducto() override; 
    void displayInfo() const override; //sobreescritura
};


#endif
