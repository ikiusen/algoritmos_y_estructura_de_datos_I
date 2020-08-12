#include <iostream>
using namespace std;

int main(){
double x1,x2,y1,y2,m;
cout << "Ingrese su x1" << endl;
cin >> x1;
cout << "Ingrese su y1" << endl;
cin >> y1;
cout << "Ingrese su x2" << endl;
cin >> x2;
cout << "Ingrese su y2" << endl;
cin >> y2;
m=((y2-y1)/(x2-x1));
cout << "La pendiente m de su recta es: " << m <<endl;
return 0;
}
