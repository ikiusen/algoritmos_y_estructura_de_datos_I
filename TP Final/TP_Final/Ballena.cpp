#include "Ballena.h"

#include <iostream>
using namespace std;

Ballena::Ballena()
{
    //ctor
}

Ballena::~Ballena()
{
    delete this;//dtor
}

void Ballena::comer()
{
    cout << "La ballena est� comiendo " << endl;
    cout << "" << endl;
}

void Ballena::dormir()
{
    cout << "La ballena duerme " << endl;
    cout << "" << endl;
}

void Ballena::nacer()
{
    cout << "Ha nacido una ballena! " << endl;
    cout << "" << endl;
}

void Ballena::amamantar()
{
    cout << "La ballena est� amamantando! " << endl;
    cout << "" << endl;
}

