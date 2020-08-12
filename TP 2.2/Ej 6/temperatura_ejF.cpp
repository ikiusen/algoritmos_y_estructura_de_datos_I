#include <iostream>
using namespace std;

int main(){

double fah, celsius;
cout << "Ingrese su temperatura en Fahrenheit: " << endl;
cin >> fah;
celsius = (0.55*(fah - 32.0));
cout << "Su equivalente en Celsius es: " << celsius << endl;
return 0;
}
