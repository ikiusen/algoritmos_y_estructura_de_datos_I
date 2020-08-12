#include <iostream>
using namespace std;

int main()
{
    double sueldo;
    cout << "Ingrese su sueldo (sin puntos ni comas)" << endl;
    cin >> sueldo;
    if(sueldo <= 9000)
    {
        sueldo = (sueldo + (sueldo * 0.20));
    } else if ((sueldo > 9000) && (sueldo <= 15000))
            {
                sueldo = (sueldo + (sueldo * 0.10));
            } else if ((sueldo > 15000)&& (sueldo <= 20000))
                {
                    sueldo = (sueldo + (sueldo * 0.05));
                } else if (sueldo > 20000)
                    {
                        sueldo = (sueldo + (sueldo * 0.03));
                    }
    cout << "Su monton actualizado es: " << sueldo << endl;
    return 0;
}
