#ifndef PRODUCTO_H
#define PRODUCTO_H


#include <string>
#include <iostream>

class Producto {
  protected:
    std::string title;
    double price;
    int stock;

  public:
    Producto();
    Producto(std::string tit, double prc, int stk);
    std::string getTitle();
    double getPrice();
    int getStock();
    void setTitle(std::string tit);
    void setPrice(double prc);
    void setStock(int stock);
    virtual void displayInfo() const; //Polimorfismo, sin clases virtuales puras
    virtual std::string getTipoProducto() = 0; // Método virtual que posteriormente se va a cambiar con override CLASES ABSTRACTAS
};

 #endif   
