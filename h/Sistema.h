#ifndef SISTEMA_H
#define SISTEMA_H

#include "Socio.h"
#include "Clase.h"
#include "Spinning.h"
#include "Entrenamiento.h"
#include "DTClase.h"
#include "DTFecha.h"
#include "DTSpinning.h"
#include "DTEntrenamiento.h"
class Sistema
{
private:
    static const int MAX_SOCIOS = 30;
    static const int MAX_CLASES = 10;
    int cantSocios;
    int cantClases;
    Socio *socios[MAX_SOCIOS];
    Clase *clases[MAX_CLASES];
    static Sistema *instancia;
    // Declaro la instancia sistema que despues le damos valor en cpp (no le doy valor aqui porque lo haria constante)

    Sistema();
    // Hago el constructor privado para que ningún otro objeto pueda crear una instancia Sistema

    Sistema(const Sistema &);
    // el constructor de copia sirve para que si alguien quiere crear otra instancia se cree una copia de la primera
    Sistema &operator=(const Sistema &);
    // el operator override lo uso para que no se pueda usar sistema = x y romper todo
public:
    static Sistema &getSistema();
    // crea una instancia de Sistema si es que no se creo y la retorna.

    bool podemosAgregarSocios();
    // Retorna true si hay espacio en el array socios[] (cantSocios < MAX_SOCIOS)

    bool podemosAgregarClases();
    // Retorna true si hay espacio en el array clases[] (cantClases < MAX_CLASES)

    bool hayClases();
    //Retorna true si hay al menos 1 clase creada
    
    bool haySocios();
    // Retorna true si hay al menos 1 usuario ingresado

    void imprimirClases();
    // Imprime todas las clases creadas hasta el momento

    Socio * existeSocio(string ciS);
    // Se fija si existe el socio.

    Clase * existeClase(int idClase);
    // Se fija si existe la clase

    void agregarSocio(string ci, string nombre);
    // Crea un nuevo socio en el sistema. En caso de ya existir, levanta la excepción std::invalid_argument.

    void agregarClase(DtClase &clase);
    //  Crea una nueva clase en el sistema. En caso de ya existir, levanta una excepción

    void agregarInscripcion(string ciSocio, int idClase, DtFecha fecha);
    // Crea una inscripción de un socio a una clase. La inscripción tiene lugar siempre y cuando el socio y
    // la clase existan, de lo contrario se levanta una excepción std::invalid_argument. Si ya existe una
    // inscripción de ese usuario para esa clase, o si el cupo de esa clase ya fue alcanzado, también se
    // levanta una excepción std::invalid_argument.

    void borrarInscripcion(string ciSocio, int idClase);
    //  Borra la inscripción de un socio a una clase. Si no existe una inscripción de ese usuario para esa
    //  clase, se levanta una excepción std::invalid_argument.

    ~Sistema();
};

#endif
