#include "../h/DTClase.h"

DtClase::DtClase(int id, string nombre, Turno turno) {
    this->id = id;
    this->nombre = nombre;
    this->turno = turno;
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

DtClase::~DtClase() {}