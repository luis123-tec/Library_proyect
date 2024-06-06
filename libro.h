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
    std::string getTipoProducto() override; //override que se utiliza para darle individualidad a libro y manga
    void displayInfo() const override; //Polimorfismo porque no es una clase virtual pura
};


#endif
