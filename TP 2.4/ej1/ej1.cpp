#include <iostream>
using namespace std;

int main(){
int cantidad;
const int precio = 80;
double preciototal;
cout << "¿Cuantos productos desea comprar?" << endl;
cin >> cantidad;
preciototal = (cantidad * precio);
if((cantidad > 10) && (cantidad < 20))
    {
    preciototal = (preciototal - ((preciototal * 12)/100));

    } else if ((cantidad > 20) && (cantidad < 30))
        {
         preciototal = (preciototal - ((preciototal * 25)/100));

        } else if (cantidad > 30)
            {
                preciototal = (preciototal - ((preciototal * 40)/100));
            }
cout << "El valor final de su compra es: " << preciototal << endl;
return 0;
}
