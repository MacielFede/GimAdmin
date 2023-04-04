/* Juan
*/

#ifndef DTINSCRIPCION_H
#define DTINSCRIPCION_H

#include <iostream>
#include "DTFecha.h"
#include "Inscripcion.h"
#include "DTSocio.h"

using namespace std;

class DtInscripcion
{
    DtSocio dtSocio;
    int idClase;
    DtFecha fecha;
public:
#pragma region Instance

    DtInscripcion(); //Agrego constructor por default para crearlos en las Clases (Axel)
    DtInscripcion(DtSocio dtSocio, int idClase, DtFecha fecha); //Completo
    DtInscripcion(Inscripcion inscripcion); //A partir de una inscripcion?
    ~DtInscripcion();

#pragma endregion

#pragma region Getters

    DtSocio getSocio();
    int getIdClase();
    DtFecha getFecha();

#pragma endregion
};

#endif