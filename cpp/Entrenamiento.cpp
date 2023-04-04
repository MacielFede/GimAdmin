#include "../h/Entrenamiento.h"

Entrenamiento::Entrenamiento(int id, string nombre, Turno turno, bool enRambla) : Clase(id, nombre, turno)
{
    int maximo = enRambla ? 20 : 10;
    this->enRambla = enRambla;
    this->inscripciones = new Inscripcion[maximo];
    for (int i = 0; i < maximo; i++)
    {
        this->inscripciones[i] = Inscripcion(); // inicializar instancias vacias
    }
}

bool Entrenamiento::getEnRambla()
{
    return this->enRambla;
}

void Entrenamiento::setEnRambla(bool enRambla)
{
    this->enRambla = enRambla;
}

Entrenamiento::~Entrenamiento() {}

int Entrenamiento::cupo()
{
    return this->enRambla ? (20 - this->getTope()) : (10 - this->getTope());
}

bool Entrenamiento::existeInscripcion(string ciS)
{
    int max = this->enRambla ? 20 : 10;
    for (int i = 0; i < max; i++)
    {
        if (this->inscripciones[i].getSocio().getCI() == ciS)
        {
            return true;
        }
    }
    return false;
}
void Entrenamiento::agregarInscripcion(Inscripcion &ins)
{
    try
    {
        int tope = this->getTope();
        this->inscripciones[tope] = ins;
        this->setTope(tope++);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}