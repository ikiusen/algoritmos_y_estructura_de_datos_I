#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main()
{
    float alto, ancho;
    cout << "Ingrese el alto de su rectangulo"  << endl;
    cin >> alto;
    cout << "Ingrese el alto de su rectangulo"  << endl;
    cin >> ancho;

    Rectangulo rec(ancho, alto);
    cout << "Perimetro: " << rec.calcularPerimetro() << endl;
    cout << "Area: " << rec.calcularArea() << endl;
    return 0;
}
