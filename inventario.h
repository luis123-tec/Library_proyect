#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "producto.h"
#include <vector>

class Inventario {
private:
    std::vector<Producto*> productos;

public:
    Inventario();
    void agregarProducto(Producto* producto);
    //Sobrecarga de metodos
    void agregarProducto(std::string tit, double pre, int st, int anio, std::string aut); // Libro
    void agregarProducto(std::string tit, double pre, int st, int vol, int calif); // Manga

    void mostrarInventario();
    void modificarInventario();
};

#endif
