#include <iostream>
#include <string>
#include "Persona.h"

using namespace std;

int main()
{
  int dia, dia2, mes, mes2,anio,anio2;
  string nombre;

  cout << "Ingrese su nombre: ";
  getline(cin,nombre);
  cout << "Ingrese su dia de nacimiento: ";
  cin >> dia;
  cout << "Ingrese su mes de nacimiento: ";
  cin >> mes;
  cout << "Ingrese su anio de nacimiento: ";
  cin >> anio;
  Persona p(nombre,anio,mes,dia);
  cout << "Ingrese un dia: ";
  cin >> dia2;
  cout << "Ingrese un mes: ";
  cin >> mes2;
  cout << "Ingrese un anio: ";
  cin >> anio2;
  cout << "Su nombre es: " << p.Getnombre() << " y su edad: " << p.CalcularEdad(anio2,mes2,dia2) << " anios." << endl;


}
