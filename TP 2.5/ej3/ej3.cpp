#include <iostream>
using namespace std;
#include <cmath>

int funpot (int base,int exponente);

int main()
{
    int num1, num2;
    cout << "Ingrese la base:" << endl;
    cin >> num1;
    cout << "Ingrese el exponente (entero positivo):" << endl;
    cin >> num2;
    cout << "Su resultado: " << funpot(num1, num2) << endl;
    return 0;
}

int funpot (int base, int exponente)
{
    int resultado;
    resultado = pow(base,exponente);
    return resultado;
}


