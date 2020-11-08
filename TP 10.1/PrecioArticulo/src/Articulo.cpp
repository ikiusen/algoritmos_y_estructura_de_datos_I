#include "Articulo.h"

Articulo::Articulo()
{
    costoBase = 10.0;
}



Articulo::Articulo(float val)
{
    costoBase = val;

}

float Articulo::GetcostoBase()
{
    return this->costoBase;
}

void Articulo::SetcostoBase(float val)
{
    this->costoBase = val;
}

float Articulo::PrecioPorMayor()
{
    float precioTotal;
    precioTotal = (this->costoBase + (this->costoBase*15)/100);
    return precioTotal;
}

float Articulo::PrecioDetalle()
{
    float precioTotal;
    precioTotal = (this->costoBase + (this->costoBase*30)/100);
    return precioTotal;
}
