#ifndef DTFECHA_H
#define DTFECHA_H
#include <iostream>
using namespace std;

// Axel
class DtFecha
{
private:
    // No tiro enie aca porque sino puede colapsar todo
    int dia, mes, anio;

public:
    DtFecha();
    DtFecha(int d, int m, int a);
    int getDia();
    int getMes();
    int getAnio();
    bool operator==(const DtFecha &fecha);
    friend ostream &operator<<(ostream &o, DtFecha &f);
    ~DtFecha();
};

#endif
