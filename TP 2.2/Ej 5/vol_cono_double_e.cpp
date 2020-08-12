#include <iostream>
using namespace std;

int main(){

double pi, radio, altura, volumen;
pi = 3.141592;
radio = 14.5;
altura = 26.79;
volumen = ((pi*(radio * radio)* altura)/3);
cout << "El volumen de un cono con radio de base = 14,5 y altura 26,79 es: " << endl;
cout << "Volumen: " << volumen << endl;
return 0;
}
