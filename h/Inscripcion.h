#ifndef INSCRIPCION_H
#define INSCRIPCION_H

#include <iostream>
#include "DTFecha.h"
using namespace std;

class Inscripcion
{
private:
    string ciSocio;
    int idClase;
    DtFecha fecha;
public:
#pragma region Instance

    Inscripcion(string ciSocio, int idClase, DtFecha fecha); //Completo
    Inscripcion();
    ~Inscripcion();

#pragma endregion

#pragma region Getters

    string getCiSocio();
    int getIdClase();
    DtFecha getFecha();

#pragma endregion

#pragma region Setters

    void setCiSocio(string ciSocio);
    void setIdClase(int idClase);
    void setFecha(DtFecha fecha);

#pragma endregion
};

#endif