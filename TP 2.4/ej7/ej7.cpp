#include <iostream>
using namespace std;

int main() {
int n1, n2;
cout << "Ingrese un numero" << endl;
cin >> n1;
cout << "Ingrese otro numero" << endl;
cin >> n2;
    if(n2 > n1)
    {
        cout << "El segundo numero es mayor que el primero "<< n2 << ">" << n1 << endl;
    } else {
        while(n2 < n1)
        {
         cout << "Re ingrese el 2do numero" << endl;
         cin >> n2;
        }
        cout << "El segundo numero es mayor que el primero "<< n2 << ">" << n1 << endl;
    }
return 0;
}
