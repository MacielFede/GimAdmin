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
		Entrenamiento(int id, string nombre, int turno, bool enRambla); 
	  
		// Getters
		bool getEnRambla();
		
		// Setters
		void setEnRambla(bool enRambla);
		
		//Destructor
		~Entrenamiento();  

		// Método
		int cupo();
};

#endif