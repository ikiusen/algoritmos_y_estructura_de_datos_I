#include <iostream>
using namespace std;

int main()
{
int numero, n = 1, suma = 0;
cout << "Ingrese un numero" << endl;
cin >> numero;
    while (n <= numero)
    {
        suma = suma + n;
        n++;
    }
cout << "La suma desde 1 a " << numero << " es: " << suma << endl;
return 0;
}
