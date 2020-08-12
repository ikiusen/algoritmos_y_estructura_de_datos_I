#include <iostream>
using namespace std;
#include <string>

int main()
{
int nota1, nota2, nota3, promedio;
string resultado;
cout << "Ingrese nota 1" << endl;
cin >> nota1;
cout << "Ingrese nota 2" << endl;
cin >> nota2;
cout << "Ingrese nota 3" << endl;
cin >> nota3;
promedio = ((nota1 + nota2 + nota3)/3);
    if (promedio >= 7)
        {
         resultado = "El alumno esta aprobado";
        } else {
                resultado = "El alumno esta desaprobado";
               }
cout << resultado << ",su nota final es: " << promedio << endl;
return 0;
}
