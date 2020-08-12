#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void escribirEnArchivo();
void leerDeArchivo();
void lectorDeLineas();
string lectorPalabraMasLarga(string cadena);

int main()
{
    escribirEnArchivo();
    leerDeArchivo();
    return 0;
}


void escribirEnArchivo()
{
    ofstream salida;
    string cadena;
    salida.open("frases.txt");
    if(salida.is_open())
    {
     cout << "Ingrese una frase o ingrese fin para finalizar" << endl;
     getline (cin, cadena);
     while(cadena != "fin")
      {
        salida << cadena << endl;
        getline(cin, cadena);
      }
     salida << "fin" << endl;
    } else {
        cout << "ERROR: El archivo no existe" << endl;
           }
      salida.close();
}
void leerDeArchivo()
{
    ifstream entrada;
    string cadena;
    char aux;
    entrada.open("frases.txt");
    while(cadena != "fin")
    {
        entrada >> cadena;
        entrada.get(aux);
        if(cadena != "fin")
        {
            cout << lectorPalabraMasLarga(cadena);
            cout << cadena << aux;
        }

    }
    entrada.close();
}

string lectorPalabraMasLarga(string cadena)
{
    string aux, respuesta;
    int largo;
    aux = " ";
    if(cadena.length() > aux.length())
    {
        aux = cadena;
        largo = int(cadena.length());
    }
    respuesta = "La palabra más larga del archivo es: " + aux + " " + "con " + to_string(largo) +  " letras";
    return respuesta;
}


