#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
using namespace std;

class Alumno
{
    public:
        Alumno();
        Alumno(float val1, float val2, float val3,string cedula, string nombre);
        string Getcedula();
        void Setcedula(string val);
        string Getnombre();
        void Setnombre(string val);
        float Getnota1();
        void Setnota1(float val);
        float Getnota2();
        void Setnota2(float val);
        float Getnota3();
        void Setnota3(float val);
        string NotaFinal();


    private:
        string cedula;
        string nombre;
        float nota1;
        float nota2;
        float nota3;
};

#endif // ALUMNO_H
