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
		DtSpinning(int id, std::string nombre, int turno, int cantBicicletas); 
	  
		// Getters
		int getCantB();
		
		//Destructor
		~DtSpinning();  
};

#endif