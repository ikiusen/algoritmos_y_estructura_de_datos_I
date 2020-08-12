#include <iostream>
using namespace std;

void despliegue(int a);

int main()
{
    int a;
    cout << "Ingrese un numero" << endl;
    cin >> a;
    despliegue(a);
    return 0;
}

void despliegue (int a)
{
    cout << "La el valor del argumento enviado es: " << a << endl;
}
