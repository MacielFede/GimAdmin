#include "../h/Sistema.h"

Sistema *Sistema::instancia = nullptr;
// Le doy valor a la instancia como null para que solo la primera vez creemos la instancia

Sistema &Sistema::getSistema()
{
    if (instancia == nullptr)
    {
        instancia = new Sistema();
    }
    // Si la instancia ya fue creada retorno una referencia a la misma instancia
    return *instancia;
}

Sistema::Sistema()
{
    this->cantSocios = 0;
    this->cantClases = 0;
    for (int i = 0; i < MAX_SOCIOS; i++)
    {
        this->socios[i] = nullptr; // inicializar los punteros en nullptr
    }
    for (int i = 0; i < MAX_CLASES; i++)
    {
        this->clases[i] = nullptr; // inicializar los punteros en nullptr
    }
}

bool Sistema::existeSocio(string ciS)
{
    for (int i = 0; i < MAX_SOCIOS; i++)
    {
        if (this->socios[i] != nullptr && this->socios[i]->getCI() == ciS)
        {
            return true; // encontre el socio buscado
        }
    }
    return false; // no encontre el socio buscado
}

bool Sistema::existeClase(int idClase)
{
    for (int i = 0; i < MAX_CLASES; i++)
    {
        if (this->clases[i] != nullptr && this->clases[i]->getId() == idClase)
        {
            return true; // existe la clase
        }
    }
    return false; // no existe la clase
}

void Sistema::agregarSocio(string ci, string nombre)
{
    try
    {
        // Si existe el socio, tiro el error.
        bool existeSocio = this->existeSocio(ci);
        cout << existeSocio << endl;
        if (existeSocio)
        {
            throw invalid_argument("\nEl socio que quiere agregar ya existe.");
        }
        else
        {
            Socio *nuevoSocio = new Socio(ci, nombre);
            for (int i = 0; i < MAX_SOCIOS; i++)
            {
                if (this->socios[i] == nullptr)
                {
                    this->socios[i] = nuevoSocio;
                    this->cantSocios += 1;
                    cout << "Socio agregado!" << endl;
                    break; // salir del ciclo una vez que se agrega el socio
                }
            }
        }
    }
    catch (const exception &e)
    {
        cerr << e.what() << '\n';
    }
}

void Sistema::agregarClase(DtClase &clase)
{
    try
    {
        // La clase es de tipo DtSpinning
        if (DtSpinning *claseSpinning = dynamic_cast<DtSpinning *>(&clase))
        {
            // Si existe tiro error.
            if (this->existeClase(clase.getId()))
            {
                throw invalid_argument("\nLa clase que quiere agregar ya existe.");
            }
            else
            {
                // Agregar la clase al sistema
                Spinning *nuevaClase = new Spinning(claseSpinning->getId(), claseSpinning->getNombre(), claseSpinning->getTurno(), claseSpinning->getCantB());
                for (int i = 0; i < MAX_CLASES; i++)
                {
                    if (this->clases[i] == nullptr)
                    {
                        this->clases[i] = nuevaClase;
                        this->cantClases += 1;
                        cout << "Clase agregada!" << endl;
                        break; // salir del ciclo una vez que se agrega la clase
                    }
                }
            }
        }
        // La clase es de tipo DtEntrenamiento
        else if (DtEntrenamiento *claseEntrenamiento = dynamic_cast<DtEntrenamiento *>(&clase))
        {
            // Si existe tiro error.
            if (this->existeClase(clase.getId()))
            {
                throw invalid_argument("\nLa clase que quiere agregar ya existe.");
            }
            else
            {
                // Agregar la clase al sistema
                Entrenamiento *nuevoEntrenamiento = new Entrenamiento(claseEntrenamiento->getId(), claseEntrenamiento->getNombre(), claseEntrenamiento->getTurno(), claseEntrenamiento->getEnRambla());
                for (int i = 0; i < MAX_CLASES; i++)
                {
                    if (this->clases[i] == nullptr)
                    {
                        this->clases[i] = nuevoEntrenamiento;
                        this->cantClases += 1;
                        cout << "Clase agregada!" << endl;
                        break; // salir del ciclo una vez que se agrega la clase
                    }
                }
            }
        }
        else
        {
            // La clase no es de tipo DtSpinning ni de tipo DtEntrenamiento
            throw invalid_argument("\nLa clase no es de un tipo válido.");
        }
    }
    catch (const exception &e)
    {
        cerr << e.what() << '\n';
    }
}

void Sistema::borrarInscripcion(string ciSocio, int idClase) {}
void Sistema::agregarInscripcion(string ciSocio, int idClase, DtFecha fecha) {}

Sistema::~Sistema()
{
}

// Definicion del constructor de copia y del operator override para que no se copie la instancia
Sistema::Sistema(const Sistema &) {}

Sistema &Sistema::operator=(const Sistema &)
{
    return *this;
}