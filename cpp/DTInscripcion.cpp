#include "../h/DTInscripcion.h"

DTInscripcion::DTInscripcion(string ciSocio, int idClase, DtFecha fecha)
{
    this->ciSocio = ciSocio;
    this->idClase = idClase;
    this->fecha = fecha;
}

DTInscripcion::DTInscripcion(Inscripcion inscripcion)
{
    this->ciSocio = inscripcion.getCiSocio();
    this->idClase = inscripcion.getIdClase();
    this->fecha = inscripcion.getFecha();
}

DTInscripcion::~DTInscripcion(){}

#pragma region Getters

string DTInscripcion::getCiSocio() 
{
    return this->ciSocio;
}

int DTInscripcion::getIdClase() 
{
    return this->idClase;
}

DtFecha DTInscripcion::getFecha() 
{
    return this->fecha;
}

#pragma endregion