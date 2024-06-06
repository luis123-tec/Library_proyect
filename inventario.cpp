#include "inventario.h"
#include "libro.h"
#include "manga.h"
#include <iostream>


Inventario::Inventario() {}

void Inventario::agregarProducto(Producto* producto) {
    productos.push_back(producto);
}
// Metodo sobrecargado para añadir productos (manga/libro)
void Inventario::agregarProducto(std::string tit, double pre, int st, int anio, std::string aut) {
    Producto* libro = new Libro(tit, pre, st, anio, aut);
    productos.push_back(libro);
}

void Inventario::agregarProducto(std::string tit, double pre, int st, int vol, int calif) {
    Producto* manga = new Manga(tit, pre, st, vol, calif);
    productos.push_back(manga);
}

void Inventario::mostrarInventario() {
    if (productos.empty()) {
        std::cout << "El inventario está vacío." << std::endl;
        return;
    }
    std::cout << "Inventario:" << std::endl;
    for (const auto& producto : productos) {
        producto->displayInfo();
        std::cout << "  Tipo: " << producto->getTipoProducto() << std::endl;
        }
    }

void Inventario::modificarInventario() {
    int choice;
    std::cout << "\nMenu de modificación de inventario:\n";
    std::cout << "1. Añadir producto\n";
    std::cout << "2. Regreso al menu\n";
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
                std::string titulo;
                double precio;
                int stock;
                std::cout << "Ingresa el año de publicación: ";
                std::cin >> anio;
                std::cout << "Ingresa el autor: ";
                std::cin.ignore();
                std::getline(std::cin, autor);
                std::cout << "Ingresa el titulo: ";
                std::cin.ignore();
                std::getline(std::cin, titulo);
                std::cout << "Ingresa el precio: ";
                std::cin >> precio;
                std::cout << "Ingresa el stock: ";
                std::cin >> stock;
                Libro* newLibro = new Libro(titulo, precio, stock, anio, autor);
                productos.push_back(newLibro);
                std::cout << "Libro correctamente añadido!\n";
            } else if (productChoice == 2) {
                int volumenes;
                int calificacion;
                std::string titulo;
                double precio;
                int stock;
                std::cout << "Ingresa el numero de volumenes: ";
                std::cin >> volumenes;
                std::cout << "Ingresa la calificación: ";
                std::cin >> calificacion;
                std::cout << "Ingresa el titulo: ";
                std::cin.ignore();
                std::getline(std::cin, titulo);
                std::cout << "Ingresa el precio: ";
                std::cin >> precio;
                std::cout << "Ingresa el stock: ";
                std::cin >> stock;
                Manga* newManga = new Manga(titulo, precio, stock, volumenes, calificacion);
                productos.push_back(newManga);
                std::cout << "Manga correctamente añadido!\n";
            } else {
                std::cout << "Producto invalido.\n";
            }
            break;
        }
        case 2:
            std::cout << "Regresando a menu principal.\n";
            return;
        default:
            std::cout << "Opción invalida.\n";

    }
}


