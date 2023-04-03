#include "../h/DTSpinning.h"

DtSpinning::DtSpinning(int id, std::string nombre, int turno, int cantBicicletas) : DtClase(id, nombre, turno) {
    this->cantBicicletas = cantBicicletas;
}

int DtSpinning::getCantB() {
    return this->cantBicicletas;
}

DtSpinning::~DtSpinning() {}