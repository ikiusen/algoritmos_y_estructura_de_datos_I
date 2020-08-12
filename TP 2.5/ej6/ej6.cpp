#include <iostream>
using namespace std;

void intercambio(int &a, int &b);

int main()
{
    int num1, num2;
    cout << "Ingrese un numero: " << endl;
    cin >> num1;
    cout << "Ingrese un 2do numeros:" << endl;
    cin >> num2;
    cout << "El valor de los numeros es: " << endl;
    cout << "A: " << num1 << " B: " << num2 << endl;
    intercambio (num1, num2);
    cout << "El valor de los numeros es: " << endl;
    cout << "A: " << num1 << " B: " << num2 << endl;
    return 0;
}
 void intercambio (int &a, int &b)
 {
     int aux;
     aux = a;
     a = b;
     b = aux;
 }

