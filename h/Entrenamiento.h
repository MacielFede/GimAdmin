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
	Entrenamiento(int id, string nombre, Turno turno, bool enRambla);

	// Getters
	bool getEnRambla();

	// Setters
	void setEnRambla(bool enRambla);

	// Destructor
	~Entrenamiento();

	// Método
	int cupo();

	// Funciones auxiliares
	bool existeInscripcion(string ciS);
	void agregarInscripcion(Inscripcion &ins);
	void borrarInscripcion(string ciS);
};

#endif