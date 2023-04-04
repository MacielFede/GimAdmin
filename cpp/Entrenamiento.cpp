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

void Entrenamiento::borrarInscripcion(string ciS)
{
    int max = this->getTope();
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