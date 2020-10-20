#include <iostream>
using namespace std;


void nuevaMatriz();
void mostrarSumaMatriz(int **,int**,int,int);

int **matriz,**matriz2, fila,columna;

int main()
{
    nuevaMatriz();
    mostrarSumaMatriz(matriz,matriz2,fila,columna);

    for(int i; i<fila; i++)
    {
        delete[] matriz[i];
        delete[] matriz2[i];
    }
    delete [] matriz;
    delete [] matriz2;

    return 0;
}

void nuevaMatriz()
{
    cout << "Cuantas filas tiene su matriz: ";
    cin >> fila;
    cout << "Cuantas columnas tiene su matriz: ";
    cin >> columna;

    matriz = new int*[fila];
    matriz2 = new int*[fila];
    for(int i = 0; i < fila; i++)
    {
        matriz[i] = new int[columna];
        matriz2[i] = new int[columna];
    }
    cout << "Generar Matriz A" << endl;
    for(int i = 0; i < fila; i++)
        for(int j = 0; j < columna; j++)
            {
                cout << "Ingrese un numero para la pos ["<<i<<"] [" << j <<"]: ";
                cin >> *(*(matriz+i)+j);
            }
    cout << "Generar Matriz B" << endl;
    for(int i = 0; i < fila; i++)
        for(int j = 0; j < columna; j++)
            {
                cout << "Ingrese un numero para la pos ["<<i<<"] [" << j <<"]: ";
                cin >> *(*(matriz2+i)+j);
            }
}

void mostrarSumaMatriz(int **matriz, int **matriz2, int fila, int columna)
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


    cout << "Matriz B: " << endl;
    for(int i = 0; i < fila; i++){
        cout << "{";
        for(int j = 0; j < columna; j++)
            {
                cout << *(*(matriz2+i)+j) <<" ";
            }
        cout<< "}" << endl;
    }

    cout << "Matriz Resultado: " << endl;
    for(int i = 0; i < fila; i++){
        cout << "{";
        for(int j = 0; j < columna; j++)
            {
                *(*(matriz+i)+j) = (*(*(matriz+i)+j) + *(*(matriz2+i)+j));
                cout << *(*(matriz+i)+j) <<" ";
            }
        cout<< "}" << endl;
    }
}

