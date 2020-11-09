#include "Persona.h"

Persona::Persona()
{
    //ctor
}
Persona::Persona(string nombre, int anio, int mes, int dia)
{
    this->nombre = nombre;
    this->anio = anio;
    this->mes = mes;
    this->dia = dia;
}
string Persona::Getnombre()
{
     return nombre;
}
void Persona::Setnombre(string val)
{
    nombre = val;
}
int Persona::Getanio()
{
    return anio;
}
void Persona::Setanio(int val)
{
    anio = val;
}
int Persona::Getmes()
{
    return mes;
}
void Persona::Setmes(int val)
{
    mes = val;
}
int Persona::Getdia()
{
    return dia;
}
void Persona::Setdia(int val)
{
    dia = val;
}

int Persona::CalcularEdad(int anio, int mes, int dia)
{
    int edad;
    if(this->mes < mes)
    {
        edad = (anio - this->anio);
    } else
        {
            if(this->dia < dia)
            {
                edad = (anio - this->anio);
            } else {
                edad = (anio - this->anio) - 1;
            }
        }
    return edad;
}
