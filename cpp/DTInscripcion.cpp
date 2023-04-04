#include "../h/DTInscripcion.h"

DtInscripcion::DtInscripcion(DtSocio dtSocio, int idClase, DtFecha fecha)
{
    this->dtSocio = dtSocio;
    this->idClase = idClase;
    this->fecha = fecha;
}

DtInscripcion::DtInscripcion(Inscripcion inscripcion)
{
    this->idClase = inscripcion.getIdClase();
    this->fecha = inscripcion.getFecha();
}

DtInscripcion::DtInscripcion()
{
}

DtInscripcion::~DtInscripcion() {}

#pragma region Getters

DtSocio DtInscripcion::getSocio()
{
    return this->dtSocio;
}

int DtInscripcion::getIdClase()
{
    return this->idClase;
}

DtFecha DtInscripcion::getFecha()
{
    return this->fecha;
}

#pragma endregion