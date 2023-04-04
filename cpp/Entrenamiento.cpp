#include "../h/Entrenamiento.h"

Entrenamiento::Entrenamiento(int id, string nombre, Turno turno, bool enRambla) : Clase(id, nombre, turno) {
    this->enRambla = enRambla;
    this->inscripciones = new Inscripcion[(this->enRambla ? 20 : 10)];
}

bool Entrenamiento::getEnRambla() {
    return this->enRambla;
}

void Entrenamiento::setEnRambla(bool enRambla) {
    this->enRambla = enRambla;
}

Entrenamiento::~Entrenamiento() {}

int Entrenamiento::cupo() {
    return this->enRambla ? (20-this->getTope()) : (10-this->getTope());
}