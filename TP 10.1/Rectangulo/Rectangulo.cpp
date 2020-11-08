#include "Rectangulo.h"

Rectangulo::Rectangulo()
{
    //ctor
}

Rectangulo::Rectangulo(float ancho,float alto)
{
    this->alto = alto;
    this->ancho = ancho;
    //ctor
}

float Rectangulo::Getancho()
{
    return ancho;
}

void Rectangulo::Setancho(float val)
{
    ancho = val;
}

float Rectangulo::Getalto()
{
    return alto;
}

void Rectangulo::Setalto(float val)
{
    alto = val;
}

float Rectangulo::calcularArea()
{
    float area;

    area = (this->ancho * (this->alto));

    return area;
}

float Rectangulo::calcularPerimetro()
{
    float perim;

    perim = (this->alto*2 + this->ancho*2);

    return perim;
}
