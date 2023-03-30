#include "../h/DTSocio.h"

DtSocio::DtSocio(string ciSocio, string nombreSocio){
  ci = ciSocio;
  nombre = nombreSocio;
}

string DtSocio::getCI(){
  return ci;
}

string DtSocio::getNombre(){
  return nombre;
}

void DtSocio::setCI(string nuevaCI){
  ci = nuevaCI;
}

void DtSocio::setNombre(string nuevoNombre){
  nombre = nuevoNombre;
}

DtSocio::~DtSocio(){}