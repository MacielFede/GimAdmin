#ifndef CLASE_H
#define CLASE_H

#include <iostream>
#include "Turno.h"
using namespace std;

class Clase 
{
	private:
		int id;
		string nombre;
		Turno turno;
		int tope;
	public:
		// Constructor
		Clase(int id, string nombre, Turno turno, int tope); 
	  
		// Getters
		int getId();
		string getNombre();
		Turno getTurno();
		int getTope();
		
		// Setters
		void setId(int nuevoId);
		void setNombre(string nuevoNombre);
		void setTurno(Turno nuevoTurno);
		void setTope(int nuevoTope);
		
		// Destructor
		~Clase(); 
		
		// Métodos
		virtual int cupo() = 0;
}		

#endif