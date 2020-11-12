#include <iostream>

#include "Triangulo.h"

using std::cout;
using std::endl;

Triangulo::Triangulo()
{
    lado = 2;
    lado2 = 5;
    base = 3;
    //ctor
}

Triangulo::~Triangulo()
{
    delete this;
    //dtor
}

int Triangulo::Getlado()
{
    return lado;
}
void Triangulo::Setlado(int val)
{
    lado = val;
}
int Triangulo::Getlado2()
{
    return lado2;
}
void Triangulo::Setlado2(int val)
{
    lado2 = val;
}
int Triangulo::Getbase()
{
    return base;
}
void Triangulo::Setbase(int val)
{
    base = val;
}
void Triangulo::Dibujar()
{
    cout << "Dibujando Triangulos! " << "Lado: " << lado << " Lado2: " << lado2 << " Base: " << base << endl;
}
void Triangulo::Borrar()
{
    cout << "Borrando Triangulos!" << endl;
}
