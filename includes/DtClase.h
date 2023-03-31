#ifndef DTCLASE_H
#define DTCLASE_H

#include <iostream>
#include "Turno.h"
using namespace std;

class DtClase
{
	private:
		int id;
		string nombre;
		Turno turno;
	public:
		// Constructor
		DtClase(int id, string nombre, Turno turno); 
	  
		// Getters
		int getId();
		string getNombre();
		Turno getTurno();
		
		// Setters No van por ser un DT?
		// void setId(int nuevoId);
		// void setNombre(string nuevoNombre);
		// void setTurno(Turno nuevoTurno);
		
		//Destructor
		~DtClase();  
};

#endif