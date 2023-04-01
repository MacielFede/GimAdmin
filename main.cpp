#include "h/Sistema.h"


int main()
{
    Sistema& sistema = Sistema::getSistema(); 
    // Obtengo una referencia a la unica instancia de Sistema
    string comando;
    
        cout<< "\nBienvenido a su mejor gimnasio. Para ejecutar los comandos debe ingresar el numero del mismo.\n";
    do{
        fflush(stdin);
        //Elimino todo lo que hay en el buffer(stdin)
        cout<<"\nComandos:\n";
        cout<< "1 - Agregar socio.\n";
        cout<< "2 - Agregar clase.\n";
        cout<< "3 - Agregar inscripcion.\n";
        cout<< "4 - Borrar inscripcion.\n";
        cout<< "5 - Salir.\n\n";
        
        getline(cin, comando);
        //getLine() lee 1 linea (osea hasta encontrar un \n) y guarda todo en la variable string que le pasemos
        //cin es el buffer del sistema (osea lo que ingresa el usuario)
        switch (comando[0])
        {
        case '1':
            /* code */
            string *nombreS, *ciS;
            //Uso punteros para no crear variables que no se si voy a usar al inicio de main. 
            //Ademas para borrar la memoria usada una vez que no la necesito mas.
            cout << "Agregar socio:\nIngrese la cedula del socio: ";
            getline(cin, *ciS);
            fflush(stdin);
            //if(sistema.socioYaExiste(ciS)){}
            //else{
                cout<<"Ingrese el nombre del socio: ";
                sistema.agregarSocio(*ciS, *nombreS);
            //}
            delete nombreS;
            delete ciS;
            break;
        case '2':
            /* code */
            cout << "Agregar clase:\n ";//Que le pedimos al usuario?
            break;
        case '3':
            /* code */
            cout << "Agregar inscripcion:\n";//String ciSocio, int idClase, Fecha fecha
            break;
        case '4':
            /* code */
            cout << "Borrar inscripcion:\n";//string ciSocio, int idClase)
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