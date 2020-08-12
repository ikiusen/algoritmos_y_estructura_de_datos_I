#include <iostream>
using namespace std;

double cenToPulg(double cen);
double gradToFar(double gra);
double libToKg(double lib);

int main()
{
    int op;
    double cen,gra,lib;
    cout << "Por favor seleccione que conversion desea realizar (0 para salir)" << endl;
    cout << "1.- Centimetros a Pulgadas" << endl;
    cout << "2.- Celsius a Farenheit" << endl;
    cout << "3.- Libras a Kilogramos" << endl;
    cin >> op;
    while(op != 0)
    {
    switch (op){
    case 1:
        {
            cout << "Ingrese su cantidad de centimetros" << endl;
            cin >> cen;
            cout << "Su equivalencia en pulgadas es: " << cenToPulg(cen) << endl;
            cout << "Ingrese 0 para salir del programa, o alguna de las otras opciones" << endl;
            cin >> op;
        }
        break;
    case 2:
        {
            cout << "Ingrese su cantidad de grado C" << endl;
            cin >> gra;
            cout << "Su equivalencia en Farenheit es " << gradToFar(gra) << endl;
            cout << "Ingrese 0 para salir del programa, o alguna de las otras opciones" << endl;
            cin >> op;
        }
        break;
    case 3:
        {
            cout << "Ingrese su cantidad de libras" << endl;
            cin >> lib;
            cout << "Su equivalencia en Kilogramos es " << libToKg(lib) << endl;
            cout << "Ingrese 0 para salir del programa, o alguna de las otras opciones" << endl;
            cin >> op;
        }
        break;
    default:
        {
            cout << "Seleccione una opcion valida" << endl;
        }
        break;
    }
    }
    return 0;
}

double cenToPulg(double cen)
{
    double pulgada;
    pulgada = (cen/2.54);
    return pulgada;
}
double gradToFar(double gra)
{
    double far;
    far = ((gra * 1.8) + 32);
    return far;
}
double libToKg(double lib)
{
    double kg;
    kg = (lib/2.205);
    return kg;
}
