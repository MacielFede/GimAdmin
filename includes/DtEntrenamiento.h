#ifndef DTENTRENAMIENTO_H
#define DTENTRENAMIENTO_H

#include <iostream>
using namespace std;

class DtEntrenamiento : public DtClase
{
	private:
		bool enRambla;
	public:
		// Constructor
		DtEntrenamiento(bool enRambla); 
	  
		// Getters
		bool getEnRambla();
		
		// Setters
		// void setEnRambla(bool enRambla);
		
		//Destructor
		~DtEntrenamiento();  
};

#endif