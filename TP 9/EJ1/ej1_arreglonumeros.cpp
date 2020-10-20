#include <iostream>

using namespace std;

int main()
{
    int *punt_lista = new int [10];
    for(int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> *(punt_lista+i);
    }
    cout << "" << endl;
    cout << "Numeros pares: " << endl;
    for(int i = 0; i < 10; i++)
    {
        if((*(punt_lista+i)%2)==0)
        {
            cout << "Numero: " << *(punt_lista+i)<< endl;
            cout << "Pos memoria: " << (punt_lista+i) << endl;
        }
    }
    delete punt_lista;
    return 0;
}
