#include <iostream>
using namespace std;

void tiempo(int segTotal);

int main()
{
    int seg;
    cout << "Ingrese una cantidad en segundos" << endl;
    cin >> seg;
    tiempo (seg);
    return 0;
}

void tiempo (int segTotal)
{
    int hora, minutos, segundos, resto1;
    hora = (segTotal/3600);
    resto1 = (segTotal%3600);
    minutos = (resto1/60);
    segundos = (resto1%60);
    cout << "Su equivalencia en horas, minutos y segundos es: " << hora << "hs " << minutos << "min " << segundos <<"seg"<< endl;
}
