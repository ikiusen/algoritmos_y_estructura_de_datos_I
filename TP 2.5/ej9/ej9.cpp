#include <iostream>
using namespace std;

void duplicar (int &a, int &b);

int main()
{
    int num1, num2;
    cout << "Ingrese un numero: " << endl;
    cin >> num1;
    cout << "Ingrese un 2do numero:" << endl;
    cin >> num2;
    cout << "El valor de los numeros es: " << endl;
    cout << "A: " << num1 << " B: " << num2 << endl;
    duplicar (num1, num2);
    cout << "Luego de la funcion el valor de los numeros es: " << endl;
    cout << "A: " << num1 << " B: " << num2 << endl;
    return 0;
}
 void duplicar (int &a, int &b)
 {
     a = a*2;
     b = b*2;
 }
