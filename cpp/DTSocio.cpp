#include "../h/DTSocio.h"

DtSocio::DtSocio(string ciSocio, string nombreSocio)
{
  this->ci = ciSocio;
  this->nombre = nombreSocio;
}

DtSocio::DtSocio()
{
}

string DtSocio::getCI()
{
  return this->ci;
}

string DtSocio::getNombre()
{
  return this->nombre;
}

// Sobrecarga de operador cout <<
ostream &operator<<(ostream &o, DtSocio &s)
{
  o << "Nombre: " << s.nombre << ", Cedula: " << s.ci;
  return o;
}

DtSocio::~DtSocio() {}