#include "../h/Socio.h"


Socio::Socio(string ciSocio, string nombreSocio){
  ci = ciSocio;
  nombre = nombreSocio;
}

string Socio::getCI(){
  return ci;
}

string Socio::getNombre(){
  return nombre;
}

void Socio::setCI(string nuevaCI){
  ci = nuevaCI;
}

void Socio::setNombre(string nuevoNombre){
  nombre = nuevoNombre;
}

Socio::~Socio(){}

