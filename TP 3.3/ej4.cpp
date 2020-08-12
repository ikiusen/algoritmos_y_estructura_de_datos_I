#include <iostream>
using namespace std;

int main()
{
    int a, b, resta;
    cout << "Ingrese un numero: " << endl;
    cin >> a;
    cout << "Ingrese otro numero: " << endl;
    cin >> b;
    resta = (a - b);
    if(resta <= 10)
    {
        if(a >= b)
        {
            for(b;b<=a;b++)
            {
                cout << b << endl;
            }
        } else {
            for(a;a<=b;a++)
            {
                cout << a << endl;
            }
        }
    }
cout << "Esos son los numeros entre a y b" << endl;
return 0;
}
