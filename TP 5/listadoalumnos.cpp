#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int MAX = 50;
typedef struct{
    string nombre;
    string apellido;
    string DNI;
    int edad;
    int nota;
} tAlumno;

typedef tAlumno tArray[MAX];

typedef struct{
    tArray elementos;
    int contador;
} tLista;

int i;

void cargarArchivo(tLista &lista);
void guardarArchivo(tLista &lista);
void addAlumno(tLista &lista);
void eliminarAlumno(tLista &lista, string nombre, string apellido);
void calificarAlumno(tLista &lista);
void mostrarNotasAlumnos(tLista &lista);

int main(){
    tLista lista;
    string tempText,tempText1;
    int op;
    lista.contador = 0;
    cargarArchivo(lista);
    do {
        cout << "1 - Añadir un nuevo alumno" << endl;
        cout << "2 - Eliminar un alumno" << endl;
        cout << "3 - Calificar alumnos" << endl;
        cout << "4 - Listado de notas" << endl;
        cout << "0 - Salir" << endl;
        cin >> op;

        switch(op)
        {
        case 1:
            //Añadir alumnos
            addAlumno(lista);
            break;
        case 2:
            //Eliminar alumno
            cout << "Ingrese el nombre del alumno que desee eliminar: ";
            cin >> tempText;
            cout << "Ingrese el apellido del alumno que desee eliminar: ";
            cin >> tempText1;
            eliminarAlumno(lista,tempText, tempText1);
            break;
        case 3:
            //Calificar alumnos
            calificarAlumno(lista);
            break;
        case 4:
            //Listado de notas alumnos
            mostrarNotasAlumnos(lista);
            break;
        case 0:
            //Guardamos y salimos
            guardarArchivo(lista);
            break;
        default:
            cout << "Opcion desconocida!" << endl;
            break;
        }
    } while (op != 0);
return 0;
}



void cargarArchivo(tLista &lista)
{
    ifstream cArchivo;
    cArchivo.open("AyED.txt", ios::in);
    if(cArchivo.is_open())
    {
        while (!cArchivo.eof())
        {
            cArchivo >> lista.elementos[lista.contador].nombre;
            cArchivo.get( );
            cArchivo >> lista.elementos[lista.contador].apellido;
            cArchivo.get( );
            cArchivo >> lista.elementos[lista.contador].DNI;
            cArchivo >> lista.elementos[lista.contador].edad;
            cArchivo >> lista.elementos[lista.contador].nota;

            if((!lista.elementos[lista.contador].nombre.empty())&&(!lista.elementos[lista.contador].apellido.empty())&&(!lista.elementos[lista.contador].DNI.empty())&&(lista.elementos[lista.contador].edad != 0)&&(lista.elementos[lista.contador].nota >= 0))
            {
                lista.contador++;
            }
        }
    }
    cArchivo.close();
}

void guardarArchivo(tLista &lista)
{
    ofstream gArchivo;
    gArchivo.open("AyED.txt", ios::out);
    if(gArchivo.is_open())
    {
        for(i = 0; i < lista.contador; i++)
        {
             gArchivo << lista.elementos[i].nombre<< " " << lista.elementos[i].apellido << " " <<lista.elementos[i].DNI << " " << lista.elementos[i].edad << " " << lista.elementos[i].nota <<endl;
        }
    }
    gArchivo.close();
}

void addAlumno(tLista &lista)
{
    if(lista.contador < MAX)
    {
        cout << "Ingrese el nombre del alumno: ";
        cin.ignore();
        getline(cin,lista.elementos[lista.contador].nombre);
        cout << "Ingrese el apellido del alumno: ";
        getline(cin,lista.elementos[lista.contador].apellido);
        cout << "Ingrese el DNI del alumno: ";
        getline(cin,lista.elementos[lista.contador].DNI);
        cout << "Ingrese la edad del alumno: ";
        cin >> lista.elementos[lista.contador].edad;
        lista.elementos[lista.contador].nota = 0;
        lista.contador = (lista.contador + 1);

    } else
        cout << "Maximo de archivos alcanzados (50)!" << endl;
}

void eliminarAlumno(tLista &lista, string nombre, string apellido)
{
    int pos = 0;
    for(i = 0; i < lista.contador; i++)
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
        }
    }

}

void calificarAlumno(tLista &lista)
{
    int nota;
    for(i=0; i < lista.contador; i++)
    {
        cout << "Nombre del alumno: " << lista.elementos[i].nombre << endl;
        cout << "Apellido del alumno: " << lista.elementos[i].apellido << endl;
        cout << "Ingrese nota del alumno: ";
        cin >> nota;
        if((nota>=1)&&(nota <=10))
        {
            lista.elementos[i].nota = nota;
        } else {
            cout << "Nota no valida!" << endl;
            cout << "Reingrese la nota de: " << lista.elementos[i].nombre << " " << lista.elementos[i].apellido << endl;
            cin >> nota;
            lista.elementos[i].nota = nota;
        }

    }
}
void mostrarNotasAlumnos(tLista &lista)
{
    double media = 0;
    int total, maxima = 0;
    string nombre, apellido;

    cout << "Listado de notas:" << endl;
    for(i = 0; i < lista.contador; i++)
    {
        cout << lista.elementos[i].nota << endl;
        if(lista.elementos[i].nota >= maxima)
        {
            maxima = lista.elementos[i].nota;
            nombre = lista.elementos[i].nombre;
            apellido = lista.elementos[i].apellido;
        }
        media = media + lista.elementos[i].nota;
        total = i;
    }
    media = (media/i);
    cout << "La nota mas alta pertenece a: " << nombre << " " << apellido << " y es: " << maxima << endl;
    cout << "La nota media es: " << media << endl;
}
