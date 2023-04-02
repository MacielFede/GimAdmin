#include "h/Socio.h"
#include "h/DTSocio.h"

int main()
{
    char * name = new (char [10]);
    char * ci = new (char [8]);
    fflush( stdin );
    //Elimino todo lo que hay en el buffer
    cout << "Ingrese el nombre de usuario: ";
    fgets (name, 10, stdin);
    //fgets() agarra todos los caracteres que encuentra en lo que le pasemos (en este caso stdin que es el buffer, pero podría ser un archivo) 
    //y coloca el máximo que le digamos (10 en este caso) en la variable que le digamos (name en este caso)
    cout << "Ingrese la ci del usuario: ";
    fgets(ci, 8, stdin);

    DtSocio * socio1 = new DtSocio(ci, name);

    cout << "CI: " << socio1->getCI() << "Nombre: " << socio1->getNombre();
    return 0;
}