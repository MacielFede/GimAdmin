#ifndef DTCLASE_H
#define DTCLASE_H

#include <iostream>
#include "Turno.h"
#include "DTInscripcion.h"
using namespace std;

class DtClase
{
	private:
		int id;
		string nombre;
		Turno turno;
		int tope;
	protected:
		DtInscripcion * inscripciones;
	public:
		// Constructor
		DtClase(int id, string nombre, Turno turno); 
	  
		// Getters
		int getId();
		string getNombre();
		Turno getTurno();
		int getTope();
		
		//Destructor
		~DtClase();  
};

#endif