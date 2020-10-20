#include <iostream>

using namespace std;

int main()
{
    int n, aux;

    cout << "Ingrese cuantos valores ingresará: ";
    cin >> n;

    int *punt_lista = new int [n];

    for(int i = 0; i < n; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> *(punt_lista+i); //uso como puntero
        //punt_lista[i] uso como array;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j=0; j < n-1;j++)
        {
          if(*(punt_lista+i) > *(punt_lista+j))
          {
              aux =*(punt_lista+j);
              *(punt_lista+j) = *(punt_lista+i);
              *(punt_lista+i) = aux;
          }
        }
    }
    cout << "Array Ordenado: " << endl;
    for(int i = 0; i < n; i++)
    {

        cout << *(punt_lista+i) << " ";
    }

    delete punt_lista;
    return 0;
}
