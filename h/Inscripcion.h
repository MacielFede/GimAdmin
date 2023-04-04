#ifndef INSCRIPCION_H
#define INSCRIPCION_H

#include <iostream>
#include "DTFecha.h"
#include "Socio.h"
using namespace std;

class Inscripcion
{
private:
    Socio socio;
    int idClase;
    DtFecha fecha;
public:
#pragma region Instance

    Inscripcion(Socio socio, int idClase, DtFecha fecha); //Completo
    Inscripcion();
    ~Inscripcion();

#pragma endregion

#pragma region Getters

    Socio getSocio();
    int getIdClase();
    DtFecha getFecha();

#pragma endregion

#pragma region Setters

    void setSocio(Socio socio);
    void setIdClase(int idClase);
    void setFecha(DtFecha fecha);

#pragma endregion
};

#endif