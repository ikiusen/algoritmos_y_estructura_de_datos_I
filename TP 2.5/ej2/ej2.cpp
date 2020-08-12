#include <iostream>
using namespace std;
#include <cmath>

float al_cuadrado (float a);

int main()
{
    float num1;
    cout << "Ingrese el numero que desee elevar al cuadrado:" << endl;
    cin >> num1;
    cout << "Su resultado: " << al_cuadrado(num1) << endl;
    return 0;
}

float al_cuadrado (float a)
{
    float resultado;
    resultado = pow(a,2);
    return resultado;
}
