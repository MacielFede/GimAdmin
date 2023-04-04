#include "../h/Spinning.h"

Spinning::Spinning(int id, string nombre, Turno turno, int cantBicicletas) : Clase(id, nombre, turno)
{
    this->cantBicicletas = cantBicicletas;
    this->inscripciones = new Inscripcion[this->cantBicicletas];
    for (int i = 0; i < this->cantBicicletas; i++)
    {
        this->inscripciones[i] = Inscripcion(); // inicializar instancias vacias
    }
}

int Spinning::getCantB()
{
    return this->cantBicicletas;
}

void Spinning::setCantB(int cantBicicletas)
{
    this->cantBicicletas = cantBicicletas;
}

Spinning::~Spinning() {}

int Spinning::cupo()
{
    return (this->cantBicicletas - this->getTope());
}

bool Spinning::existeInscripcion(string ciS)
{
    int max = this->getCantB();
    for (int i = 0; i < max; i++)
    {
        if (this->inscripciones[i].getSocio().getCI() == ciS)
        {
            return true;
        }
    }
    return false;
}
void Spinning::agregarInscripcion(Inscripcion &ins)
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