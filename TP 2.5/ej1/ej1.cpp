#include <iostream>
using namespace std;

float mult (float a, float b);

int main()
{
    float num1, num2;
    cout << "Ingrese un numero" << endl;
    cin >> num1;
    cout << "Ingrese un 2do numero" << endl;
    cin >> num2;
    cout << "Su resultado es: " << mult(num1, num2) << endl;
    return 0;
}

float mult (float a, float b)
{
    float resultado;
    resultado = (a * b);
    return resultado;
}
