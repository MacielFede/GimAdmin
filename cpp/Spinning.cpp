#include "../h/Spinning.h"

Spinning::Spinning(int id, std::string nombre, Turno turno, int tope, int cantBicicletas) : Clase(id, nombre, turno, tope) {
    this->cantBicicletas = cantBicicletas;
}

int Spinning::getCantB() {
    return this->cantBicicletas;
}

void Spinning::setCantB(int cantBicicletas) {
    this->cantBicicletas = cantBicicletas;
}

Spinning::~Spinning() {}

int Spinning::cupo() {
    return (this->cantBicicletas-Clase::getTope());
}