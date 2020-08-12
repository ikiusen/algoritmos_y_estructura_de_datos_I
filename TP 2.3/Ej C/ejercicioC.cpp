#include <iostream>
using namespace std;

int main() {

double ladoC, base, altura, lado1, lado2, lado3, perimetroC, perimetroR, perimetroT;

cout << "Ingrese la medida del lado de su cuadrado" << endl;
cin >> ladoC;
cout << "Ingrese la medida de la base de su rectangulo" << endl;
cin >> base;
cout << "Ingrese la medida de la altura de su rectangulo" << endl;
cin >> altura;
cout << "Ingrese la medida del lado 1 de su triangulo" << endl;
cin >> lado1;
cout << "Ingrese la medida del lado 2 de su triangulo" << endl;
cin >> lado2;
cout << "Ingrese la medida del lado 3 de su triangulo" << endl;
cin >> lado3;
perimetroC = (ladoC * 4);
perimetroR = ((2 * base) + (2 * altura));
perimetroT = (lado1 + lado2 + lado3);
cout << "El perimetro de su cuadrado es de: " << perimetroC << endl;
cout << "El perimetro de su rectangulo es de: " << perimetroR << endl;
cout << "El perimetro de su triangulo es de: " << perimetroT << endl;



return 0;
}
