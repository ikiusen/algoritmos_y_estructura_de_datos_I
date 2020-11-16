#include "Pelicano.h"
#include <iostream>
using namespace std;

Pelicano::Pelicano()
{
    //ctor
}

Pelicano::~Pelicano()
{
    delete this; //dtor
}

void Pelicano::comer()
{
    cout << "El pelicano roza el agua y agarra un pescado, es hora de comer! " << endl;
    cout << "" << endl;
}

void Pelicano::dormir()
{
    cout << "El pelicano se reposa en un arbol y se hecha a dormir " << endl;
    cout << "" << endl;

}

void Pelicano::nacer()
{
    cout << "Ha nacido un nuevo pelicano! " << endl;
    cout << "" << endl;
}

void Pelicano::ponerHuevo()
{
    cout << "El pelicano ha puesto un huevo! " << endl;
    cout << "" << endl;
}
