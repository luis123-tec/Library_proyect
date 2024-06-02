
#ifndef LIBRO_H
#define LIBRO_H


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
    void displayInfo(); //Hacer el metodo display, y luego hacer otro metodo para agregarle mas cosas
    void displayInfo(int year, std::string author);
};


#endif
