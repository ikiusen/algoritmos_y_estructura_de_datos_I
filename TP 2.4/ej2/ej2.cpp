#include <iostream>
using namespace std;

int main()
{
const int precioHora = 200 , precioExtra = 250;
int horas, extras, sueldo;
cout << "Cuantas horas trabajo?" << endl;
cin >> horas;

if (horas > 40)
 {
     extras = horas - 40;
     sueldo = (40 * precioHora) + (extras * precioExtra);
 } else {
     sueldo = (horas * precioHora);
 }
cout << "Su sueldo sera de: " << sueldo << endl;
return 0;
}

