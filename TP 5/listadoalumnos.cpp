#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int MAX = 50;
struct  Alumno {
    string nombre;
    string apellido;
    string DNI;
    int edad;
    double nota;
};
Alumno lista[MAX];
int contador;
int i;
string tempText;

void cargarArchivo();
void guardarArchivo();
void addAlumno();
void eliminarAlumno(string nombre);
void calificarAlumno();
void mostrarAlumnos();

int main(){

    int op;
    contador = 0;
    cargarArchivo();
    do {
        cout << "1 - Añadir un nuevo alumno" << endl;
        cout << "2 - Eliminar un alumno" << endl;
        cout << "3 - Calificar alumnos" << endl;
        cout << "4 - Listado de estudiantes" << endl;
        cout << "0 - Salir" << endl;
        cin >> op;

        switch(op)
        {
        case 1:
            //Añadir alumnos
            addAlumno();
            break;
        case 2:
            cout << "Ingrese el nombre del alumno que desee eliminar" << endl;
            cin >> tempText;
            eliminarAlumno(tempText);
            break;
        case 3:
            //Calificar alumnos
        case 4:
            //Listado alumnos

            break;
        case 0:
            //Guardamos y salimos
            guardarArchivo();
            break;
        default:
            cout << "Opcion desconocida!" << endl;
            break;
        }
    } while (op != 0);
return 0;
}



void cargarArchivo()
{
    ifstream cArchivo;
    cArchivo.open("AyED.txt", ios::in);
    if(cArchivo.is_open())
    {
        while (!cArchivo.eof())
        {
            cArchivo >> lista[contador].nombre;
            cArchivo.get( );
            cArchivo >> lista[contador].apellido;
            cArchivo.get( );
            cArchivo >> lista[contador].DNI;
            cArchivo >> lista[contador].edad;
            cArchivo >> lista[contador].nota;

            if((!lista[contador].nombre.empty())&&(!lista[contador].apellido.empty())&&(!lista[contador].DNI.empty())&&(lista[contador].edad != 0)&&(lista[contador].nota >= 0))
            {
                contador++;
            }
        }
    }
    cArchivo.close();
}
void guardarArchivo()
{
    ofstream gArchivo;
    gArchivo.open("AyED.txt", ios::out);
    if(gArchivo.is_open())
    {
        for(i = 0; i < contador; i++)
        {
             gArchivo << lista[i].nombre << " " << lista[i].apellido << " " <<lista[i].DNI << " " << lista[i].edad << " " << lista[i].nota <<endl;
        }
    }
    gArchivo.close();
}
void addAlumno()
{
    if(contador < MAX)
    {
        cout << "Ingrese el nombre del alumno: ";
        cin.ignore();
        getline(cin,lista[contador].nombre);
        cout << "Ingrese el apellido del alumno: ";
        getline(cin,lista[contador].apellido);
        cout << "Ingrese el DNI del alumno: ";
        getline(cin,lista[contador].DNI);
        cout << "Ingrese la edad del alumno: ";
        cin >> lista[contador].edad;
        contador = (contador + 1);

    } else
        cout << "Maximo de archivos alcanzados (50)!" << endl;
}

void eliminarAlumno(string nombre)
{
    for(i=0; i < contador; i++)
    {
        if(lista[i].nombre == nombre)
        {
            lista[i].nombre.clear();
            lista[i].apellido.clear();
            lista[i].DNI.clear();
            lista[i].edad = 0;
            lista[i].nota = 0;
            contador = (contador - 1);
            cout << "Alumno eliminado correctamente" << endl;
        }
    }

}
