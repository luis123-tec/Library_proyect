#include "inventario.h"
#include "libro.h"
#include "manga.h"
#include <iostream>

void Inventario::modificarInventario() {
  int choice;
  std::cout << "\nMenu de modificación de inventario:\n";
  std::cout << "1. Añadir producto\n";
  std::cout << "2. Remover un producto\n";
  std::cout << "3. Regreso al menu\n";
  std::cout << "Elige una opción: ";
  std::cin >> choice;
  switch (choice) {
    case 1: {
      std::cout << "\nAñadiendo producto:\n";
      std::cout << "1. Añadir Libro\n";
      std::cout << "2. Añadir Manga\n";
      std::cout << "Elige una opción: ";
      int productChoice;
      std::cin >> productChoice;
      if (productChoice == 1) {
        int anio;
        std::string autor;
        std::cout << "Año de publicación: ";
        std::cin >> anio;
        std::cout << "Autor: ";
        std::cin.ignore();
        std::getline(std::cin, autor); 
        Libro* newLibro = new Libro(anio, autor);
        productos.push_back(newLibro);
        std::cout << "Libro añadido!\n";
      } else if (productChoice == 2) {
        int volumenes;
        int calificacion;
        std::cout << "Ingresa el numero de volumenes: ";
        std::cin >> volumenes;
        std::cout << "Ingresa la calificación: ";
        std::cin >> calificacion;
        Manga* newManga = new Manga(volumenes, calificacion);
        productos.push_back(newManga);
        std::cout << "Manga añadido!\n";
      } else {
        std::cout << "Producto invalido.\n";
      }
      break;
    }
    case 2: {
      std::cout << "\nRemoviendo producto:\n";
      
      break;
    }
    case 3:
      
      std::cout << "Regresando a menu principal.\n";
      return; 
    default:
      std::cout << "Opción invalida.\n";
  }
}


void Inventario::agregarProducto(Producto* producto) {
    productos.push_back(producto);
}
void Inventario::mostrarInventario() {
    if (productos.empty()) {
        std::cout << "El inventario está vacío." << std::endl;
        return;
    }
    std::cout << "Inventario:" << std::endl;
    for (size_t i = 0; i < productos.size(); ++i) {
        std::cout << "  Producto " << i + 1 << ": ";
        productos[i]->displayInfo();
        std::cout << "  Tipo: " << productos[i]->getTipoProducto() << std::endl;
    }
}
