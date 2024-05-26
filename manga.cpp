#include "manga.h"

Manga::Manga() {
  
}

Manga::Manga(int vols, int cal) : volumenes(vols), calificacion(cal) {}

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
