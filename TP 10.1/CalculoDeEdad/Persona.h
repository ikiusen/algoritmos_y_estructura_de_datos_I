#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona
{
    public:
        Persona();
        Persona(string nombre, int anio, int mes, int dia);

        string Getnombre();
        void Setnombre(string val);
        int Getanio();
        void Setanio(int val);
        int Getmes();
        void Setmes(int val);
        int Getdia();
        void Setdia(int val);
        int CalcularEdad(int anio, int mes, int dia);

    private:
        string nombre;
        int anio;
        int mes;
        int dia;
};

#endif // PERSONA_H
