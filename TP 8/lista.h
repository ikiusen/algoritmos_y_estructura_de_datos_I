#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#endif // LISTA_H_INCLUDED

#include <string>
using namespace std;

const int MAX = 100;

//Estructura de cada alumno individual
typedef struct{
    string nombre;
    string apellido;
    string carrera;
    string anio;
} tAlumno;
//Array de alumnos
typedef tAlumno tArray[MAX];

//Lista de alumnos
typedef struct{
    tArray elementos;
    int contador;
} tLista;

//Verifica y añade alumnos a la lista
void addAlumno(tLista &lista, bool &ok);

//Elimina un alumno a partir de su nombre y apellido
void eliminarAlumno(tLista &lista, string nombre, string apellido);

//Obtiene la pos del alumno ingresado
void buscarAlumno(tLista &lista, string nombre, string apellido);

//Muestra al alumno en la pos ingresada
void mostrarAlumnoPorPos(tLista &lista, int pos);

//Muestra toda la lista de alumnos
void mostrarAlumnos(tLista &lista);

bool operator>(tAlumno opIzq, tAlumno opDer);

bool operator<(tAlumno opIzq, tAlumno opDer);
