#include <iostream>
#include <string>
#include <ctime>
using namespace std;

typedef enum {manzana, banana, pera, uva, mandarina, naranja, kiwi} tFruta;

string getFrutas(tFruta fruta);
char* fechaDeHoy();

int main()
{
    string codigo, rsocial,respuesta, fecha_entrega;
    int num;
    tFruta fruta;

    cout << "Ingrese codigo del proveedor" << endl;
    getline(cin, codigo);
    cout << "Ingrese la razon social de su proveedor" << endl;
    getline(cin, rsocial);
    cout << "Ingrese fecha de entrega" << endl;
    getline(cin,fecha_entrega);
    cout << "Ingrese el codigo de las frutas a pedir (Presione 0 para dejar de pedir)" << endl;
    cin >> num;
    while (num != 0)
    {
        fruta = tFruta(num-1);
        respuesta = respuesta + " " + getFrutas(fruta);
        cin >> num;
    }
    cout << "El pedido sera:" << endl;
    cout << "Codigo de proveedor: " << codigo << " Razon social: " << rsocial << endl;
    cout << "Fecha de pedido: " << fechaDeHoy() << endl;
    cout << "Fecha de entrega: " << fecha_entrega << endl;
    cout << "Pedido: " << respuesta << endl;
    return 0;
}


string getFrutas(tFruta fruta)
{
    string respuesta;
    if(fruta == manzana)
    {
        respuesta = "Manzanas";
    }
    if(fruta == banana)
    {
        respuesta = "Bananas";
    }
    if(fruta == pera)
    {
        respuesta = "Peras";
    }
    if(fruta == uva)
    {
        respuesta = "Uvas";
    }
    if(fruta == mandarina)
    {
        respuesta = "Mandarinas";
    }
    if(fruta == naranja)
    {
        respuesta = "Naranjas";
    }
    if(fruta == kiwi)
    {
        respuesta = "Kiwis";
    }
    return respuesta;
}
char* fechaDeHoy()
{
    time_t now = time(0);
    char* dt = ctime(&now);
    return dt;
}
