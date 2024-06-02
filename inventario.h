
#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <vector>
#include "producto.h"

class Inventario {
private:
    std::vector<Producto*> productos; 
public:
    std::vector<Producto*> getProductos() {
        return productos;
    }
    void agregarProducto(Producto* producto);
    void mostrarInventario();
    void modificarInventario();
};

#endif