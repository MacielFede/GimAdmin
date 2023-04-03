#include "../h/Entrenamiento.h"

Entrenamiento::Entrenamiento(int id, string nombre, Turno turno, int tope, bool enRambla) : Clase(id, nombre, turno, tope) {
    this->enRambla = enRambla;
}

bool Entrenamiento::getEnRambla() {
    return this->enRambla;
}

void Entrenamiento::setEnRambla(bool enRambla) {
    this->enRambla = enRambla;
}

Entrenamiento::~Entrenamiento() {}

int Entrenamiento::cupo() {
    return this->enRambla ? (20-Clase::getTope()) : (10-Clase::getTope());
}