#include <iostream>

#include "Cuadrado.h"

using std::cout;
using std::endl;

Cuadrado::Cuadrado()
{
    lado = 5;
    //ctor
}

Cuadrado::~Cuadrado()
{
    delete this;
    //dtor
}

int Cuadrado::Getlado()
{
    return lado;
}
void Cuadrado::Setlado(int val)
{
    lado = val;
}

void Cuadrado::Dibujar()
{
    cout << "Dibujando Cuadrados! " << " Lados: " << lado << endl;
}
void Cuadrado::Borrar()
{
    cout << "Borrando Cuadrados!"  << endl;
}
