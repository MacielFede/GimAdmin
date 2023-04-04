#ifndef DTSPINNING_H
#define DTSPINNING_H

#include <iostream>
#incude "DtClase.h"
using namespace std;

class DtSpinning : public DtClase
{
	private:
		int cantBicicletas;
	public:
		// Constructor
		DtSpinning(int cantB); 
	  
		// Getters
		int getCantB();
		
		// Setters
		// void setCantB(int cantB);
		
		//Destructor
		~DtSpinning();  
};

#endif