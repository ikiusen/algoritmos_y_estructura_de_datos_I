#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int MAX = 50;
typedef struct {
    string nombre;
    string apellido;
    string DNI;
    int edad;
    double nota;
} tAlumno;

typedef tAlumno tArray[MAX];

typedef struct {
    tArray elementos;
    int contador;
}tLista;

tLista lista_alumnos;

void cargarArchivo();
void guardarArchivo();
void addAlumno();
void eliminarAlumno();
void calificarAlumno();
void mostrarAlumnos();

int main(){
    int op;
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
            //Eliminar alumnos
            eliminarAlumno();
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
}
void guardarArchivo()
{
}
void addAlumno()
{
    if(lista_alumnos.contador < MAX)
    {
        cout << "Ingrese el nombre del alumno: ";
        cin.ignore();
        getline(cin,lista_alumnos.elementos[lista_alumnos.contador].nombre);
        cout << "Ingrese el apellido del alumno: ";
        getline(cin,lista_alumnos.elementos[lista_alumnos.contador].apellido);
        cout << "Ingrese el DNI del alumno: ";
        getline(cin,lista_alumnos.elementos[lista_alumnos.contador].DNI);
        cout << "Ingrese la edad del alumno: ";
        cin >> lista_alumnos.elementos[lista_alumnos.contador].edad;
        lista_alumnos.contador = (lista_alumnos.contador + 1);

    } else
        cout << "Maximo de archivos alcanzados (50)!" << endl;
}

void eliminarAlumno()
{

}
