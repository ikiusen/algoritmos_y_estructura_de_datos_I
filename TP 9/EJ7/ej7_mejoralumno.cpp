#include <iostream>
#include <string>

using namespace std;

struct Alumno {
    string nombre;
    int edad;
    float promedio;
}alumno[3], *punt_alumno = alumno;

void addAlumno();
void mostrarAlumnoMayorPromedio(Alumno *);

int main()
{
    addAlumno();
    mostrarAlumnoMayorPromedio(punt_alumno);
    delete []punt_alumno;
    return 0;
}

void addAlumno()
{
    int n = 3;
    for(int i = 0; i < n; i++)
    {
        cout << "Ingrese el nombre del alumno: ";
        cin >> (punt_alumno+i)->nombre;
        cout << "Ingrese la edad del alumno: ";
        cin >> (punt_alumno+i)->edad;
        cout << "Ingrese el promedio del alumno: ";
        cin >> (punt_alumno+i)->promedio;
    }
}

void mostrarAlumnoMayorPromedio (Alumno *punt_alumno)
{
    int n = 3;
    float promedio_mayor = 0.0;
    int pos;

    for(int i; i < n; i++)
    {
        if((punt_alumno+i)->promedio >= promedio_mayor)
            {
                promedio_mayor = (punt_alumno+i)->promedio;
                pos = i;
            }
    }

    cout << "El alumno con mayor promedio es:" << endl;
    cout << "Nombre: " << (punt_alumno+pos)->nombre << endl;
    cout << "Edad: " << (punt_alumno+pos)->edad << endl;
    cout << "Promedio: " << (punt_alumno+pos)->promedio << endl;
    cout << "Se encuentra en la posicion: " << pos << endl;
}
