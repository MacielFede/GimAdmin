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
    int max = this->getTope();
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
        this->setTope(tope+1);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Spinning::borrarInscripcion(string ciS)
{
    int max = this->getCantB();
    int index = -1;

    // Buscar el índice de la inscripción a borrar
    for (int i = 0; i < max; i++)
    {
        if (this->inscripciones[i].getSocio().getCI() == ciS)
        {
            index = i;
            break;
        }
    }

    if (index != -1) // Si se encontró la inscripción a borrar
    {
        if (max == 1) // Si hay solo una inscripción en el arreglo
        {
            this->setTope(0);
        }
        else
        {
            // Mover las demás inscripciones una posición hacia el principio del arreglo
            for (int i = index + 1; i < max; i++)
            {
                this->inscripciones[i - 1] = this->inscripciones[i];
            }

            // Actualizar el tope del arreglo
            this->setTope(this->getTope() - 1);
        }
    }
}
