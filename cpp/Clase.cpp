#include "../h/Clase.h"

Clase::Clase(int id, string nombre, Turno turno, int tope) {
    this->id = id;
    this->nombre = nombre;
    this->turno = turno;
    this->tope = tope;
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

int Clase::getTope() {
    return this->tope;
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

void Clase::setTope(int nuevoTope) {
    this->tope = nuevoTope;
}

Clase::~Clase() {}