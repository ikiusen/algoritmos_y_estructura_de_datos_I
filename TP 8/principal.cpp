#include <iostream>
#include "listas.cpp"
#include "archivos.cpp"

using namespace std;

int main()
{
    tLista lista;
    string tempText,tempText1;
    int op,pos;
    bool ok;
    lista.contador = 0;
    cargarArchivo(lista);
do {
        cout << "1 - Añadir un nuevo alumno" << endl;
        cout << "2 - Eliminar un alumno" << endl;
        cout << "3 - Buscar alumnos" << endl;
        cout << "4 - Listado de alumnos" << endl;
        cout << "5 - Mostrar alumno por posicion" << endl;
        cout << "6 - Ordenar Lista por Nombre de Manera Ascendente" << endl;
        cout << "7 - Ordenar Lista por Nombre de Manera Descendente" << endl;
        cout << "0 - Salir" << endl;
        cin >> op;

        switch(op)
        {
        case 1:
            //Añadir alumnos
            addAlumno(lista,ok);
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
            //Buscar Alumno
            cout << "Ingrese el nombre del alumno que desea buscar: ";
            cin >> tempText;
            cout << "Ingrese el apellido del alumno que desea buscar: ";
            cin >> tempText1;
            buscarAlumno(lista,tempText, tempText1);
            break;
        case 4:
            //Listado de alumnos
            mostrarAlumnos(lista);
            break;
        case 5:
            cout << "Ingrese la posicion que corresponde al alumno: ";
            cin >> pos;
            mostrarAlumnoPorPos(lista, pos);
            break;
        case 6:
            ordenarLista(lista);
            break;
        case 7:
            ordenarListaDesc(lista);
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
