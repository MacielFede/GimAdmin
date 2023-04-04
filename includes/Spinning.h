#ifndef SPINNING_H
#define SPINNING_H

#include <iostream>
#include "Clase.h"
using namespace std;

class Spinning : public Clase
{
	private:
		int cantBicicletas;
	public:
		// Constructores
		Spinning();
		Spinning(int cantB); 
	  
		// Getters
		int getCantB();
		
		// Setters
		void setCantB(int cantB);
		
		//Destructor
		~Spinning();   
};

#endif