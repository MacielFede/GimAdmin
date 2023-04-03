/* Juan
*   
*   Hay que hablar las fuciones que queremos o necesitamos implementar.
*    Tambien como se van a usar las clases bases y DT
*/

#ifndef DTINSCRIPCION_H
#define DTINSCRIPCION_H

#include <iostream>
#include "DTFecha.h"
#include "Inscripcion.h"

using namespace std;

class DTInscripcion
{
    string ciSocio;
    int idClase;
    DtFecha fecha;
public:
#pragma region Instance

    DTInscripcion(string ciSocio, int idClase, DtFecha fecha); //Completo
    DTInscripcion(Inscripcion inscripcion); //A partir de una inscripcion?
    ~DTInscripcion();

#pragma endregion

#pragma region Getters

    string getCiSocio();
    int getIdClase();
    DtFecha getFecha();

#pragma endregion
};

#endif