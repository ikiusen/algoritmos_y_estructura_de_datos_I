#include <iostream>
using namespace std;

double cambio(double pesos);

int main()
{
    double monto;
    cout << "Ingrese un monto en pesos a convertir" << endl;
    cin >> monto;
    cout << "El valor en dolares del monto ingresado es: " << cambio(monto) << endl;
    return 0;
}
double cambio(double pesos)
{
    double const dolar = 70.0;
    double resultado;
    resultado = (pesos * dolar);
    return resultado;
}
