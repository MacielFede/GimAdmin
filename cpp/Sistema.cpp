#include "../h/Sistema.h"

Sistema* Sistema::instancia = nullptr;
//Le doy valor a la instancia como null para que solo la primera vez creemos la instancia

Sistema& Sistema::getSistema() {
    if (instancia == nullptr) {
        instancia = new Sistema();
    }
    //Si la instancia ya fue creada retorno una referencia a la misma instancia
    return *instancia;
}

Sistema::Sistema() {
}


void Sistema::agregarSocio(string ci, string nombre){
}

//void Sistema::agregarClase(DtClase& clase){}
//void Sistema::borrarInscripcion(string ciSocio, int idClase){}
// void Sistema::agregarInscripcion(string ciSocio, int idClase, Fecha fecha){}


Sistema::~Sistema() {
}

// Definicion del constructor de copia y del operator override para que no se copie la instancia
Sistema::Sistema(const Sistema&) {}

Sistema& Sistema::operator=(const Sistema&) {
    return *this;
}