#include <iostream>
#include "../include/Articulo.h"

using namespace std;

int main()
{
    float precio;
    cout << "Ingrese el precio de su articulo: " << endl;
    cin >> precio;
    Articulo art(precio);

    cout << "El precio por mayor de su producto es: " << endl;
    cout << art.PrecioPorMayor() << endl;

    cout << "El precio detalle de su producto es: " << endl;
    cout << art.PrecioDetalle() << endl;
    return 0;
}
