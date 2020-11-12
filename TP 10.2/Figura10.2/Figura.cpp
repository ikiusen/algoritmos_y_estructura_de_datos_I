#include <iostream>
#include "Figura.h"

using std::cout;
using std::endl;

Figura::Figura()
{
    punto = 2;
    //ctor
}

Figura::~Figura()
{
    delete this;
    //dtor
}

int Figura::Getpunto()
{
    return punto;
}

void Figura::Setpunto(int val)
{
    punto = val;
}

void Figura::Dibujar()
{
    cout << "Dibujando puntos! ..... " << punto << endl;
}

void Figura::Borrar()
{
    cout << "Borrando puntos!" << endl;
}

void Figura::Mover()
{
    cout << "Moviendo Punto!" << endl;
}

void Figura::Rotar()
{
    cout << "Rotando Punto!" << endl;
}
