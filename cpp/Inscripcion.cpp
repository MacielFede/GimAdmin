#include "../h/Inscripcion.h"

Inscripcion::Inscripcion(Socio socio, int idClase, DtFecha fecha)
{
    this->socio = socio;
    this->idClase = idClase;
    this->fecha = fecha;
}

Inscripcion::Inscripcion() {}

Inscripcion::~Inscripcion() {}

#pragma region Getters

Socio Inscripcion::getSocio()
{
    return this->socio;
}

int Inscripcion::getIdClase()
{
    return this->idClase;
}

DtFecha Inscripcion::getFecha()
{
    return this->fecha;
}

#pragma endregion

#pragma region Setters

void Inscripcion::setSocio(Socio socio)
{
    this->socio = socio;
}

void Inscripcion::setIdClase(int idClase)
{
    this->idClase = idClase;
}

void Inscripcion::setFecha(DtFecha fecha)
{
    this->fecha = fecha;
}

#pragma endregion