#include <iostream>
#include <string>
#include "Alumno.h"

using namespace std;

int main()
{
    string dni,nombre;
    float nota1,nota2,nota3;
    cout << "Ingrese DNI del alumno: ";
    cin >> dni;
    cout << "Ingrese el nombre del alumno: ";
    cin.ignore();
    getline(cin,nombre);
    cout << "Ingrese la nota 1: ";
    cin >>nota1;
    cout << "Ingrese la nota 2: ";
    cin >>nota2;
    cout << "Ingrese la nota 3: ";
    cin >>nota3;
    Alumno alumno1(nota1,nota2,nota3,dni,nombre);
    cout << "Datos del alumno: " << endl;
    cout << alumno1.Getnombre() << endl;
    cout << alumno1.Getcedula() << endl;
    cout << alumno1.NotaFinal() << endl;

    return 0;
}
