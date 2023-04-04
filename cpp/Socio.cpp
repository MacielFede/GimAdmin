#include "../h/Socio.h"


Socio::Socio(string ciSocio, string nombreSocio){
  this->ci = ciSocio;
  this->nombre = nombreSocio;
}

Socio::Socio(){
  this->ci = "111111";
  this->nombre = "Daniel 'El macho' Gonzalez";
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

