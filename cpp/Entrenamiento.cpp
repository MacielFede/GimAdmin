#include "../h/Entrenamiento.h"

Entrenamiento::Entrenamiento(int id, string nombre, int turno, bool enRambla) : Clase(id, nombre, turno) {
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
    return enRambla ? 20 : 10;
}