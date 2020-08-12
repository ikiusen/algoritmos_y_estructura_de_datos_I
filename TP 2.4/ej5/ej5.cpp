#include <iostream>
using namespace std;

int main()
{
int n, numero;
cout << "Ingrese un numero" << endl;
cin >> numero;
n = 1;
    while (n != numero)
    {
        n++;
    }
cout << "Se ha sumado 1 hasta llegar a: " << n << endl;
return 0;
}
