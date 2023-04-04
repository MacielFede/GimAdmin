#include "h/Sistema.h"
#include <string>
#include "h/Helpers.h"

int main()
{
    Sistema &sistema = Sistema::getSistema();
    // Obtengo una referencia a la unica instancia de Sistema

    string comando, nombreS, ciS, nomClase, tipoClase, enRambla;
    int idClase, dia, mes, anio, turno, cantBicis;
    Turno nuevoTurno;

    cout << "\nBienvenido a su mejor gimnasio. Para ejecutar los comandos debe ingresar el numero del mismo.\n";
    do
    {
        cout << "\nComandos:\n";
        cout << "1 - Agregar socio.\n";
        cout << "2 - Agregar clase.\n";
        cout << "3 - Agregar inscripcion.\n";
        cout << "4 - Borrar inscripcion.\n";
        cout << "5 - Salir.\n\n";

        fflush(stdin);
        // fflush() limpia el buffer del sistema, como estamos usando el buffer de la libreria std siempre puede quedarnos basura en el buffer
        getline(cin, comando);
        // getLine() lee 1 linea (osea hasta encontrar un \n) y guarda todo en la variable string que le pasemos
        // cin es el buffer de la libreria std (character in)
        switch (comando[0])
        {
        case '1':
            cout << "Agregar socio:\nIngrese la cedula del socio: ";
            getline(cin, ciS);
            cout << "Ingrese el nombre del socio: ";
            getline(cin, nombreS);
            cout << "nombre: " << nombreS << " cedula: " << ciS << endl;
            sistema.agregarSocio(ciS, nombreS);
            break;

        case '2':
            cout << "Agregar clase:\nIngrese el numero identificador de la clase: ";
            getInt("", idClase);
            cout << "Ingrese el nombre de la clase: ";
            getline(cin, nomClase);
            do
            {
                getInt("Indique el turno de la clase [Manana(1), Tarde(2), Noche(3)]: ", turno);
            } while (turno > 3 || turno < 1);

            // Casteo el entero ingresado para poder seleccionar el turno del ennum.
            nuevoTurno = static_cast<Turno>(turno);

            do
            {
                cout << "Indique el tipo de clase [Spinning(S), Entrenamiento(E)]: ";
                getline(cin, tipoClase);
            } while (tipoClase[0] != 'S' && tipoClase[0] != 's' && tipoClase[0] != 'E' && tipoClase[0] != 'e');

            // Creamos clase de Spinning.
            if (tipoClase[0] == 'S' || tipoClase[0] == 's')
            {
                getInt("Ingrese la cantidad de bicicletas de la clase: ", cantBicis);

                DtClase *nuevaClase = new DtSpinning(idClase, nomClase, nuevoTurno, cantBicis);
                sistema.agregarClase(*nuevaClase);
                cout << "id clase: " << idClase << " nombre clase: " << nomClase << " turno: " << nuevoTurno << " Tipo de clase: " << tipoClase << " cantidad bicis: " << cantBicis << endl;
            }

            // Creamos clase de Entrenamiento
            else
            {
                do
                {
                    cout << "Indique si el entrenamiento sera en rambla o no[S/N]: ";
                    getline(cin, enRambla);
                } while (enRambla[0] != 'S' && enRambla[0] != 's' && enRambla[0] != 'N' && enRambla[0] != 'n');
                bool esEnRambla = (enRambla[0] == 'S' || enRambla[0] == 's') ? true : false;
                DtClase *nuevaClase = new DtEntrenamiento(idClase, nomClase, nuevoTurno, esEnRambla);
                sistema.agregarClase(*nuevaClase);
                cout << "id clase: " << idClase << " nombre clase: " << nomClase << " turno: " << turno << " tipo de clase: " << tipoClase << " en rambla: " << enRambla << endl;
            }
            break;

        case '3':
            cout << "Agregar inscripcion:\nIngrese la cedula del socio: ";
            getline(cin, ciS);
            getInt("Ingrese el numero identificador de la clase: ", idClase);
            getInt("Ingrese el numero del dia de hoy: ", dia);
            getInt("Ingrese el numero del dia de mes actual: ", mes);
            getInt("Ingrese el numero del dia de anio actual: ", anio);
            cout << "cedula: " << ciS << " id clase: " << idClase << " fecha: " << dia << "/" << mes << "/" << anio << endl;
            // TODO: sistema.agregarInscripcion(ciS, idClase, dia, mes, anio)
            break;

        case '4':
            cout << "Borrar inscripcion:\nIngrese la cedula del socio: ";
            getline(cin, ciS);
            getInt("Ingrese el numero id de la clase: ", idClase);
            cout << "cedula:" << ciS << " id clase: " << idClase << endl;
            // TODO: sistema.borrarInscripcion(ciS, idClase)
            break;

        case '5':
            cout << "\nGracias por usar el sistema!\n";
            break;

        default:
            cout << "Ingresaste un comando inexistente.\n";
            break;
        }
    } while (comando[0] != '5');
    delete &sistema;
    return 0;
}