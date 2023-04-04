#include "../h/Entrenamiento.h"

Entrenamiento::Entrenamiento(int id, string nombre, Turno turno, bool enRambla) : Clase(id, nombre, turno)
{
    int maximo = enRambla ? 20 : 10;
    this->enRambla = enRambla;
    this->inscripciones = new Inscripcion[maximo];
    for (int i = 0; i < maximo; i++)
    {
        this->inscripciones[i] = Inscripcion(); // inicializar instancias vacias
    }
}

bool Entrenamiento::getEnRambla()
{
    return this->enRambla;
}

void Entrenamiento::setEnRambla(bool enRambla)
{
    this->enRambla = enRambla;
}

Entrenamiento::~Entrenamiento() {}

int Entrenamiento::cupo()
{
    return this->enRambla ? (20 - this->getTope()) : (10 - this->getTope());
}