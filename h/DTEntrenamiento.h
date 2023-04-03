#ifndef DTENTRENAMIENTO_H
#define DTENTRENAMIENTO_H

#include <iostream>
#include "DTClase.h"
using namespace std;

class DtEntrenamiento : public DtClase
{
	private:
		bool enRambla;
	public:
		// Constructor
		DtEntrenamiento(int id, string nombre, int turno, bool enRambla);  
	  
		// Getters
		bool getEnRambla();
		
		//Destructor
		~DtEntrenamiento();  
};

#endif