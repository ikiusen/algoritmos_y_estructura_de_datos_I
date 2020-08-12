#include <iostream>
using namespace std;

int main() {

int num1, num2, num3, prom;
cout << "Ingrese un numero:" << endl;
cin >> num1;
cout << "Ingrese un segundo numero:" << endl;
cin >> num2;
cout << "Ingrese un tercer numero:" << endl;
cin >> num3;
prom = ((num1 + num2 + num3)/3);
cout << "El promedio de sus tres numeros es: " << prom << endl;
return 0;
}
