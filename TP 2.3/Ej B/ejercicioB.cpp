#include <iostream>
using namespace std;

int main(){
double nota1, nota2, nota3,notaF;
cout << "Ingrese la nota de laboratorio" << endl;
cin >> nota1;
cout << "Ingrese la nota de teoria" << endl;
cin >> nota2;
cout << "Ingrese la nota practica" << endl;
cin >> nota3;
nota1 = ((nota1 * 60) / 100);
nota2 = ((nota2 * 30) / 100);
nota3 = ((nota3 * 10) / 100);
notaF = (nota1 + nota2 + nota3);
cout << "La nota final de su alumno es: " << notaF << endl;
return 0;
}
