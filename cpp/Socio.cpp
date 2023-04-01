#include "../h/Socio.h"


Socio::Socio(string ciSocio, string nombreSocio){
  this->ci = ciSocio;
  this->nombre = nombreSocio;
}

string Socio::getCI(){
  return this->ci;
}

string Socio::getNombre(){
  return this->nombre;
}

void Socio::setCI(string nuevaCI){
  this->ci = nuevaCI;
}

void Socio::setNombre(string nuevoNombre){
  this->nombre = nuevoNombre;
}

Socio::~Socio(){}

