#include "../h/DTEntrenamiento.h"

DtEntrenamiento::DtEntrenamiento(int id, string nombre, Turno turno, bool enRambla) : DtClase(id, nombre, turno) {
    int maximo = enRambla ? 20 : 10;
    this->enRambla = enRambla;
    this->inscripciones = new DtInscripcion[maximo];
    for (int i = 0; i < maximo; i++)
    {
        this->inscripciones[i] = DtInscripcion(); // inicializar instancias vacias
    }
}

bool DtEntrenamiento::getEnRambla() {
    return this->enRambla;
}

DtEntrenamiento::~DtEntrenamiento() {}

ostream& operator<<(ostream& os, DtEntrenamiento& dtEntrenamiento) {
    os << "Id Clase: " << dtEntrenamiento.getId() << endl;
    os << "Nombre: " << dtEntrenamiento.getNombre() << endl;
    // Muestra el turno correspondiente
    os << "Turno: ";
    switch(dtEntrenamiento.getTurno()) {
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

    os << "En rambla: " << (dtEntrenamiento.getEnRambla() ? "Si" : "No") << endl;

    return os;
}