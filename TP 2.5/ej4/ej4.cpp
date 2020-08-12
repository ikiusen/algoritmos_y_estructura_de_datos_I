#include <iostream>
#include <cmath>
using namespace std;

double parteFraccionaria(double numero);

int main()
{
    double numero;
    cout << "Ingrese un numero con coma" << endl;
    cin >> numero;
    cout << "La parte fraccionaria de su numero es: " << parteFraccionaria(numero) << endl;
    return 0;
}

double parteFraccionaria(double numero)
{
    double fraccion, entero;
    entero = floor(numero);
    fraccion = (numero - entero);
    return fraccion;
}
