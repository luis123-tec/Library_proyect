#include "empleado.h"
#include "usuario.h"
#include "libro.h"
#include "manga.h"
#include "inventario.h"
#include <iostream>
#include <vector>

void mostrarMenu(Persona* persona) {
    
    std::cout << "\nMenu, Bienvenido " << persona->getTipoPersona() << ", ";
    persona->mostrarDatos();
    if (persona->getTipoPersona() == "Trabajador") {
        Empleado* emp = dynamic_cast<Empleado*>(persona);
            if (emp != nullptr) {
                std::cout << "Número de empleado: " << emp->getNumEmpleado() << std::endl;
            }
        } else {
            Usuario* usr = dynamic_cast<Usuario*>(persona);
            if (usr != nullptr) {
                std::cout << "Identificación: " << usr->getIdentificacion() << std::endl;
            }
        }

    std::cout << "\nMenu:\n";
    std::cout << "1. Ver inventario\n";
    std::cout << "2. Modificar inventario\n";
    std::cout << "3. Ver datos personales\n";
    std::cout << "4. Salir\n";
    std::cout << "Seleccione una opción: ";
}

void gestionarInventario(Persona* persona) {
    int opcion;
    do {
        mostrarMenu(persona);
        std::cin >> opcion;

        switch (opcion) {
        case 1:
            persona->visualizarInventario();
            break;
        case 2:
            if (persona->getTipoPersona() == "Trabajador") {
                persona->modificarInventario();
            } else {
                std::cout << "No tiene permisos para modificar el inventario.\n";
            }
            break;
        case 3:
            persona->mostrarDatos();
            break;
        case 4:
            std::cout << "Saliendo...\n";
            break;
        default:
            std::cout << "Opción no válida. Intente nuevamente.\n";
            break;
        }
    } while (opcion != 4);
}

int main() {
    
     int tipoPersonaSeleccion;

    Inventario inventario;
    // Usar sobrecarga de metodos para en este caso agregar productos, el programa detecta cual es un manga y cual es un libro dependiendo de los parametros
    inventario.agregarProducto("Aprendiendo c++", 49.99, 15, 2015, "John Mayer");  // Libro
    inventario.agregarProducto("JJK", 14.99, 3, 27, 10);  // Manga
    inventario.agregarProducto("C--", 39.99, 10, 2005, "John Meyers");  // Otro Libro
    inventario.agregarProducto("Oyasumi punpun", 19.99, 11, 13, 10);  // Otro Manga
    
    std::cout << "Seleccione el tipo de persona:\n";
    std::cout << "1. Empleado\n";
    std::cout << "2. Usuario\n";
    std::cout << "Seleccione una opción: ";
    std::cin >> tipoPersonaSeleccion;
    //Polimorfismo
    Persona* persona = nullptr;
    if (tipoPersonaSeleccion == 1) {
        persona = new Empleado("Juanita", 30, 1, &inventario);
        static_cast<Empleado*>(persona)->setNumEmpleado(1707);
    } else if (tipoPersonaSeleccion == 2) {
        persona = new Usuario("Juanito", 25, 1, &inventario);
        static_cast<Usuario*>(persona)->setIdentificacion(170455);
    } else {
        std::cout << "Selección inválida." << std::endl;
        return 1; 
    }
    // Comienza la gestión del inventario
    gestionarInventario(persona);
    return 0;
}
 
