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

Socio *Sistema::existeSocio(string ciS)
{
    for (int i = 0; i < MAX_SOCIOS; i++)
    {
        if (this->socios[i] != nullptr && this->socios[i]->getCI() == ciS)
        {
            return this->socios[i]; // encontre el socio buscado
        }
    }
    return nullptr; // no encontre el socio buscado
}

Clase *Sistema::existeClase(int idClase)
{
    for (int i = 0; i < MAX_CLASES; i++)
    {
        if (this->clases[i] != nullptr && this->clases[i]->getId() == idClase)
        {
            return this->clases[i]; // devuelve la instancia de la clase
        }
    }
    return nullptr; // no se encontró la clase
}

void Sistema::agregarSocio(string ci, string nombre)
{
    try
    {
        // Si existe el socio, tiro el error.
        Socio *existeSocio = this->existeSocio(ci);
        if (existeSocio != nullptr)
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
            if (this->existeClase(clase.getId()) != nullptr)
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
            if (this->existeClase(clase.getId()) != nullptr)
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

void Sistema::agregarInscripcion(string ciSocio, int idClase, DtFecha fecha)
{
    try
    {
        Clase *clase = this->existeClase(idClase);
        Socio *socio = this->existeSocio(ciSocio);
        // Si la clase no existe
        if (clase == nullptr)
        {
            throw new invalid_argument("La clase a la que quiere anotarse no existe\n");
        }
        // Si el socio no existe
        else if (socio == nullptr)
        {
            throw new invalid_argument("El socio que quiere anotar no existe.\n");
        }
        // Si ya no hay cupos
        else if (clase->cupo() == 0)
        {
            throw new invalid_argument("La clase a la que quiere anotarse ya no tiene mas cupos.\n");
        }
        // Si ya existe la inscripcion
        else if (clase->existeInscripcion(ciSocio))
        {
            throw new invalid_argument("El socio ya se ha anotado a esta clase.\n");
        }
        // Agrego la inscripcion
        else
        {
            Inscripcion *nuevaInscripcion = new Inscripcion(*socio, idClase, fecha);
            clase->agregarInscripcion(*nuevaInscripcion);
            cout << "La inscripcion se ha realizado correctamente.\n";
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Sistema::borrarInscripcion(string ciSocio, int idClase) {}

Sistema::~Sistema()
{
}

// Definicion del constructor de copia y del operator override para que no se copie la instancia
Sistema::Sistema(const Sistema &) {}

Sistema &Sistema::operator=(const Sistema &)
{
    return *this;
}