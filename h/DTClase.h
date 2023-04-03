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
		int tope;
	public:
		// Constructor
		DtClase(int id, string nombre, Turno turno, int tope); 
	  
		// Getters
		int getId();
		string getNombre();
		Turno getTurno();
		int getTope();
		
		//Destructor
		~DtClase();  
};

#endif