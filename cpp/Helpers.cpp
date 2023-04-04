#include "../h/Helpers.h"

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