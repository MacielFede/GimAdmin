#include "../h/DTSocio.h"

DtSocio::DtSocio(string ciSocio, string nombreSocio){
  this->ci = ciSocio;
  this->nombre = nombreSocio;
}

string DtSocio::getCI(){
  return this->ci;
}

string DtSocio::getNombre(){
  return this->nombre;
}

DtSocio::~DtSocio(){}