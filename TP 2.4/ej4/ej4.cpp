#include <iostream>
using namespace std;

int main()
{
int n = 0, num, suma = 0,i = 0;
double promedio;
while (n != 99)
{
    cout << "Ingrese un numero" << endl;
    cin >> n;
    if(n != 99)
    {
        cout << "El numero ingresado: " << n << endl;
        suma = suma + n;
        i++;
    }
}
promedio = (suma/i);
cout << "El promedio de los numeros ingresados fue: " <<promedio << endl;
return 0;



}
