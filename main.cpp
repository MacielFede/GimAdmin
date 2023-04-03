#include "h/Sistema.h"
#include <limits>

void getInt(string mensaje, int &numero);
//lee el buffer las veces necesarias hasta que el usuario le de un int y lo guarda en la variable pasada como referencia

int main()
{
    Sistema& sistema = Sistema::getSistema(); 
    // Obtengo una referencia a la unica instancia de Sistema

    string comando, nombreS, ciS;
    int idClase, dia, mes , anio;
    //Uso punteros para no crear variables que no se si voy a usar al inicio de main. 
    //Ademas para borrar la memoria usada una vez que no la necesito mas.
    
    cout<< "\nBienvenido a su mejor gimnasio. Para ejecutar los comandos debe ingresar el numero del mismo.\n";
    do{
        cout<<"\nComandos:\n";
        cout<< "1 - Agregar socio.\n";
        cout<< "2 - Agregar clase.\n";
        cout<< "3 - Agregar inscripcion.\n";
        cout<< "4 - Borrar inscripcion.\n";
        cout<< "5 - Salir.\n\n";

        fflush(stdin);
        //fflush() limpia el buffer del sistema, como estamos usando el buffer de la libreria std siempre puede quedarnos basura en el buffer 
        getline(cin, comando);
        //getLine() lee 1 linea (osea hasta encontrar un \n) y guarda todo en la variable string que le pasemos
        //cin es el buffer de la libreria std (character in)
        switch (comando[0])
        {
        case '1':
            cout << "Agregar socio:\nIngrese la cedula del socio: ";
            getline(cin, ciS);
            cout<<"Ingrese el nombre del socio: ";
            getline(cin, nombreS);
            cout<< "nombre: " << nombreS <<" cedula: "<<ciS << endl;
            //TODO: sistema.agregarSocio(ciS, nombreS);
            break;
        case '2':
            cout << "Agregar clase:\n ";//? Que le pedimos al usuario?
            break;
        case '3':
            cout << "Agregar inscripcion:\nIngrese la cedula del socio: ";
            getline(cin, ciS);
            getInt("Ingrese el numero identificador de la clase: ", idClase);
            getInt("Ingrese el numero del dia de hoy: ",dia);
            getInt("Ingrese el numero del dia de mes actual: ",mes);
            getInt("Ingrese el numero del dia de anio actual: ", anio);
            cout<<"cedula: "<< ciS<< " id clase: " << idClase<< " fecha: "<< dia << "/" << mes << "/" << anio << endl;
            //TODO: sistema.agregarInscripcion(ciS, idClase, dia, mes, anio)
            break;
        case '4':
            cout << "Borrar inscripcion:\nIngrese la cedula del socio: ";//string ciSocio, int idClase)
            getline(cin, ciS);
            getInt("Ingrese el numero id de la clase: ", idClase);
            cout<< "cedula:" << ciS << " id clase: " << idClase << endl;
            //TODO: sistema.borrarInscripcion(ciS, idClase)
            break;
        case '5':
            cout << "\nGracias por usar el sistema!\n";
            break;
        default:
            cout<< "Ingresaste un comando inexistente.\n";
            break;
        }
    }while(comando[0] != '5');
    delete &sistema;
    return 0;
} 

void getInt(string mensaje, int &numero){
    string input;
    bool numConvertido = false;
    cout << mensaje;
    do{
        try{
            getline(cin, input);
            stoi(input);
            numero = stoi(input);
            //stoi() agarra el string pasado y lo intenta convertir en un int. Si hay un error corta la funcion, 
            // al estar dentro de un try-catch una vez lanzado el error se corta la ejecucion
            if(numero<1){ cout<<"-Debes ingresar un numero valido-\n"; }
            else{ numConvertido = true; }
        }catch(const exception& error){
            cout<< "\n-Debes ingresar un numero valido-\n";
        }
    }while(!numConvertido);
    fflush(stdin);
    numero = stoi(input);
}