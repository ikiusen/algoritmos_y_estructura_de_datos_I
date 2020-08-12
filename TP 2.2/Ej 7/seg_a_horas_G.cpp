#include <iostream>
using namespace std;

int main(){

int hora,minutos,segundos,resto1, cantidad;
cout << "Ingrese un tiempo en segundos" << endl;
cin >> cantidad;
hora = (cantidad/3600);
resto1 = (cantidad%3600);
minutos = (resto1/60);
segundos = (resto1%60);
cout << "Su equivalencia en horas, minutos y segundos es: " << hora << "hs " << minutos << "min " << segundos <<"seg"<< endl;
return 0;
}
