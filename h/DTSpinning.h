#ifndef DTSPINNING_H
#define DTSPINNING_H

#include <iostream>
#include "DTClase.h"
using namespace std;

class DtSpinning : public DtClase
{
	private:
		int cantBicicletas;
	public:
		// Constructor
		DtSpinning(int id, std::string nombre, Turno turno, int tope, int cantBicicletas); 
	  
		// Getters
		int getCantB();
		
		//Destructor
		~DtSpinning();  

		// Sobrecarga de operador <<
		friend ostream &operator<<(ostream &os,DtSpinning &dtSpinning);
};

#endif