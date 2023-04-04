#include "../h/Spinning.h"

Spinning::Spinning(int id, string nombre, Turno turno, int cantBicicletas) : Clase(id, nombre, turno)
{
    this->cantBicicletas = cantBicicletas;
    this->inscripciones = new Inscripcion[this->cantBicicletas];
    for (int i = 0; i < this->cantBicicletas; i++)
    {
        this->inscripciones[i] = Inscripcion(); // inicializar instancias vacias
    }
}

int Spinning::getCantB()
{
    return this->cantBicicletas;
}

void Spinning::setCantB(int cantBicicletas)
{
    this->cantBicicletas = cantBicicletas;
}

Spinning::~Spinning() {}

int Spinning::cupo()
{
    return (this->cantBicicletas - this->getTope());
}