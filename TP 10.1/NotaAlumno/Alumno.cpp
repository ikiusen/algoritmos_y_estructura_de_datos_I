#include "Alumno.h"

Alumno::Alumno()
{
    //ctor
}
Alumno::Alumno(float val1, float val2, float val3,string cedula, string nombre)
{
    this->cedula = cedula;
    this->nombre = nombre;
    this->nota1 = val1;
    this->nota2 = val2;
    this->nota3 = val3;
}

string Alumno::Getcedula()
{
    return cedula;
}

void Alumno::Setcedula(string val)
{
     cedula = val;
}

string Alumno::Getnombre()
{
    return nombre;
}

void Alumno::Setnombre(string val)
{
    nombre = val;
}

float Alumno::Getnota1()
{
    return nota1;
}

void Alumno::Setnota1(float val)
{
     nota1 = val;
}

float Alumno::Getnota2()
{
     return nota2;
}

void Alumno::Setnota2(float val)
{
    nota2 = val;
}

float Alumno::Getnota3()
{
    return nota3;
}

void Alumno::Setnota3(float val)
{
    nota3 = val;
}

string Alumno::NotaFinal()
{
    float notaFinal;
    string aprobo,retorno;
    notaFinal = (this->nota1 + this->nota2 + this->nota3);
    if(notaFinal >= 48)
    {
        aprobo = "El alumno esta aprobado";
    } else {
        aprobo = "El alumno esta desaprobado";
    }

    retorno = "La nota final del alumno es: " + std::to_string(notaFinal);
    retorno = retorno + ". " + aprobo;

    return retorno;

}
