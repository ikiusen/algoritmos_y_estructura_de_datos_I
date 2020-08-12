#include <iostream>
using namespace std;

int main(){
double x1, x2, x3, x4, y1, y2, y3, y4;
cout << "La funcion es y=2x+1, ingrese valores de X para encontrar valores de Y" << endl;
cout << "Ingrese x1" << endl;
cin >> x1;
cout << "Ingrese x2" << endl;
cin >> x2;
cout << "Ingrese x3" << endl;
cin >> x3;
cout << "Ingrese x4" << endl;
cin >> x4;
y1 = ((2 * x1) + 1);
y2 = ((2 * x2) + 1);
y3 = ((2 * x3) + 1);
y4 = ((2 * x4) + 1);
cout << "Sus valores de Y son: " << endl;
cout << "y1 = " << y1 << endl;
cout << "y2 = " << y2 << endl;
cout << "y3 = " << y3 << endl;
cout << "y4 = " << y4 << endl;
return 0;
}
