#include <iostream>
using namespace std;

void menuInicio();
void menuEntrega();
string selectProducto(int op);
string selectEntrega(int op);

int main()
{
    int op;
    string a, b;
    menuInicio();
    cin >> op;
    a = selectProducto(op);
    menuEntrega();
    cin >> op;
    b = selectEntrega(op);

    cout << "Usted eligio producto: " << a << endl;
    cout << "Tipo de entrega: " << b << endl;
    return 0;

}



void menuInicio()
{
    cout << "Bienvenido! Eliga un producto" << endl;
    cout << "1.- Simple" << endl;
    cout << "2.- Medio" << endl;
    cout << "3.- Premium" << endl;
}
void menuEntrega()
{
    cout << "Seleccion el metodo de entrega" << endl;
    cout << "1.- Normal" << endl;
    cout << "2.- Express" << endl;
    cout << "3.- Fast Delivery" << endl;
}
string selectProducto(int op)
{
    string respuesta;
    switch (op)
    {
    case 1:
        {
            respuesta = "Simple";
        }
        break;
    case 2:
        {
            respuesta = "Medio";
        }
        break;
    case 3:
        {
            respuesta = "Premium";
        }
        break;
    default:
        {
            respuesta = "Algo salio mal, por favor reintente";
        }
        break;
    }
    return respuesta;
}

string selectEntrega(int op)
{
    string respuesta;
    switch (op)
    {
    case 1:
        {
            respuesta = "Normal";
        }
        break;
    case 2:
        {
            respuesta = "Express";
        }
        break;
    case 3:
        {
            respuesta = "Fast Delivery";
        }
        break;
    default:
        {
            respuesta = "Algo salio mal, por favor reintente";
        }
        break;
    }
    return respuesta;
}
