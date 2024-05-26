//Luis Fernando

#include <iostream>
#include "libro.h"
#include "manga.h"
#include "persona.h"
#include "empleado.h"

int main() {
    Libro libro(1998, "Robert Greene");
    Manga manga(24, 10);

    std::cout << "Tipo de producto (Libro): " << libro.getTipoProducto() << std::endl;
    std::cout << "Tipo de producto (Manga): " << manga.getTipoProducto() << std::endl;


   
    return 0;
}