#include <iostream>

#include "Circulo.h"

using std::cout;
using std::endl;

Circulo::Circulo()
{
    radio = 2.5;
    //ctor
}

Circulo::~Circulo()
{
    delete this;
    //dtor
}

float Circulo::Getradio()
{
    return radio;
}
void Circulo::Setradio(float val)
{
    radio = val;
}
void Circulo::Dibujar()
{
    cout << "Mostrando Circulos! " << " Radio: " << radio << endl;
}
void Circulo::Borrar()
{
    cout << "Borrando Circulos! " << endl;
}
