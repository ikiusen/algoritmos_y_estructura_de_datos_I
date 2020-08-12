#include <iostream>
using namespace std;

int main()
{
int n,suma = 0;
while (n >= 0)
{
    cout << "Ingrese un numero" << endl;
    cin >> n;
    suma = suma + n;
}
cout << "La suma de todos los numeros ingresados es: " << suma << endl;
return 0;
}
