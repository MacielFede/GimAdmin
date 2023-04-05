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
		DtEntrenamiento(int id, string nombre, Turno turno, bool enRambla);  

		// Getters
		bool getEnRambla();
		
		//Destructor
		~DtEntrenamiento();  

		// Sobrecarga de operador <<
		friend ostream &operator<<(ostream &os, DtEntrenamiento &dtEntrenamiento);
};

#endif