#include <iostream>
using namespace std;


void nuevaMatriz();
void mostrarMatriz(int **,int,int);

int **matriz, fila,columna;

int main()
{
    nuevaMatriz();
    mostrarMatriz(matriz,fila,columna);

    for(int i; i<fila; i++)
    {
        delete[]matriz[i];
    }
    delete []matriz;

    return 0;
}

void nuevaMatriz()
{
    cout << "Cuantas filas tiene su matriz: ";
    cin >> fila;
    cout << "Cuantas columnas tiene su matriz: ";
    cin >> columna;

    matriz = new int*[fila];
    for(int i = 0; i < fila; i++)
    {
        matriz[i] = new int[columna];
    }

    for(int i = 0; i < fila; i++)
        for(int j = 0; j < columna; j++)
            {
                cout << "Ingrese un numero para la pos ["<<i<<"] [" << j <<"]: ";
                cin >> *(*(matriz+i)+j);
            }
}

void mostrarMatriz(int **matriz, int fila, int columna)
{
    cout << "Matriz A: " << endl;
    for(int i = 0; i < fila; i++){
        cout << "{";
        for(int j = 0; j < columna; j++)
            {
                cout << *(*(matriz+i)+j) <<" ";
            }
        cout<< "}" << endl;
    }


    cout << "Matriz T: " << endl;
    for(int i = 0; i < fila; i++){
        cout << "{";
        for(int j = 0; j < columna; j++)
            {
                cout << *(*(matriz+j)+i) <<" ";
            }
        cout<< "}" << endl;
    }
}
