#include "../h/Inscripcion.h"

Inscripcion::Inscripcion(string ciSocio, int idClase, DtFecha fecha)
{
    this->ciSocio = ciSocio;
    this->idClase = idClase;
    this->fecha = fecha;
}

Inscripcion::~Inscripcion(){}

#pragma region Getters

string Inscripcion::getCiSocio() 
{
    return this->ciSocio;
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

void Inscripcion::setCiSocio(string ciSocio)
{ 
    this->ciSocio = ciSocio;
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