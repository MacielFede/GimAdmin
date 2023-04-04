#ifndef ENTRENAMIENTO_H
#define ENTRENAMIENTO_H

#include <iostream>
#include "Clase.h"
using namespace std;

class Entrenamiento : public Clase
{
	private:
		bool enRambla;
	public:
		// Constructor
		Entrenamiento();
		Entrenamiento(bool enRambla); 
	  
		// Getters
		bool getEnRambla();
		
		// Setters
		void setEnRambla(bool enRambla);
		
		//Destructor
		~Entrenamiento();  
};

#endif