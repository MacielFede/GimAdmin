#ifndef CLASE_H
#define CLASE_H

#include <iostream>
#include "Turno.h"
using namespace std;

class Clase {
	private:
		int id;
		string nombre;
		Turno turno;
	public:
		// Constructor
		Clase(int id, string nombre, Turno turno); 
	  
		// Getters
		int getId();
		string getNombre();
		Turno getTurno();
		
		// Setters
		void setId(int nuevoId);
		void setNombre(string nuevoNombre);
		void setTurno(Turno nuevoTurno);
		
		// Destructor
		~Clase(); 
		
		// Métodos
		virtual int cupo() = 0;
}		

#endif