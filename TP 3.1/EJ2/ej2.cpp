#include <iostream>
#include <string>
using namespace std;

typedef enum {primera_clase, bussines_clase, economica_clase} tClase;
typedef enum { BHI, AEP, EPA, EZE, BRC, CTC, CRD} tAeropuerto;

string getClase(tClase clase);
string getAeropuerto(tAeropuerto aero);

int main()
{
    int num1, num2, num3;
    string nombre, dni;
    tAeropuerto destino, origen;
    tClase clase;

    cout << "Ingrese su nombre completo" << endl;
    getline(cin,nombre);
    cout << "Ingrese su dni"<< endl;
    getline(cin,dni);
    cout << "Ingrese el codigo de la clase de su vuelo (1 a 3)" << endl;
    cin >> num1;
    clase = tClase(num1-1);
    cout << "Ingrese el codigo del aeropuerto de origen de su vuelo (1 a 7)" << endl;
    cin >> num2;
    origen = tAeropuerto(num2-1);
    cout << "Ingrese el codigo del aeropuerto de destino de su vuelo (1 a 7)" << endl;
    cin >> num3;
    while(num3 == num2)
    {
       cout << "EL MISMO AEROPUERTO NO PUEDE SER ORIGEN Y DESTINO,INGRESE DE NUEVO SU DESTINO" << endl;
       cin >> num3;
    }
    destino = tAeropuerto(num3-1);
    cout << "Sus datos de vuelo son:" << endl;
    cout << "Nombre: " << nombre << " DNI: " << dni << endl;
    cout << "Clase: " << getClase(clase) << endl;
    cout << "Aeropuerto de Origen: " << getAeropuerto(origen) << endl;
    cout << "Aeropuerto de Destino: " << getAeropuerto(destino) << endl;
    cout << "Buen Viaje!" << endl;
    return 0;
}


string getClase(tClase clase)
{
    string respuesta;
    if(clase == primera_clase)
    {
        respuesta = "Primera Clase";
    } else if (clase == bussines_clase)
            {
                respuesta = "Clase Negocios";
            } else {
                respuesta = "Clase Economica";
            }
    return respuesta;
}

string getAeropuerto(tAeropuerto aero)
{
    string respuesta;
    if(aero == BHI)
    {
        respuesta = "Bahia Blanca";
    }
    if(aero == AEP)
    {
        respuesta = "Aeroparque";
    }
    if(aero == EPA)
    {
        respuesta = "El Palomar";
    }
    if(aero == EZE)
    {
        respuesta = "Ezeiza";
    }
    if(aero == BRC)
    {
        respuesta = "San Carlos de Bariloche";
    }
    if(aero == CTC)
    {
        respuesta = "San Fernando del Valle de Catamarca";
    }
    if(aero == CRD)
    {
        respuesta = "Comodoro Rivadavia";
    }
    return respuesta;
}
