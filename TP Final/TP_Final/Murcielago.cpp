#include "Murcielago.h"

#include <iostream>
using namespace std;

Murcielago::Murcielago()
{
    //ctor
}

Murcielago::~Murcielago()
{
    delete this;
    //dtor
}

void Murcielago::comer()
{
    cout << "El murcielago se ha puesto a comer! " << endl;
    cout << "" << endl;
}

void Murcielago::dormir()
{
   cout << "El murcielago se ha puesto a dormir! " << endl;
   cout << "" << endl;
}

void Murcielago::nacer()
{
    cout << "Un murcielago ha nacido! " << endl;
    cout << "" << endl;
}

void Murcielago::amamantar()
{
    cout << "El murcielago se ha puesto a amamantar! " << endl;
    cout << "" << endl;
}
