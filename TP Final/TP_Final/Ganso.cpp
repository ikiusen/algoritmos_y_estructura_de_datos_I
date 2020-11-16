#include "Ganso.h"
#include <iostream>
using namespace std;

Ganso::Ganso()
{
    //ctor
}

Ganso::~Ganso()
{
    delete this; //dtor
}

void Ganso::comer()
{
    cout << "El ganso se acerca a las semillas y se pone a comer! " << endl;
    cout << "" << endl;
}
void Ganso::dormir()
{
    cout << "El ganso se acomoda para dormir! " << endl;
    cout << "" << endl;
}
void Ganso::ponerHuevo()
{
    cout << "El ganso ha puesto un huevo! " << endl;
    cout << "" << endl;
}
void Ganso::nacer()
{
    cout << "Ha nacido un pequeño ganso! " << endl;
    cout << "" << endl;
}
