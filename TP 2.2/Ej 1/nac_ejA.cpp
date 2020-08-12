#include <iostream>
using namespace std;

int main(){

int dia, mes, ano, edad;
cout << "Ingrese dia de nacimiento:" << endl;
cin >> dia;
cout << "Ingrese mes de nacimiento:" << endl;
cin >> mes;
cout << "Ingrese ano de nacimiento:" << endl;
cin >> ano;
edad = (2020 - ano);
cout << "Usted nacio el :" << dia << "/" << mes << "/" << ano << endl;
cout << "Por lo tanto su edad es :" << edad << endl;
return 0;
}
