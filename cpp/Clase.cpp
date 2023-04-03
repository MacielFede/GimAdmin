#include "../h/Clase.h"

Clase::Clase(int id, string nombre, Turno turno) {
    this->id = id;
    this->nombre = nombre;
    this->turno = turno;
}

int Clase::getId() {
    return this->id;
}

string Clase::getNombre() {
    return this->nombre;
}

Turno Clase::getTurno() {
    return this->turno;
}

void Clase::setId(int nuevoId) {
    this->id = nuevoId;
}

void Clase::setNombre(string nuevoNombre) {
    this->nombre = nuevoNombre;
}

void Clase::setTurno(Turno nuevoTurno) {
    this->turno = nuevoTurno;
}

Clase::~Clase() {}