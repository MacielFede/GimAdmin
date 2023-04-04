#ifndef SPINNING_H
#define SPINNING_H

#include <iostream>
#include <string>
#include "Clase.h"
using namespace std;

class Spinning : public Clase
{
	private:
		int cantBicicletas;
	public:
		// Constructores
		Spinning(int id, string nombre, Turno turno, int cantBicicletas); 
	  
		// Getters
		int getCantB();
		
		// Setters
		void setCantB(int cantBicicletas);
		
		//Destructor
		~Spinning();  

		// Método
		int cupo(); 
};

#endif