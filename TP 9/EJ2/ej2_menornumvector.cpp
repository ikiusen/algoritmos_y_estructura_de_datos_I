#include <iostream>

using namespace std;

int main()
{
    int n;
    int minimo;
    cout << "Cuantos numero ingresará? ";
    cin >> n;
    int *punt_lista = new int [n];
    for(int i = 0; i < n; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> *(punt_lista+i);
    }
    minimo = *(punt_lista);
    cout << "El menor numero del vector es: " << endl;
    for(int i = 0; i < n; i++)
    {
        if(minimo >= *(punt_lista+i))
        {
            minimo = *(punt_lista+i);
        }
    }
    cout << minimo;
    delete punt_lista;
    return 0;
}
