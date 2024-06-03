//Luis Fernando
#include <iostream>
#include "libro.h"
#include "manga.h"
#include "persona.h"
#include "empleado.h"
#include "inventario.h"
#include "usuario.h"

int main() {
    Libro libro(1998, "Robert Greene");
    Manga manga(24, 10);

    std::cout << "Tipo de producto : " << libro.getTipoProducto() << std::endl;
    std::cout << "Tipo de producto : " << manga.getTipoProducto() << std::endl;

    Inventario* miInventario = new Inventario(); 

    Empleado* miEmpleado = new Empleado(miInventario);

    // Añadir Libro
    Libro* libro1 = new Libro(1980, "Miguel de Cervantes"); 
    miInventario->agregarProducto(libro1);
    // Añadir Manga
    Manga* manga1 = new Manga(24, 10); 
    miInventario->agregarProducto(manga1);


    while (true) {
        std::cout << "\nMenu de libreria:\n";
        std::cout << "1. Login como empleado\n";
        std::cout << "2. Login como User\n";
        std::cout << "3. Salir\n";
        std::cout << "Elige una opción: ";
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: { 
                            std::cout << "\nLogin de empleado:\n";
                            std::string tipoPersona = miEmpleado->getTipoPersona(); // Obtener el tipo de persona
                            if (tipoPersona == "Trabajador") {
                                std::cout << "\nBienvenido, emplead@!\n";
                                miEmpleado->modificarInventario(); 
                                while (true) {
                                    miEmpleado->visualizarInventario(); // Acceso full
                                    std::cout << "Continuar? (s/n): ";
                                    char continueChoice;
                                    std::cin >> continueChoice;
                                    if (continueChoice == 'n') {
                                        break;
                                    }
                                }
                            } else {
                                std::cout << "ID de empleado no valido.\n";
                            }
                            break; 
                        }
                        case 2: { 
                            std::cout << "\nLogin de usuario:\n";
                            Usuario* miUsuario = new Usuario(123); //usuario temp
                            std::string tipoPersona = miUsuario->getTipoPersona(); 
                            if (tipoPersona == "Comprador") {
                                std::cout << "\nBienvenido user!\n";
                                miUsuario->visualizarInventario();
                            } else {
                                std::cout << "User invalido.\n";
                            }
                            break;
                        }
                        case 3:
                            std::cout << "Saliendo...\n";
                            return 0; // Exit the program
                        default:
                            std::cout << "Opción invalida.\n";
                    }
                }
                return 0;
}
