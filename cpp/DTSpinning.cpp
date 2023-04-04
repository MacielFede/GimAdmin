#include "../h/DTSpinning.h"

DtSpinning::DtSpinning(int id, std::string nombre, Turno turno, int tope, int cantBicicletas) : DtClase(id, nombre, turno, tope) {
    this->cantBicicletas = cantBicicletas;
}

int DtSpinning::getCantB() {
    return this->cantBicicletas;
}

DtSpinning::~DtSpinning() {}

ostream& operator<<(ostream& os, DtSpinning& dtSpinning) {
    os << "Id Clase: " << dtSpinning.getId() << endl;
    os << "Nombre: " << dtSpinning.getNombre() << endl;
    // Muestra el turno correspondiente
    os << "Turno: ";
    switch(dtSpinning.getTurno()) {
        case Turno::Manana:
            os << "Mañana";
            break;
        case Turno::Tarde:
            os << "Tarde";
            break;
        case Turno::Noche:
            os << "Noche";
            break;
        default:
            os << "";
    }
    os << endl;

    os << "Cantidad de bicicletas: " << dtSpinning.getCantB() << endl;

    return os;
}