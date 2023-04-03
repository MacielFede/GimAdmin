#include "../h/DTClase.h"

DtClase::DtClase(int id, string nombre, Turno turno, int tope) {
    this->id = id;
    this->nombre = nombre;
    this->turno = turno;
    this->tope = tope;
}

int DtClase::getId() {
    return this->id;
}

string DtClase::getNombre() {
    return this->nombre;
}

Turno DtClase::getTurno() {
    return this->turno;
}

int DtClase::getTope() {
    return this->tope;
}

DtClase::~DtClase() {}