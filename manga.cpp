#include "manga.h"

Manga::Manga(std::string tit, double prc, int stk, int vols, int cal) : Producto(tit, prc, stk),volumenes(vols),calificacion(cal) {}

int Manga::getVolumenes() {
  return volumenes;
}

int Manga::getCalificacion() {
  return calificacion;
}

void Manga::setVolumenes(int vols) {
  volumenes = vols;
}

void Manga::setCalificacion(int cal) {
  calificacion = cal;
}
std::string Manga::getTipoProducto() {
  return "Manga";
}
void Manga::displayInfo() const {
  Producto::displayInfo();
  std::cout << ", Volúmenes: "  << volumenes 
  << ", Calificación: " << calificacion << std::endl;
}


