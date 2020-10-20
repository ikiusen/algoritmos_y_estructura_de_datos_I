#include <iostream>
#include "lista.h"

void addAlumno(tLista &lista, bool &ok)
{
    tAlumno alumno;
    ok = true;

    cout << "Ingrese el nombre del alumno: ";
    cin.ignore();
    getline(cin,alumno.nombre);
    cout << "Ingrese el apellido del alumno: ";
    getline(cin,alumno.apellido);
    cout << "Ingrese la carrera del alumno: ";
    getline(cin,alumno.carrera);
    cout << "Ingrese el año en que se encuentra el alumno: ";
    cin >> alumno.anio;

    if(lista.contador == MAX)
    {
        ok = false;
    } else {
        int i = 0;
        while ((i < lista.contador) && (lista.elementos[i] < alumno))
        {
            i++;
        }
        for(int j = lista.contador; j > i; j--)
        {
            lista.elementos[j] = lista.elementos[j - 1];
        }
        lista.elementos[i] = alumno;
        lista.contador++;
    }
}

void eliminarAlumno(tLista &lista, string nombre, string apellido)
{
    int pos = 0;
    for(int i = 0; i < lista.contador; i++)
    {
        if((lista.elementos[i].nombre == nombre)&&(lista.elementos[i].apellido == apellido))
        {
            pos = i;
            for(i = pos; i < lista.contador - 1; i++)
            {
             lista.elementos[i] = lista.elementos[i+1];
            }
            lista.contador = (lista.contador - 1);
            cout << "Alumno eliminado correctamente!" << endl;
            cout << " " << endl;
        }
    }
}


void buscarAlumno(tLista &lista, string nombre, string apellido)
{
    int pos = 0;
    bool encontrado = false;
    for(int i = 0; i < lista.contador; i++)
    {
        if((lista.elementos[i].nombre == nombre)&&(lista.elementos[i].apellido == apellido))
        {
            cout << "El alumno se encuentra en la posicion: " << i << endl;
            cout << " " << endl;
            encontrado = true;
        }
    }
    if(!encontrado)
    {
        cout << "El alumno no se encuentra en la lista." << endl;
        cout << " " << endl;
    }

}

void mostrarAlumnos(tLista &lista)
{
    cout << "Listado de alumnos:" << endl;
    cout << " " << endl;
    for(int i = 0; i < lista.contador; i++)
    {
        cout << "Nombre: " << lista.elementos[i].nombre << endl;
        cout << "Apellido: " << lista.elementos[i].apellido << endl;
        cout << "Carrera: " << lista.elementos[i].carrera << endl;
        cout << "Año: " << lista.elementos[i].anio << endl;
        cout << " " << endl;
    }
}


void mostrarAlumnoPorPos(tLista &lista, int pos)
{
    if(!lista.elementos[pos].nombre.empty())
    {
        cout << "Alumno en posicion: " << pos << endl;
        cout << "Nombre: " << lista.elementos[pos].nombre << endl;
        cout << "Apellido: " << lista.elementos[pos].apellido << endl;
        cout << "Carrera: " << lista.elementos[pos].carrera << endl;
        cout << "Anio: " << lista.elementos[pos].anio << endl;
        cout << " " << endl;
    }
}

void ordenarLista(tLista &lista)
{
    tAlumno temp;
    for(int i = 0; i < lista.contador; i++)
    {
       for(int j = 0; j < lista.contador - 1; j++)
        if(lista.elementos[j] > lista.elementos[j+1])
       {
           temp = lista.elementos[j];
           lista.elementos[j] = lista.elementos[j+1];
           lista.elementos[j+1] = temp;
       }
    }
    mostrarAlumnos(lista);
}

void ordenarListaDesc(tLista &lista)
{
    tAlumno temp;
    for(int i = 0; i < lista.contador; i++)
    {
       for(int j = 0; j < lista.contador - 1; j++)
        if(lista.elementos[j] < lista.elementos[j+1])
       {
           temp = lista.elementos[j];
           lista.elementos[j] = lista.elementos[j+1];
           lista.elementos[j+1] = temp;
       }
    }
    mostrarAlumnos(lista);
}


bool operator>(tAlumno opIzq, tAlumno opDer)
{
    return(opIzq.nombre > opDer.nombre);
}

bool operator<(tAlumno opIzq, tAlumno opDer)
{
    return(opIzq.nombre < opDer.nombre);
}
