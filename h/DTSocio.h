#ifndef DTSOCIO_H
#define DTSOCIO_H

#include <iostream>
using namespace std;

class DtSocio
{
private:
  string ci, nombre;

public:
  DtSocio(string ci, string nombre);
  //Constructor
  string getCI();
  string getNombre();
  //Getters
  void setCI(string nuevaCi);
  void setNombre(string nuevoNombre);
  //Setters
  ~DtSocio();
  //Destructor
};

#endif