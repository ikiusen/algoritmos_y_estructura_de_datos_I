#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void escribirEnArchivo();
void leerDeArchivo();
string lectorDeLineas();
string lectorPalabraMasLarga();

int main()
{
    escribirEnArchivo();
    leerDeArchivo();
    cout << lectorPalabraMasLarga() << endl;
    cout << lectorDeLineas() << endl;
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
    entrada.open("frases.txt");
    if(entrada.is_open())
    {
        while(cadena != "fin")
        {
        getline(entrada, cadena);
            if(cadena != "fin")
            {
                cout << cadena << endl;
                cout << endl;
            }
        }
    }
    entrada.close();
}

string lectorPalabraMasLarga()
{
    ifstream entrada;
    string aux, respuesta, cadena;
    char caracter;
    int largo;
    aux = " ";
    entrada.open("frases.txt");
    if(entrada.is_open())
    {
        while(cadena != "fin")
        {
            entrada >> cadena;
            entrada.get(caracter);
            if(cadena.length() > aux.length())
            {
                aux = cadena;
                largo = int(cadena.length());
            }
        }
    }
    respuesta = "La palabra más larga del archivo es: " + aux + " " + "con " + to_string(largo) +  " letras";
    entrada.close();
    return respuesta;
}

string lectorDeLineas()
{
    ifstream entrada;
    string aux, respuesta, cadena;
    int clineas,cpalabras;
    double promedio;
    char caracter;
    entrada.open("frases.txt");
    clineas = 0;
    cpalabras = 0;
    if(entrada.is_open())
    {
        while(cadena != "fin")
        {
            entrada >> cadena;
            if(cadena != "fin")
            {
                cpalabras++;
                entrada.get(caracter);
                if(caracter == '\n')
                {
                    clineas++;
                }
            }
        }
    }
    promedio = double(cpalabras)/clineas;
    respuesta = "La cantidad total de palabras es: " + to_string(cpalabras) +
    " y el promedio por lineas es: " +to_string(promedio);
    return respuesta;
}

