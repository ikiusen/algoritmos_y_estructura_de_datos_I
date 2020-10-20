#include <iostream>
 using namespace std;


 const int dim = 10;

 void cargarMatriz(int dimension);
 void mostrarMatriz(int matriz[dim][dim],int dimension);
 void sumarMatriz(int matriz[dim][dim], int matriz1[dim][dim], int dimension);
 void restarMatriz(int matriz[dim][dim], int matriz1[dim][dim], int dimension);
 void multiMatriz(int matriz[dim][dim], int matriz1[dim][dim], int dimension);
 void puntosSillaMatriz(int matriz[dim][dim],int dimension);
 void trasponerMatriz(int matriz[dim][dim],int dimension);


 int main()
 {
     int n;
     cout << "Determine la dimension de la matriz: ";
     cin >> n;
     cargarMatriz(n);

     return 0;
 }

 void cargarMatriz(int dimension)
 {
     int M[dim][dim], fila, columna;
     int M1[dim][dim];

     for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++)
        {
            cout << "Ingrese la posicion A["<< i << "]" << "[" << j << "]"<< endl;
            cin >> fila;
            M[i][j] = fila;
        }
     }

     for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++)
        {
            cout << "Ingrese la posicion B["<< i << "]" << "[" << j << "]"<< endl;
            cin >> fila;
            M1[i][j] = fila;
        }
     }
     sumarMatriz(M,M1,dimension);
     restarMatriz(M,M1,dimension);
     multiMatriz(M,M1,dimension);
     trasponerMatriz(M,dimension);
 }
 void mostrarMatriz(int matriz[dim][dim],int dimension)
 {
     for(int i = 0; i < dimension; i++) {
        cout << "{" << " ";
        for(int j = 0; j < dimension; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout <<" " << "}" << endl;
    }
 }

void sumarMatriz(int matriz[dim][dim], int matriz1[dim][dim], int dimension)
{
    int R[dim][dim];

    for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++)
        {
            R[i][j] = (matriz[i][j]+matriz1[i][j]);
        }
    }

    cout << "El resultado de la suma de sus matrices es: " << endl;
    mostrarMatriz(R,dimension);

}

void restarMatriz(int matriz[dim][dim], int matriz1[dim][dim], int dimension)
{
    int R[dim][dim];

    for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++)
        {
            R[i][j] = (matriz[i][j]- matriz1[i][j]);
        }
    }

    cout << "El resultado de la resta de sus matrices es: " << endl;
    mostrarMatriz(R,dimension);
}

void multiMatriz(int matriz[dim][dim], int matriz1[dim][dim], int dimension)
{
    int R[dim][dim];

    for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++)
        {
            for(int k = 0; k<dimension;k++)
            {
                R[i][j] += (matriz[i][k]*matriz1[k][j]);
            }
        }
    }
    cout << "El resultado del producto de sus matrices es: " << endl;
    mostrarMatriz(R,dimension);
}

void trasponerMatriz(int matriz[dim][dim], int dimension)
{
    int R[dim][dim];

    for(int i = 0; i < dimension; i++) {
        for(int j = 0; j < dimension; j++) {
           R[j][i] = matriz[i][j];
        }
    }
    cout << "La matriz A traspuesta da: " << endl;
    mostrarMatriz(R,dimension);
}

