#include "Foca.h"

#include <iostream>
using namespace std;

Foca::Foca()
{
    //ctor
}

Foca::~Foca()
{
    delete this;
    //dtor
}

void Foca::comer()
{
    cout << "La foca se ha puesto a comer! " << endl;
    cout << "" << endl;
}
void Foca::dormir()
{
    cout << "La foca se ha puesto a dormir! " << endl;
    cout << "" << endl;

}
void Foca::nacer()
{
    cout << "Ha nacido una pequeña foca! " << endl;
    cout << "" << endl;
}
void Foca::amamantar()
{
    cout << "La foca se ha puesto a amamantar! " << endl;
    cout << "" << endl;
}
