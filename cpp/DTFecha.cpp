#include "../h/DTFecha.h"

// Axel

// Constructor por defecto
DtFecha::DtFecha()
{
    this->dia = 1;
    this->mes = 1;
    this->anio = 2000;
}

// Constructor con parametros
DtFecha::DtFecha(int d, int m, int a)
{
    try
    {
        if (d > 31 || d < 1 || m > 12 || m < 1 || a < 1900)
        {
            throw invalid_argument("Fecha Incorrecta");
        }
        this->dia = d;
        this->mes = m;
        this->anio = a;
    }
    catch (invalid_argument &i)
    {
        cout << i.what() << endl;
    }
}

int DtFecha::getDia()
{
    return this->dia;
}

int DtFecha::getMes()
{
    return this->mes;
}

int DtFecha::getAnio()
{
    return this->anio;
}

// Sobrecarga de operador ==
bool DtFecha::operator==(const DtFecha &f)
{
    return this->dia == f.dia && this->mes == f.mes && this->anio == f.anio;
}

// Sobrecarga de operador cout <<
ostream &operator<<(ostream &o, DtFecha &f)
{
    o << f.dia << "/" << f.mes << "/" << f.anio;
    return o;
}

// Destructor
DtFecha::~DtFecha() {}
