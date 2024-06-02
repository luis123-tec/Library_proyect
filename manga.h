#ifndef  MANGA_H
#define MANGA_H


#include "producto.h"
#include <string>

class Manga : public Producto {
  private:
    int volumenes;
    int calificacion;
  
  public:
    Manga();
    Manga(int, int);
    int getVolumenes();
    int getCalificacion();
    void setVolumenes(int vols);
    void setCalificacion(int cal);
    std::string getTipoProducto() override;
    void displayInfo(); 
    void displayInfo(int vols, int cal); // Sobrecarga
};

#endif
