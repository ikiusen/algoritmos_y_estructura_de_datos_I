#include <fstream>
#include "archivos.h"


void cargarArchivo(tLista &lista)
{
    ifstream cArchivo;
    cArchivo.open("Alumnos.txt", ios::in);
    if(cArchivo.is_open())
    {
        while (!cArchivo.eof())
        {
            cArchivo >> lista.elementos[lista.contador].nombre;
            cArchivo.get( );
            cArchivo >> lista.elementos[lista.contador].apellido;
            cArchivo.get( );
            cArchivo >> lista.elementos[lista.contador].carrera;
            cArchivo >> lista.elementos[lista.contador].anio;

            if((!lista.elementos[lista.contador].nombre.empty())&&(!lista.elementos[lista.contador].apellido.empty())&&(!lista.elementos[lista.contador].carrera.empty())&&(!lista.elementos[lista.contador].anio.empty()))
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
    gArchivo.open("Alumnos.txt", ios::out);
    if(gArchivo.is_open())
    {
        for(int i = 0; i < lista.contador; i++)
        {
             gArchivo << lista.elementos[i].nombre<< " " << lista.elementos[i].apellido << " " <<lista.elementos[i].carrera << " " << lista.elementos[i].anio << endl;
        }
    }
    gArchivo.close();
}
