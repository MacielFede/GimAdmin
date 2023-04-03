#include "../h/DTEntrenamiento.h"

DtEntrenamiento::DtEntrenamiento(int id, string nombre, int turno, bool enRambla) : DtClase(id, nombre, turno) {
    this->enRambla = enRambla;
}

bool DtEntrenamiento::getEnRambla() {
    return this->enRambla;
}

DtEntrenamiento::~DtEntrenamiento() {}